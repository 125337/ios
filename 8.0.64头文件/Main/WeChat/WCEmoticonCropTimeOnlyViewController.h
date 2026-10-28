@interface WCEmoticonCropTimeOnlyViewController : WCEditVideoViewController
{
    WCEditVideoPushPopTransition * _customTransitionDelegate; // +0x70
    CGSize _videoSize; // +0x78
}
- (void)setupTransitioningDelegate;
- (void)viewDidLoad;
- (void)showEditVideoViewOn:(id)arg1;
- (double)getMaxDuration;
- (float)getOutputTime;
- (double)getMinDuration;
- (BOOL)isExceedTimelineTimeLimit;
- (CGSize)getFallbackVideoSize;
- (struct)getEditedVideoTimeRange;
- (void)onCropDone:(struct)arg1;
- (id)customTransitionDelegate;
- (void)setCustomTransitionDelegate:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
