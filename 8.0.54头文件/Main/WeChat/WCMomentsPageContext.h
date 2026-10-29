@interface WCMomentsPageContext : NSObject
{
    BOOL _scrollViewMonitorEnabled; // +0x8
    BOOL _canPlayLivePhotos; // +0x9
    BOOL _canSaveLivePhotos; // +0xa
    BOOL _livePhotoShowMutedMenu; // +0xb
    UIViewController * _rootViewController; // +0x10
    long long _bizMpImageDisplayStyle; // +0x18
}
- (id)initWithRootViewController:(id)arg1;
- (void)updateDynamicConfigs;
- (void)updateSpecifiedDynamicConfigsWhenTimelineWillAppear;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (BOOL)scrollViewMonitorEnabled;
- (long long)bizMpImageDisplayStyle;
- (void)setBizMpImageDisplayStyle:(long long)arg1;
- (BOOL)canPlayLivePhotos;
- (BOOL)canSaveLivePhotos;
- (BOOL)livePhotoShowMutedMenu;
- (void).cxx_destruct;
@end

