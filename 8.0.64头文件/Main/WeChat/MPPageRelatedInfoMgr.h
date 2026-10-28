@interface MPPageRelatedInfoMgr : MMUserService <MMServiceProtocol>
{
    unsigned int _refreshIntervalSec; // +0x8
    unsigned int _maxRequestUrlCount; // +0xc
    MemoryMappedKV * _relatedInfoSlotMMKV; // +0x10
    MemoryMappedKV * _url2LastUpdateTimeSlotMMKV; // +0x18
    MemoryMappedKV * _mappedKV; // +0x20
    NSMutableArray * _currentTaskArr; // +0x28
    NSMutableArray * _waitingUrlInfoQueue; // +0x30
    NSMutableSet * _waitingPageIdentifierSet; // +0x38
    MMTimer * _timer; // +0x40
}
- (id)MPPageIdentityWithUrlAndReturnNilIfNotHave:(id)arg1;
- (id)getLocalMPPageRelatedInfoWithUrlInfo:(id)arg1;
- (id)getAndCheckUpdateMPPageRelatedInfoWithUrlInfoArr:(id)arg1;
- (void)clearAllRelatedInfo;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)refreshIntervalSec;
- (void)initData;
- (void)clearAllData;
- (BOOL)checkUrlValid:(id)arg1;
- (id)tryloadLocalRelatedInfo:(id)arg1;
- (BOOL)isRelatedInfoExpired:(id)arg1;
- (BOOL)isUrlRequestExpired:(id)arg1;
- (BOOL)tryAddUrlInfoToWaitingQueue:(id)arg1 relatedInfo:(id)arg2;
- (void)fireTimerIfNeed;
- (void)stopTimer;
- (void)checkWaitingQueue;
- (BOOL)isExistInWaitingQueueOrRequestingQueue:(id)arg1;
- (void)addUrlInfoToWaitingQueue:(id)arg1 urlInfoIdentifier:(id)arg2;
- (void)removeUrlInfoFromWaitingQueue:(id)arg1 urlInfoIdentifier:(id)arg2;
- (void)sendRequestToSvr:(id)arg1;
- (void)saveRequestConfigToMMKV:(unsigned int)arg1 maxRequestUrlCount:(unsigned int)arg2;
- (void)handleRelatedInfoArrSuccess:(id)arg1;
- (id)relatedInfoSlotMMKV;
- (void)setRelatedInfoSlotMMKV:(id)arg1;
- (id)url2LastUpdateTimeSlotMMKV;
- (void)setUrl2LastUpdateTimeSlotMMKV:(id)arg1;
- (id)mappedKV;
- (void)setMappedKV:(id)arg1;
- (void)setRefreshIntervalSec:(unsigned int)arg1;
- (unsigned int)maxRequestUrlCount;
- (void)setMaxRequestUrlCount:(unsigned int)arg1;
- (id)currentTaskArr;
- (void)setCurrentTaskArr:(id)arg1;
- (id)waitingUrlInfoQueue;
- (void)setWaitingUrlInfoQueue:(id)arg1;
- (id)waitingPageIdentifierSet;
- (void)setWaitingPageIdentifierSet:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
