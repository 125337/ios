@interface WCEmotionEditImageViewController : WCEditImageViewController
{
    BOOL _multiSelectStyle; // +0x70
    BOOL _forbidRightGesture; // +0x71
    WCEditVideoPushPopTransition * _customTransitionDelegate; // +0x78
    NSString * _finishWording; // +0x80
    NSMutableArray * _assetsEditTracker; // +0x88
}
- (void)showEditImageViewOn;
- (void)setupTransitioningDelegate;
- (void)setFinishWording:(id)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnSelectedButtonClicked;
- (void)createEditInfo:(id)arg1;
- (void)dealSelectResult:(id)arg1;
- (id)getOriginSizeImage:(id)arg1;
- (void)editImageDoneReport:(int)arg1 asset:(id)arg2 editImageAttr:(id)arg3;
- (void)reportEditTracker:(unsigned long long)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)multiSelectStyle;
- (void)setMultiSelectStyle:(BOOL)arg1;
- (BOOL)forbidRightGesture;
- (void)setForbidRightGesture:(BOOL)arg1;
- (id)customTransitionDelegate;
- (void)setCustomTransitionDelegate:(id)arg1;
- (id)finishWording;
- (id)assetsEditTracker;
- (void)setAssetsEditTracker:(id)arg1;
- (void).cxx_destruct;
@end
