@interface MMFinderLiveChooseClarityLogic : NSObject <MMFinderLiveChooseClarityDelegate>
{
    BOOL _isChanging; // +0x8
    BOOL _showSwitchStreamGuide; // +0x9
    id /* block */ _onChooseClarityChangedBlock; // +0x10
    id <MMFinderLiveChooseClarityLogicDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    unsigned long long _fromScene; // +0x28
    MMLiveConnectMicLogic * _connectMicLogic; // +0x30
    WCFinderLiveAudienceLogReporter * _audienceReporter; // +0x38
    MMFinderLiveChooseClarityView * _clarityView; // +0x40
    long long _oldVideoQualityLevel; // +0x48
    LiveChooseClarityCacheInfo * _cacheInfo; // +0x50
    unsigned long long _lastHandlePlayEventTime; // +0x58
    NSString * _lastCdnUrl; // +0x60
    unsigned long long _ultraHDPlayBeginTime; // +0x68
}
- (id)initWithTaskId:(id)arg1;
- (void)resetClarityCache;
- (void)onCloseLive;
- (void)updateWithFromScene:(unsigned long long)arg1 connectMicLogic:(id)arg2 audienceReporter:(id)arg3;
- (void)onClarityChooseEntranceSelectWithScene:(unsigned long long)arg1;
- (void)clarityMethodSelect:(id)arg1 indexPath:(id)arg2;
- (BOOL)handleConnectMic;
- (void)handleSwitchCdn:(id)arg1;
- (BOOL)isNeedSwitchCdn;
- (void)saveRecentClarityChoose:(id)arg1;
- (id)getCacheInfoFromCdnTransInfo:(id)arg1 liveId:(unsigned long long)arg2;
- (id)getRecentClarityChooseFromCache;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)reportUltraHDWatchDurationIfNeed;
- (id)getChooseCdnTransInfoWithParams:(id)arg1;
- (BOOL)checkTask:(id)arg1;
- (id)clarityView;
- (id)liveTask;
- (void)handleSwitch4KStreamGuide;
- (void)enableAudienceP2PAfterSwitchStream:(BOOL)arg1;
- (id /* block */)onChooseClarityChangedBlock;
- (void)setOnChooseClarityChangedBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)connectMicLogic;
- (void)setConnectMicLogic:(id)arg1;
- (id)audienceReporter;
- (void)setAudienceReporter:(id)arg1;
- (BOOL)isChanging;
- (void)setIsChanging:(BOOL)arg1;
- (void)setClarityView:(id)arg1;
- (long long)oldVideoQualityLevel;
- (void)setOldVideoQualityLevel:(long long)arg1;
- (id)cacheInfo;
- (void)setCacheInfo:(id)arg1;
- (BOOL)showSwitchStreamGuide;
- (void)setShowSwitchStreamGuide:(BOOL)arg1;
- (unsigned long long)lastHandlePlayEventTime;
- (void)setLastHandlePlayEventTime:(unsigned long long)arg1;
- (id)lastCdnUrl;
- (void)setLastCdnUrl:(id)arg1;
- (unsigned long long)ultraHDPlayBeginTime;
- (void)setUltraHDPlayBeginTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
