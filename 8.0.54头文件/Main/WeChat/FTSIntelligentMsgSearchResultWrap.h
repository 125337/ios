@interface FTSIntelligentMsgSearchResultWrap : NSObject
{
    unsigned int _sessionSearchResultCount; // +0x8
    NSString * _keyword; // +0x10
    CContact * _sessionContact; // +0x18
    CContact * _talkerContact; // +0x20
    SearchMatchTip * _matchTip; // +0x28
    NSMutableArray * _arrMsgItems; // +0x30
    NSMutableArray * _arrFaceClusterItem; // +0x38
    NSMutableArray * _arrSessionResult; // +0x40
    NSMutableDictionary * _dicSessionResult; // +0x48
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
- (id)arrFaceClusterItem;
- (void)setArrFaceClusterItem:(id)arg1;
- (id)arrSessionResult;
- (void)setArrSessionResult:(id)arg1;
- (id)dicSessionResult;
- (void)setDicSessionResult:(id)arg1;
- (unsigned int)sessionSearchResultCount;
- (void)setSessionSearchResultCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

