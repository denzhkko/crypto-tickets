// SPDX-License-Identifier: MIT
pragma solidity >=0.4.22 <0.9.0;

import "@openzeppelin/contracts/token/ERC721/ERC721.sol";
import "@openzeppelin/contracts/utils/Counters.sol";

contract Concert is ERC721 {
    using Counters for Counters.Counter;
    Counters.Counter private _tokenIdCounter;

    string private _concertTitle;
    int64 private _date;
    string private _posterUrl;
    int64 private _ticketCount;
    uint256 private _ticketPrice;

    constructor(
        string memory name_,
        string memory symbol_,
        string memory concertTitle_,
        int64 date_,
        string memory posterUrl_,
        int64 ticketCount_,
        uint256 ticketPrice_
    ) ERC721(name_, symbol_) {
        _concertTitle = concertTitle_;
        _date = date_;
        _posterUrl = posterUrl_;
        _ticketCount = ticketCount_;
        _ticketPrice = ticketPrice_;
    }

    function safeMint(address to_) public {
        // TODO: add price check
        // TODO: add ticket count check

        uint256 tokenId = _tokenIdCounter.current();
        _tokenIdCounter.increment();
        _safeMint(to_, tokenId);
    }

    function getConcertTitle() public view returns (string memory) {
        return _concertTitle;
    }

    function getDate() public view returns (int64) {
        return _date;
    }

    function getPosterUrl() public view returns (string memory) {
        return _posterUrl;
    }

    function getTicketCount() public view returns (int64) {
        return _ticketCount;
    }

    function getTicketPrice() public view returns (uint256) {
        return _ticketPrice;
    }
}
