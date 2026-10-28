@interface MMMediaBrowserViewController : MMUIViewController <MMMediaBrowserViewDelegate, MMScrollActionSheetDelegate, MMMediaBrowserReporterProtocol>
{
    MMMediaBrowserView * _mediaView; // +0x70
    id <MMMediaBrowserViewModel> _viewModel; // +0x78
    MMScrollActionSheet * _scrollActionSheet; // +0x80
    UIPanGestureRecognizer * _panGesture; // +0x88
    MMMediaBrowserReporter * _mediaBrowserReporter; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractiveDismiss;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)mediaView;
- (void)setupScrollActionSheet;
- (void)handleShareFriend:(id)arg1;
- (void)handleFavorite;
- (void)setNavBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)onMoreButtonClicked:(id)arg1;
- (BOOL)onSingleTap;
- (void)onLongPress;
- (void)onDragBegin:(id)arg1;
- (void)setMediaView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)mediaBrowserReporter;
- (void)setMediaBrowserReporter:(id)arg1;
- (void).cxx_destruct;
@end
