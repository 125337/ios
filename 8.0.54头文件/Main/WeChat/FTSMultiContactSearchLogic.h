@interface FTSMultiContactSearchLogic : NSObject <IFTSContactDataProviderExt>
{
    NSMutableArray * _arrContact; // +0x8
    NSMutableArray * _arrGroupContact; // +0x10
    NSMutableDictionary * _dicContact; // +0x18
    NSMutableArray * _arrKeywords; // +0x20
    NSMutableArray * _arrResultWrap; // +0x28
    BOOL _hasStaredSearch; // +0x30
    WCSmartGroupCore * _recommendLogic; // +0x38
    unsigned int _smartGroupSeq; // +0x40
    NSMutableArray * _arrRecommendContacts; // +0x48
    BOOL _bNewSearchForSingleQuery; // +0x50
    BOOL _bStrictMatchGroup; // +0x51
    BOOL _bForbidRecommendOpenIMContact; // +0x52
    id <FTSMultiContactSearchDelegate> _delegate; // +0x58
    NSString * _fullQuery; // +0x60
    NSArray * _arrShareGroupStrictContact; // +0x68
}
+ (id)FilterArrKeywords:(id)arg1;
- (id)init;
- (id)initWithQuerys:(id)arg1 andKeywords:(id)arg2;
- (void)initData:(id)arg1;
- (void)fillSourceContact;
- (BOOL)isTargetContact:(id)arg1;
- (id)getArrResultWrap;
- (id)getArrRecommendContactResultWrap;
- (void)appendResultWrap:(id)arg1;
- (void)addOrderedResultFrom:(id)arg1;
- (id)preFilterSourceContact;
- (void)asyncSearch;
- (void)sortContacts:(id)arg1 matchTips:(id)arg2;
- (void)handleQueryChanged:(id)arg1;
- (void)handleQueryChanged:(id)arg1 keywords:(id)arg2;
- (void)onContactReload;
- (BOOL)asyncSearchRecommendsBy:(id)arg1;
- (void)finishTask:(id)arg1;
- (unsigned int)genSeq;
- (void)updateRecommendContacts:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bNewSearchForSingleQuery;
- (void)setBNewSearchForSingleQuery:(BOOL)arg1;
- (id)fullQuery;
- (void)setFullQuery:(id)arg1;
- (id)arrShareGroupStrictContact;
- (void)setArrShareGroupStrictContact:(id)arg1;
- (BOOL)bStrictMatchGroup;
- (void)setBStrictMatchGroup:(BOOL)arg1;
- (BOOL)bForbidRecommendOpenIMContact;
- (void)setBForbidRecommendOpenIMContact:(BOOL)arg1;
- (void).cxx_destruct;
@end

