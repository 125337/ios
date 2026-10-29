@interface WCFinderFullScreenEditVideoViewController : WCFinderRootEditVideoViewController <WCFinderFullScreenCompositionLayoutViewDelegate, WCFinderEditDataReportDelegate>
{
    id <WCFinderFullScreenEditVideoViewControllerDelegate> _finderDelegate; // +0x68
}
- (id)initWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)initWithVideoPaths:(id)arg1 thumbImages:(id)arg2;
- (id)initWithAssets:(id)arg1;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)reTriggerVideoPreComposeAction;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)showEditVideoViewOn:(id)arg1;
- (double)targetOutputWidth;
- (BOOL)hidesStatusBar;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (void)editVideoLayoutViewDidPlayReachEnd:(id)arg1;
- (void)loopPlay;
- (unsigned long long)indexOfMaxWidthAssets:(id)arg1;
- (CGRect)calculateVideoCropInfo:(id)arg1 previewMoveDatas:(id)arg2 isSizeCrop:(BOOL)arg3;
- (void)onClickEditVideoCancelButton;
- (void)onClickEditVideoDoneButton;
- (void)triggerSuperOnClickEditVideoDoneButtonLogic;
- (CGSize)getImageRatioSize;
- (void)onEnterForeground:(id)arg1;
- (id)editResultComposition;
- (CGPoint)emotionOffset;
- (id)originalUrls;
- (double)finderEditVideoLayoutViewGetVideoDurationInSecond;
- (void)finderEditVideoLayoutViewBGMChanged;
- (void)finderEditVideoLayoutEmotionChanged;
- (void)finderEditVideoLayoutCropDuration;
- (void)finderEditVideoLayoutDrawStart;
- (void)finderEditVideoLayoutDrawEnd;
- (void)registerYReportSdk;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (void).cxx_destruct;
@end

