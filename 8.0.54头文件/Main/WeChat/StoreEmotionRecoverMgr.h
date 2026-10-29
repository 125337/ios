@interface StoreEmotionRecoverMgr : MMUserService <StoreEmotionRecoverLogicObjectDelegate, StoreEmotionDownloadLogicObjectDelegate, IMsgExt, StoreEmotionAddTaskDelegate, StoreEmotionDeleteTaskDelegate, CNetworkStatusExt, StoreEmotionFetchFollowedDesignersUpdateLogicDelegate, MMServiceProtocol>
{
    unsigned int _wwanAutoDownloadThreshold; // +0x8
    unsigned long long _scene; // +0x10
    StoreEmotionRecoverLogicObject * _recoverLogic; // +0x18
    StoreEmotionDownloadLogicObject * _downloadLogic; // +0x20
    StoreEmotionFetchFollowedDesignersUpdateLogic * _fetchDesignersLogic; // +0x28
    NSMutableArray * _xmlTaskArray; // +0x30
    NSMutableDictionary * _serverDic; // +0x38
}
- (id)init;
- (void)startDownloadMyPanelListFromScene:(unsigned long long)arg1;
- (id)downloadingInfo;
- (float)downloadingProgressFromItem:(id)arg1;
- (int)getStateByItem:(id)arg1;
- (BOOL)isRecovering;
- (void)startInternalRequest;
- (void)recoverStoreEmotionFromServerPids:(id)arg1;
- (void)recoverHighPrivillegeWithPid:(id)arg1;
- (void)fetchAllFollowedDesignersUpdateFromSvrPids:(id)arg1;
- (BOOL)canStartCgiNow;
- (id)getStoreEmotionList;
- (void)runNotifyTask;
- (void)onStoreEmotionRecoverLogicOKWithServerPids:(id)arg1;
- (void)onStoreEmotionRecoverLogicFailed;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onFetchAllFollowedDesignersUpdateFinish;
- (BOOL)canResumeAddTask;
- (void)startAddLogicWithPid:(id)arg1;
- (BOOL)canResumeDeleteTask;
- (void)onDeleteTaskComplete;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)tryResumeDownloadLogic;
- (unsigned int)storeEmoticonWWANAutoSyncLimit;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)recoverLogic;
- (void)setRecoverLogic:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (id)fetchDesignersLogic;
- (void)setFetchDesignersLogic:(id)arg1;
- (id)xmlTaskArray;
- (void)setXmlTaskArray:(id)arg1;
- (id)serverDic;
- (void)setServerDic:(id)arg1;
- (unsigned int)wwanAutoDownloadThreshold;
- (void)setWwanAutoDownloadThreshold:(unsigned int)arg1;
- (void).cxx_destruct;
@end

