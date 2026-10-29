@interface XMailSearchMailAddrLogic : NSObject
{
    id /* block */ _searchResultBlock; // +0x8
    NSString * _curSearchingInput; // +0x10
    NSString * _nextSearchInput; // +0x18
    unsigned long long _lastSearchStartTime; // +0x20
    WCCgiBlockHelper * _curSearchingCgiHelper; // +0x28
}
- (void)searchWithInput:(id)arg1;
- (void)startSearchWithInput:(id)arg1 startTime:(unsigned long long)arg2;
- (void)onGetSearchResult:(id)arg1 input:(id)arg2;
- (id /* block */)searchResultBlock;
- (void)setSearchResultBlock:(id /* block */)arg1;
- (id)curSearchingInput;
- (void)setCurSearchingInput:(id)arg1;
- (id)nextSearchInput;
- (void)setNextSearchInput:(id)arg1;
- (unsigned long long)lastSearchStartTime;
- (void)setLastSearchStartTime:(unsigned long long)arg1;
- (id)curSearchingCgiHelper;
- (void)setCurSearchingCgiHelper:(id)arg1;
- (void).cxx_destruct;
@end

