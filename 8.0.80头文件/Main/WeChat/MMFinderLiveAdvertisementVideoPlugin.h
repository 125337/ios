@interface MMFinderLiveAdvertisementVideoPlugin : MMLiveTaskBaseFunctionPlugin
{
    unsigned long long _adScene; // +0x8
    NSString * _advertisingLiveId; // +0x10
    unsigned long long _currentAdTime; // +0x18
    unsigned long long _currentAdVideoDuration; // +0x20
    NSArray * _insertAdInfos; // +0x28
}
- (BOOL)isShowingAd;
- (BOOL)pauseAdsPlayerIfNeeded;
- (BOOL)resumeAdsPlayerIfNeeded;
- (BOOL)muteAdsPlayerIfNeeded;
- (BOOL)unMuteAdsPlayerIfNeeded;
- (id)liveView;
- (unsigned long long)adScene;
- (void)setAdScene:(unsigned long long)arg1;
- (id)advertisingLiveId;
- (void)setAdvertisingLiveId:(id)arg1;
- (unsigned long long)currentAdTime;
- (void)setCurrentAdTime:(unsigned long long)arg1;
- (unsigned long long)currentAdVideoDuration;
- (void)setCurrentAdVideoDuration:(unsigned long long)arg1;
- (id)insertAdInfos;
- (void)setInsertAdInfos:(id)arg1;
- (void).cxx_destruct;
@end
