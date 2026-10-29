@interface TextStateDataLogic : NSObject <IContactMgrExt, IUpdateProfileMgrExt, TextStateDBTransferDelegate>
{
    BOOL _dataLoaded; // +0x8
    BOOL _affDataLoaded; // +0x9
    BOOL _useAffDB; // +0xa
    BOOL _affDBFinishTransfer; // +0xb
    id <TextStateDataLogicDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    NSRecursiveLock * _recursiveLock; // +0x20
    NSMutableDictionary * _cache; // +0x28
    OrderedDictionary * _orderedIdToTextState; // +0x30
    NSObject<OS_dispatch_source> * _expireTimer; // +0x38
    TextStateDBTransfer * _dbTransfer; // +0x40
}
+ (void)insertOrUpdateTextState:(id)arg1 forOrderedIdToTextState:(id)arg2 index:(unsigned long long *)arg3;
+ (BOOL)isTextStateValidForUsername:(id)arg1;
+ (id)generateTextStateFromContact:(id)arg1;
+ (id)generateTextStateFromContactWithUsername:(id)arg1;
- (id)init;
- (BOOL)isDataLoaded;
- (void)dealloc;
- (void)addOrModifyTextState:(id)arg1 checkSequence:(BOOL)arg2;
- (void)deleteTextStateForId:(id)arg1;
- (void)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (void)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (id)textStateForId:(id)arg1;
- (id)textStateListForUsername:(id)arg1;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (id)usernameToTextState;
- (void)constructCacheIfNeeded;
- (void)constructCache;
- (void)constructCacheInAffDB;
- (id)entryForUsername:(id)arg1;
- (void)onTextStateUpdateForUsername:(id)arg1;
- (void)prefetchTextState:(id)arg1;
- (void)restartExpireTimer;
- (void)checkExpire;
- (void)checkAffExpire;
- (BOOL)affStatusMainDBTransferFinish;
- (BOOL)useAffdb;
- (void)doAffModTextStatueFinish:(id)arg1;
- (void)privateUpdateContact:(id)arg1;
- (void)handleUpdateContact:(id)arg1;
- (void)didBecomeActive;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onProfileChange;
- (void)onTextStateTransferFinish;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)recursiveLock;
- (void)setRecursiveLock:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)orderedIdToTextState;
- (void)setOrderedIdToTextState:(id)arg1;
- (BOOL)dataLoaded;
- (void)setDataLoaded:(BOOL)arg1;
- (BOOL)affDataLoaded;
- (void)setAffDataLoaded:(BOOL)arg1;
- (id)expireTimer;
- (void)setExpireTimer:(id)arg1;
- (id)dbTransfer;
- (void)setDbTransfer:(id)arg1;
- (BOOL)useAffDB;
- (void)setUseAffDB:(BOOL)arg1;
- (BOOL)affDBFinishTransfer;
- (void)setAffDBFinishTransfer:(BOOL)arg1;
- (void).cxx_destruct;
@end

