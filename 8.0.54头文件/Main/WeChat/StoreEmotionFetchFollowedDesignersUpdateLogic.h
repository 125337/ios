@interface StoreEmotionFetchFollowedDesignersUpdateLogic : NSObject <PBMessageObserverDelegate>
{
    BOOL _active; // +0x8
    int _cgiFreq; // +0xc
    id <StoreEmotionFetchFollowedDesignersUpdateLogicDelegate> _delegate; // +0x10
    NSMutableArray * _peddingPackageDesignerInfos; // +0x18
    NSMutableArray * _peddingDesignerPidRequest; // +0x20
    NSMutableArray * _currentDesignerPids; // +0x28
    NSData * _currReqBuf; // +0x30
    unsigned long long _timeStart; // +0x38
    NSObject<OS_dispatch_queue> * _worker; // +0x40
    NSMutableDictionary * _eventIdMap; // +0x48
    MemoryMappedKV * _mappedKV; // +0x50
}
- (id)initWithServerPids:(id)arg1 andDelegate:(id)arg2;
- (void)startLogic;
- (id)mappedKV;
- (void)tryUpdateNextDesingerInfo;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnEmoticonStoreItemGetDetailFailed:(id)arg1;
- (void)onStoreEmotionGetDetailBack:(id)arg1;
- (void)onUpdateAllUserFollowedDesignerInfoSuccess;
- (void)tryUpdateNextDesignerPids;
- (void)onGotPersonalDesignerMessageReturn:(id)arg1;
- (void)onGotPersonalDesignerResponse:(id)arg1;
- (void)onFetchDesignerPidsSuccess:(id)arg1;
- (void)onFetchDesignerPidsFailed;
- (void)onFetchAllDesignerPidsFinish;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)getFetchCgiFreq;
- (unsigned int)getFetchLogicMinTimeInterval;
- (BOOL)shouldSkipCurrentFetch;
- (void)recordLastTimeOnFinish;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (int)cgiFreq;
- (void)setCgiFreq:(int)arg1;
- (id)peddingPackageDesignerInfos;
- (void)setPeddingPackageDesignerInfos:(id)arg1;
- (id)peddingDesignerPidRequest;
- (void)setPeddingDesignerPidRequest:(id)arg1;
- (id)currentDesignerPids;
- (void)setCurrentDesignerPids:(id)arg1;
- (id)currReqBuf;
- (void)setCurrReqBuf:(id)arg1;
- (unsigned long long)timeStart;
- (void)setTimeStart:(unsigned long long)arg1;
- (id)worker;
- (void)setWorker:(id)arg1;
- (id)eventIdMap;
- (void)setEventIdMap:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end

