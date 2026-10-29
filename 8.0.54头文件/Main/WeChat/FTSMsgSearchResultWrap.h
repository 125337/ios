@interface FTSMsgSearchResultWrap : NSObject
{
    NSString * _keyword; // +0x8
    CContact * _sessionContact; // +0x10
    CContact * _talkerContact; // +0x18
    SearchMatchTip * _matchTip; // +0x20
    NSMutableArray * _arrMsgItems; // +0x28
    NSMutableArray * _arrSessionResult; // +0x30
    NSMutableDictionary * _dicSessionResult; // +0x38
}
- (void)resetSearchResult;
- (long long)getResultCountForDisplay;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)sessionContact;
- (void)setSessionContact:(id)arg1;
- (id)talkerContact;
- (void)setTalkerContact:(id)arg1;
- (id)matchTip;
- (void)setMatchTip:(id)arg1;
- (id)arrMsgItems;
- (void)setArrMsgItems:(id)arg1;
- (id)arrSessionResult;
- (void)setArrSessionResult:(id)arg1;
- (id)dicSessionResult;
- (void)setDicSessionResult:(id)arg1;
- (void).cxx_destruct;
@end

