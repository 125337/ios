@interface LocalJSEventHandler_getSearchSuggestionData : LocalJSEventHandler_BaseEvent <WSContactSearchLogicDelegate, PBMessageObserverDelegate>
{
    WSContactSearchLogic * _searchContactLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
- (void)handleSuggestionCgi:(id)arg1;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (id)searchContactLogic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onReturnWSContactResult:(id)arg1;
- (void)setSearchContactLogic:(id)arg1;
- (void).cxx_destruct;
@end
