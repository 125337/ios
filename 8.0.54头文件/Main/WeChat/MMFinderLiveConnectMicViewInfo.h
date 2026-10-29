@interface MMFinderLiveConnectMicViewInfo : NSObject <MMWebImageViewDelegate>
{
    BOOL _isStartCustomRender; // +0x8
    BOOL _useVideo; // +0x9
    BOOL _isViewHidden; // +0xa
    MMFinderLiveConnectMicUser * _userInfo; // +0x10
    UIView * _userView; // +0x18
    MMLiveRemoteTrtcCustomRenderWrapper * _customRenderWrapper; // +0x20
    MMFinderLiveConnectMicAudioOnlyAnchorView * _audioModeBackgroundView; // +0x28
    MMFinderLiveGestureAnimationContainerView * _gestureAnimationContainer; // +0x30
}
- (void)configureCoverViewWithFinderLiveTaskId:(id)arg1;
- (void)configureCoverViewWithFinderLiveTaskId:(id)arg1 coverImageViewName:(id)arg2 backgroundVideoViewName:(id)arg3;
- (void)startCustomRender:(id)arg1;
- (void)stopCustomRender;
- (void)updateUIForCustomRenderChanged;
- (void)updateViewsRect:(CGRect)arg1;
- (void)removeViewsFromSuperView;
- (void)updateViewsHidden:(BOOL)arg1;
- (void)refreshViewsAppearence;
- (void)setUseVideo:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)userView;
- (void)setUserView:(id)arg1;
- (id)customRenderWrapper;
- (void)setCustomRenderWrapper:(id)arg1;
- (BOOL)isStartCustomRender;
- (void)setIsStartCustomRender:(BOOL)arg1;
- (id)audioModeBackgroundView;
- (void)setAudioModeBackgroundView:(id)arg1;
- (id)gestureAnimationContainer;
- (void)setGestureAnimationContainer:(id)arg1;
- (BOOL)useVideo;
- (BOOL)isViewHidden;
- (void)setIsViewHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

