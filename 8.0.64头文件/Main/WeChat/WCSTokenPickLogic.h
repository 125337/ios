@interface WCSTokenPickLogic : NSObject
{
    BOOL _isTokenSearching; // +0x8
    BOOL _isTokenResulting; // +0x9
    BOOL _bNeedDisplayIndexContacts; // +0xa
    NSString * _rawQuery; // +0x10
    NSMutableArray * _arrKeywords; // +0x18
    NSMutableArray * _arrTokens; // +0x20
    NSArray * _arrIndexTitles; // +0x28
    NSMutableArray * _arrLastSelectedTokens; // +0x30
    WCSTokenPickData * _lastSelectedRecommendToken; // +0x38
    NSMutableArray * _arrLastIndexContactTokens; // +0x40
    NSMutableDictionary * _dicSelectedContact; // +0x48
    NSMutableDictionary * _dicSelectedIndex; // +0x50
}
- (id)init;
- (void)parseQuery:(id)arg1;
- (BOOL)hasTokenResultCache;
- (void)cacheSelectedTokens;
- (void)handleNilQueryChanged;
- (long long)getSectionForSelectedContact:(id)arg1;
- (char)getTokenDataTypeForSelectedContact:(id)arg1;
- (id)getIndexContactTokenDatas;
- (id)getRecommendContactPickData;
- (id)getRecommendGroupPickData;
- (void)insertRecommendCOntactPickData:(id)arg1;
- (void)addOneSectionToTokensFromIndex:(long long)arg1;
- (long long)firstIndexOfIndexContactToken;
- (BOOL)hasSelectedIndexResult;
- (BOOL)isTokenSearching;
- (void)setIsTokenSearching:(BOOL)arg1;
- (BOOL)isTokenResulting;
- (void)setIsTokenResulting:(BOOL)arg1;
- (id)rawQuery;
- (void)setRawQuery:(id)arg1;
- (id)arrKeywords;
- (void)setArrKeywords:(id)arg1;
- (id)arrTokens;
- (void)setArrTokens:(id)arg1;
- (BOOL)bNeedDisplayIndexContacts;
- (void)setBNeedDisplayIndexContacts:(BOOL)arg1;
- (id)arrIndexTitles;
- (void)setArrIndexTitles:(id)arg1;
- (id)arrLastSelectedTokens;
- (void)setArrLastSelectedTokens:(id)arg1;
- (id)lastSelectedRecommendToken;
- (void)setLastSelectedRecommendToken:(id)arg1;
- (id)arrLastIndexContactTokens;
- (void)setArrLastIndexContactTokens:(id)arg1;
- (id)dicSelectedContact;
- (void)setDicSelectedContact:(id)arg1;
- (id)dicSelectedIndex;
- (void)setDicSelectedIndex:(id)arg1;
- (void).cxx_destruct;
@end
