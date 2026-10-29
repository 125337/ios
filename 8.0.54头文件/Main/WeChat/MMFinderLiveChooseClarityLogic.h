@interface MMFinderLiveChooseClarityLogic : NSObject <MMFinderLiveChooseClarityDelegate>
{
    BOOL _isChanging; // +0x8
    id /* block */ _onChooseClarityChangedBlock; // +0x10
    MMFinderLiveTask * _liveTask; // +0x18
    unsigned long long _fromScene; // +0x20
    MMLiveConnectMicLogic * _connectMicLogic; // +0x28
    WCFinderLiveAudienceLogReporter * _audienceReporter; // +0x30
    MMFinderLiveChooseClarityView * _clarityView; // +0x38
    long long _oldVideoQualityLevel; // +0x40
    LiveChooseClarityCacheInfo * _cacheInfo; // +0x48
}
- (void)updateWithLiveTask:(id)arg1;
- (void)updateWithLiveTask:(id)arg1 fromScene:(unsigned long long)arg2 connectMicLogic:(id)arg3 audienceReporter:(id)arg4;
- (void)onClarityChooseEntranceSelectWithScene:(unsigned long long)arg1;
- (void)clarityMethodSelect:(id)arg1 indexPath:(id)arg2;
- (BOOL)handleConnectMic;
- (void)handleSwitchCdn:(id)arg1;
- (BOOL)isNeedSwitchCdn;
- (void)initRecentClarityChoose:(id)arg1;
- (id)getCacheInfoFromCdnTransInfo:(id)arg1 liveId:(unsigned long long)arg2;
- (id)getRecentClarityChooseFromCache;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (id)getChooseCdnTransInfoWithParams:(id)arg1;
- (BOOL)checkTask:(id)arg1;
- (id)clarityView;
- (id /* block */)onChooseClarityChangedBlock;
- (void)setOnChooseClarityChangedBlock:(id /* block */)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
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
- (void).cxx_destruct;
@end

