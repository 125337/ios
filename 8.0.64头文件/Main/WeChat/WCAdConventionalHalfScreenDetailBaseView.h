@interface WCAdConventionalHalfScreenDetailBaseView : MMUIView <WCAdContactInfoHalfScreenViewControllerDelegate, WCAdConventionalHalfScreenScrollViewDelegate, WCAdConventionalDetailContainerViewControllerDelegate>
{
    CContact * _contactInfo; // +0x8
    id <WCAdConventionalHalfScreenDetailViewDelegate> _delegate; // +0x10
    WCAdCardBtnInfo * _actionInfo; // +0x18
    WCDataItem * _dataItem; // +0x20
    WCAdContactInfoHalfScreenViewController * _contactViewController; // +0x28
    WCAdConventionalHalfScreenScrollView * _contentScrollView; // +0x30
    WCAdConventionalDetailContainerViewController * _containerViewController; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 clickActionInfo:(id)arg2 dataItem:(id)arg3 delegate:(id)arg4;
- (void)showActionMenue;
- (void)dealloc;
- (void)configSubviews;
- (double)fetchContentScrollViewMarginTop;
- (double)fetchContentScrollViewEmptyAreaHeight;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)fetchHeightPercent;
- (id)fetchContentViewToDoTransition;
- (void)layoutDetailPageSheetWithReset:(BOOL)arg1;
- (void)layoutDetailPageSheet;
- (void)tryToAdaptDetailLayout;
- (void)onHostViewWillEnter;
- (void)onHostViewDidEnter;
- (void)onHostViewDidExit;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (void)setContactInfo:(id)arg1;
- (BOOL)isDetailPageSheetPinToTop;
- (void)dismissDetailPageSheet;
- (void)resumeDetailPageSheet;
- (id)contactViewController;
- (id)contentScrollView;
- (id)containerViewController;
- (void)tryToLoadWeWorkContact;
- (void)tryToShowWeWorkContact;
- (void)tryToResumeWeWorkContact;
- (void)showWeWorkContact:(id)arg1 animated:(BOOL)arg2;
- (void)tryToLoadWebViewContent;
- (void)tryToResumeContentScrollView;
- (void)onKeyboardWillShow:(id)arg1;
- (BOOL)isActionInfoValidForDetailContainerVC;
- (void)tryToLoadDetailContainerVC;
- (void)tryToResumeDetailContainerVC;
- (void)showDetailContainerVCWithAnimated:(BOOL)arg1;
- (id)onHalfScreenScrollViewFetchDataItem;
- (unsigned long long)onHalfScreenScrollViewFetchContentItemScene;
- (double)onHalfScreenScrollViewFetchCalculatedHeight;
- (void)onHalfScreenScrollViewCeilingTopWithPercent:(double)arg1 animated:(BOOL)arg2;
- (void)onHalfScreenScrollViewUpdateTitle:(id)arg1;
- (void)onHalfScreenScrollViewWillAddViewController:(id)arg1;
- (void)onHalfScreenScrollViewWillShowViewController:(id)arg1;
- (void)onHalfScreenScrollViewDidChangeVisibleHeight:(double)arg1;
- (void)onHalfScreenScrollViewDidPinToTop;
- (void)onHalfScreenScrollViewWillStickToBottom;
- (void)onHalfScreenScrollViewUpdateAnimatingState:(BOOL)arg1;
- (void)onContactInfoHalfScreenPageSheetWillClose;
- (void)onContactInfoHalfScreenPageSheetDidClose;
- (void)onContactInfoHalfScreenPageSheetDidChangeVisibleHeight:(double)arg1;
- (id)onContactInfoHalfScreenHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onDetailContainerViewPageSheetWillClose;
- (void)onDetailContainerViewPageSheetDidClose;
- (void)onDetailContainerViewPageSheetDidChangeVisibleHeight:(double)arg1;
- (id)onDetailContainerViewHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onDetailContainerViewPageSheetTryToDismissParent:(BOOL)arg1;
- (id)contactInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (void).cxx_destruct;
@end
