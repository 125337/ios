@interface GameReddotEventManager : MMUserService <WCFinderRedDotExt, MMServiceProtocol>
{
    BOOL _isBlock; // +0x8
    int _lastReddotQuitReason; // +0xc
    unsigned int _lastReddotQuitTime; // +0x10
    unsigned int _lastReddotExposureCount; // +0x14
    unsigned int _nextPulldownTime; // +0x18
    NSString * _lastReddotQuitId; // +0x20
    NSString * _lastUnQuitReddotRevokeId; // +0x28
    WCFinderRedDotCtrlInfo * _currentReddotCtrlInfo; // +0x30
    GameCenterBaseMsg * _currGameCenterMsg; // +0x38
    NSString * _currentMsgId; // +0x40
    WCFinderRedDotCtrlInfo * _lastReddotCtrlInfo; // +0x48
    GameCenterBaseMsg * _lastGameCenterMsg; // +0x50
    NSString * _lastMsgId; // +0x58
}
- (id)init;
- (void)processReddotCtrlInfo:(id)arg1;
- (void)clearCurrentReddotWithReason:(unsigned long long)arg1;
- (void)updateReddotExposure:(id)arg1;
- (void)onFindEntryVcWillDisAppear;
- (void)onReddotDispose:(int)arg1 ctrlInfo:(id)arg2;
- (void)clearCurrentReddotInfo;
- (void)updateCurrentReddotInfo:(id)arg1;
- (void)persistCurrentReddotExposureCount;
- (id)getCurrentReddotMsg;
- (id)getLastReddotMsg;
- (id)getCurrentReddotContent;
- (id)getNotifyWithKey:(id)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(BOOL)arg2;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)arg1;
- (void)finderRedDotDataHitFrequencyAtPath:(id)arg1 ctrlInfo:(id)arg2;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)reportReddotReceived:(id)arg1;
- (void)reportReddotExit:(int)arg1;
- (BOOL)beFrequancyControl;
- (id)getGameCenterBaseMsgFromByPassInfo:(id)arg1;
- (id)convertJumpJsonToXMLAttributesFormat:(id)arg1;
- (id)fixXMLByRemovingExtraJumpNode:(id)arg1;
- (int)convertReason:(unsigned long long)arg1;
- (void)resetBlock;
- (void)persistCurrentReddotInfo;
- (void)clearPersistedCurrentReddot;
- (void)persistLastReddotQuitInfo;
- (BOOL)restoreStateFromMMKV;
- (id)getMMKV;
- (void)checkDailyReset;
- (BOOL)checkAndRecordExposureWithMsgId:(id)arg1;
- (long long)getTodayExposureCount;
- (void)resetTodayExposureData;
- (id)getTodayDateString;
- (int)lastReddotQuitReason;
- (void)setLastReddotQuitReason:(int)arg1;
- (unsigned int)lastReddotQuitTime;
- (void)setLastReddotQuitTime:(unsigned int)arg1;
- (unsigned int)lastReddotExposureCount;
- (void)setLastReddotExposureCount:(unsigned int)arg1;
- (id)lastReddotQuitId;
- (void)setLastReddotQuitId:(id)arg1;
- (id)lastUnQuitReddotRevokeId;
- (void)setLastUnQuitReddotRevokeId:(id)arg1;
- (unsigned int)nextPulldownTime;
- (void)setNextPulldownTime:(unsigned int)arg1;
- (BOOL)isBlock;
- (void)setIsBlock:(BOOL)arg1;
- (id)currentReddotCtrlInfo;
- (void)setCurrentReddotCtrlInfo:(id)arg1;
- (id)currGameCenterMsg;
- (void)setCurrGameCenterMsg:(id)arg1;
- (id)currentMsgId;
- (void)setCurrentMsgId:(id)arg1;
- (id)lastReddotCtrlInfo;
- (void)setLastReddotCtrlInfo:(id)arg1;
- (id)lastGameCenterMsg;
- (void)setLastGameCenterMsg:(id)arg1;
- (id)lastMsgId;
- (void)setLastMsgId:(id)arg1;
- (void).cxx_destruct;
@end
