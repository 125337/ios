@interface MPChannelMgr : MMUserService <MMImageLoaderObserver, IExptServiceExt, MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
    MPChannelGetEntryDataTask * _currentTask; // +0x10
}
- (void)onServiceClearData;
- (void)dealloc;
- (BOOL)isTopBarChannelOpen;
- (id)tryGetLocalTopBarChannelEntryData;
- (void)updateEntryWhenOpenChannelWeApp;
- (void)advanceCheckUpdateEntry:(unsigned int)arg1;
- (void)checkUpdateEntryWhenEnterBrandTimeline;
- (void)checkUpdateEntryWhenEnterBrandSession:(id)arg1;
- (void)checkUpdateEntryWhenEnterVideoPage:(id)arg1;
- (BOOL)checkTimelineUpdateTimeout;
- (void)checkUpdateEntry:(id)arg1 videoPageUrl:(id)arg2 scene:(unsigned int)arg3;
- (void)handleGetChannelEntryDataResp:(BOOL)arg1 entryData:(id)arg2 strategyInfo:(id)arg3 isPrefetch:(BOOL)arg4;
- (BOOL)isChannelABtestOpen;
- (id)tryGetLocalChannelEntryData;
- (void)updateEntryData:(id)arg1;
- (void)updateStrategyInfo:(id)arg1;
- (id)getStrategyInfo;
- (void)prefetchEntryLogoImage;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)getWeAppChannelFeedsData;
- (void)checkAndUpdateWeAppChannelFeeds;
- (BOOL)shouldUpdateEntryWhenBrandCellExpose;
- (BOOL)shouldUpdateWhenMainSessionTabSwitch;
- (BOOL)shouldUpdateWhenEnterBrandSession;
- (BOOL)shouldUpdateWhenEnterVideoPage;
- (BOOL)shouldAutoSwitchDefaultLogo;
- (unsigned long long)getChannelAbTestOption;
- (void)resetMappedKv;
- (id)mappedKV;
- (id)getChannelAppId;
- (void)updateWeAppChannelFeeds:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void).cxx_destruct;
@end

