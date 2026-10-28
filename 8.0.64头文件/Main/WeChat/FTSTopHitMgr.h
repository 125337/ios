@interface FTSTopHitMgr : NSObject
{
    NSMutableArray * _arrTopHitContactItem; // +0x8
    NSMutableArray * _arrTopHitAddressBookItem; // +0x10
    NSMutableDictionary * _dicTopHitExtItem; // +0x18
    FTSTopHitItem * _thMemberMatchedGroup; // +0x20
    NSMutableDictionary * _dicTopHitResultItem; // +0x28
    NSMutableDictionary * _dicTopHitResultItemValue; // +0x30
    NSMutableDictionary * _dicTopHitResultCache; // +0x38
    NSMutableArray * _arrAllTopHitMMGroupResult; // +0x40
    NSString * _lastQueryText; // +0x48
    BOOL _hasInit; // +0x50
    BOOL _bNeedSearch; // +0x51
    BOOL _needSaveContactTopHit; // +0x52
    BOOL _needSaveAddressBookTopHit; // +0x53
    BOOL _needSaveExtTopHit; // +0x54
    unsigned int _thType; // +0x58
    id <FTSTopHitDelegate> _delegateForContactSearch; // +0x60
    id <FTSTopHitDelegate> _delegateForFeatureSearch; // +0x68
    id <FTSTopHitDelegate> _delegateForWeAppSearch; // +0x70
    id <FTSTopHitDelegate> _delegateForFinderSearch; // +0x78
    id <FTSTopHitDelegate> _delegateForKFContactSearch; // +0x80
    id <FTSTopHitDelegate> _delegateForWeShopSearch; // +0x88
    NSSet * _ignoreSpecTypes; // +0x90
}
- (id)init;
- (id)initWithType:(unsigned int)arg1;
- (void)dealloc;
- (void)initData;
- (void)doInitWorker;
- (void)cancelSearch;
- (void)setNeedsSearchNextTime;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3;
- (BOOL)isNormalOrChatRoomContact:(id)arg1;
- (BOOL)isSessionActiveForContact:(id)arg1;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3 maxCount:(unsigned int)arg4;
- (void)trySearchMemberGroup:(id)arg1 andTargetKeys:(id)arg2 dictionary:(id)arg3 dicMatchTip:(id)arg4;
- (BOOL)isTopHitList:(id)arg1 keyContainsValue:(id)arg2;
- (void)removeInvalidValue:(id)arg1 withTopHitItem:(id)arg2 withTopHitKey:(id)arg3;
- (id)targetKeysForTopHitType:(unsigned int)arg1;
- (id)findTopHitValue:(id)arg1 key:(id)arg2;
- (id)findContactInArray:(id)arg1 key:(id)arg2;
- (BOOL)checkTopHitMatchInfo:(id)arg1 matchTip:(id)arg2;
- (void)calWithMMGroupDisplayResult:(id)arg1 otherCount:(unsigned long long)arg2;
- (void)removeBaseTopHitResult:(id)arg1 count:(unsigned long long)arg2;
- (void)selectItem:(id)arg1 type:(unsigned int)arg2;
- (void)selectMMGroup:(id)arg1 matchTip:(id)arg2;
- (void)mergeTopHitMMGroup:(id)arg1 withDicMember:(id)arg2;
- (void)addScore:(id)arg1 arrTopHitItem:(id)arg2;
- (id)getTopHitItemKey:(id)arg1;
- (id)convertTopHitKeyFromType:(unsigned int)arg1;
- (unsigned int)convertFeatureIDFromItemKey:(id)arg1;
- (BOOL)selectItemKey:(id)arg1 typeKey:(id)arg2;
- (void)sortTopHitValueList:(id)arg1;
- (BOOL)hasTopHit:(unsigned int)arg1;
- (unsigned int)getTopHitCount:(unsigned int)arg1;
- (id)getTopHitItems:(unsigned int)arg1;
- (void)clearTopHitResult;
- (void)clearTopHitValue;
- (id)pathForTopHitContactItem;
- (id)pathForTopHitExtItem;
- (void)tryLoadTopHitItem;
- (void)trySaveTopHitItem;
- (void)trySaveTopHitContactItem;
- (void)trySaveTopHitExtItem;
- (void)onEnterBackGround;
- (void)onClearData;
- (void)onAppTerminate;
- (void)removeTopHitItem:(id)arg1 forTopHitType:(unsigned int)arg2;
- (BOOL)isContactType:(unsigned int)arg1;
- (BOOL)isOpenRemovalABTest;
- (void)tryReportTopHitStatus;
- (void)doReportTopHitStatus;
- (void)checkAndFillTimestamp;
- (void)logSearchInfo;
- (id)delegateForContactSearch;
- (void)setDelegateForContactSearch:(id)arg1;
- (id)delegateForFeatureSearch;
- (void)setDelegateForFeatureSearch:(id)arg1;
- (id)delegateForWeAppSearch;
- (void)setDelegateForWeAppSearch:(id)arg1;
- (id)delegateForFinderSearch;
- (void)setDelegateForFinderSearch:(id)arg1;
- (id)delegateForKFContactSearch;
- (void)setDelegateForKFContactSearch:(id)arg1;
- (id)delegateForWeShopSearch;
- (void)setDelegateForWeShopSearch:(id)arg1;
- (id)ignoreSpecTypes;
- (void).cxx_destruct;
@end
