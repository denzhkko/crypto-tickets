// SPDX-License-Identifier: MIT
pragma solidity >=0.4.22 <0.9.0;

import "./Concert.sol";

contract ConcertStorage {
    constructor() {}

    mapping(address => address[]) public _organizer2concerts;

    /**
     * @dev Deploy concert contract
     *
     * Requirements:
     *
     * - `name_` nft name
     * - `symbol_` nft identification
     * - `concertTitle` Concert title
     * - `date_` date of concert. Unix 64-bit timestamp
     * - `posterUrl_` poster image url
     * - `ticketCount_` total ticket count
     * - `ticketPrice_` ticket price in wei
     */
    function deployConcert(
        string memory name_,
        string memory symbol_,
        string memory concertTitle_,
        int64 date_,
        string memory posterUrl_,
        uint256 ticketCount_,
        uint256 ticketPrice_
    ) external returns (address) {
        Concert concert = new Concert(
            name_,
            symbol_,
            concertTitle_,
            date_,
            posterUrl_,
            ticketCount_,
            ticketPrice_
        );
        address concertAddress = address(concert);
        _organizer2concerts[msg.sender].push(address(concertAddress));

        return address(concertAddress);
    }
}
