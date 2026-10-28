@interface WCFinderStreamProfileBlankPage : WCFinderStreamProfileViewPage <WCFinderStreamProfileBlankModelDelegate>
{
    UILabel * _textLabel; // +0x8
    WCFinderAnimationLoadingView * _loadingView; // +0x10
}
- (id)loadView;
- (void)viewDidLoad;
- (void)onPageSizeDidChanged;
- (void)viewWillApear;
- (void)updateFrame;
- (void)updateState;
- (void)onClickRetry;
- (void)onProfileStatePageDataChanged;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
