@interface MMFinderLiveKTVSEISynchronizeLogic : NSObject
{
    BOOL _isStartSend; // +0x8
    BOOL _currActionVersionUnValid; // +0x9
    int _currActionVersion; // +0xc
    int _currSyncVersion; // +0x10
    int _minSyncInterval; // +0x14
    id <MMFinderLiveKTVSEISynchronizeDelegate> _syncDelegate; // +0x18
    long long _currRole; // +0x20
    MMFinderLiveKTVSongItem * _targetSendSong; // +0x28
    MMFinderLiveKTVSEIRecvHandler * _seiRecvHandler; // +0x30
    id <MMLiveUniqueTaskId> _taskId; // +0x38
    unsigned long long _scene; // +0x40
    NSString * _sendActorUserId; // +0x48
    NSString * _sendActUniqueId; // +0x50
    unsigned long long _currSendSeq; // +0x58
    double _lastSendTime; // +0x60
    NSMutableArray * _syncSendHandlerArr; // +0x68
    unsigned long long _invokeMode; // +0x70
    CADisplayLink * _autoInvokeDisplayLink; // +0x78
    NSMutableArray * _collectKTVInfoArr; // +0x80
    MMFinderLiveKTVReporter * _reporter; // +0x88
    unsigned long long _sumRecvSeiSeqCnt; // +0x90
    unsigned long long _sumRecvSeiUnValidSeqCnt; // +0x98
    unsigned long long _sumRecvSeiDisContinuousSeqCnt; // +0xa0
    unsigned long long _sumRecvSeiStickSeqCnt; // +0xa8
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)initNotifications;
- (BOOL)changeToSendRoleWithActionVersion:(unsigned int)arg1 targetSong:(id)arg2 byActor:(id)arg3;
- (BOOL)startSendWithInvokeMode:(BOOL)arg1;
- (void)changeToRecvRole;
- (BOOL)manualUpdateRecvRoleActionVersionUnValid;
- (void)onVideoDataWillPush;
- (void)addKTVSEISyncSendHandler:(id)arg1;
- (void)updateMaxFps:(int)arg1;
- (void)processSEIPBForKTVSyncRecv:(id)arg1;
- (void)onRecvKtvActionVersion:(unsigned int)arg1;
- (void)onNewReceiverUpdate:(id)arg1;
- (BOOL)checkSeiKTVActionVersionIsValid:(unsigned int)arg1;
- (BOOL)checkKTVSeiDataNeedRecv:(id)arg1;
- (BOOL)isCurrSendForTargetSong:(id)arg1;
- (void)clearRecvDatas;
- (void)updateSendActorUserId:(id)arg1;
- (void)updateSendActUniqueId:(id)arg1;
- (void)updateTargetSendSong:(id)arg1;
- (BOOL)updateActionVersion:(unsigned int)arg1;
- (BOOL)updateActionVersion:(unsigned int)arg1 force:(BOOL)arg2;
- (BOOL)updateCurrRole:(long long)arg1;
- (void)scheduleCollectKTVInfo;
- (void)checkCollectedKTVInfosHasData;
- (id)makeKTVSeiData;
- (void)sendKTVSeiIfNeed;
- (void)onSyncRecv:(id)arg1;
- (void)createSeiRecvHandler;
- (void)clearSendDatas;
- (void)autoIncreaseSendSeq;
- (void)startOuterInvokeSync;
- (void)stopOuterInvokeSync;
- (void)startAutoInvokeSync;
- (void)stopAutoInvokeSync;
- (void)startAutoInvokeDisplayLink;
- (void)stopAutoInvokeDisplayLink;
- (void)autoInvokeWithDisplayLink:(id)arg1;
- (int)autoRefreshFrameRate;
- (void)addKTVInfo:(id)arg1;
- (void)clearCollectKTVInfos;
- (id)getCurrCollectKTVInfos;
- (void)clearCollectKTVInfosIfOverLimit;
- (id)liveTask;
- (id)ktvReporter;
- (BOOL)isCurrActionVersionValid;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (id)syncDelegate;
- (void)setSyncDelegate:(id)arg1;
- (long long)currRole;
- (void)setCurrRole:(long long)arg1;
- (int)currActionVersion;
- (void)setCurrActionVersion:(int)arg1;
- (int)currSyncVersion;
- (void)setCurrSyncVersion:(int)arg1;
- (id)targetSendSong;
- (void)setTargetSendSong:(id)arg1;
- (BOOL)isStartSend;
- (void)setIsStartSend:(BOOL)arg1;
- (id)seiRecvHandler;
- (void)setSeiRecvHandler:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sendActorUserId;
- (void)setSendActorUserId:(id)arg1;
- (id)sendActUniqueId;
- (void)setSendActUniqueId:(id)arg1;
- (unsigned long long)currSendSeq;
- (void)setCurrSendSeq:(unsigned long long)arg1;
- (double)lastSendTime;
- (void)setLastSendTime:(double)arg1;
- (int)minSyncInterval;
- (void)setMinSyncInterval:(int)arg1;
- (id)syncSendHandlerArr;
- (void)setSyncSendHandlerArr:(id)arg1;
- (unsigned long long)invokeMode;
- (void)setInvokeMode:(unsigned long long)arg1;
- (id)autoInvokeDisplayLink;
- (void)setAutoInvokeDisplayLink:(id)arg1;
- (id)collectKTVInfoArr;
- (void)setCollectKTVInfoArr:(id)arg1;
- (BOOL)currActionVersionUnValid;
- (void)setCurrActionVersionUnValid:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)sumRecvSeiSeqCnt;
- (void)setSumRecvSeiSeqCnt:(unsigned long long)arg1;
- (unsigned long long)sumRecvSeiUnValidSeqCnt;
- (void)setSumRecvSeiUnValidSeqCnt:(unsigned long long)arg1;
- (unsigned long long)sumRecvSeiDisContinuousSeqCnt;
- (void)setSumRecvSeiDisContinuousSeqCnt:(unsigned long long)arg1;
- (unsigned long long)sumRecvSeiStickSeqCnt;
- (void)setSumRecvSeiStickSeqCnt:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

