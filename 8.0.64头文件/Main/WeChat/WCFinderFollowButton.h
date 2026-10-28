@interface WCFinderFollowButton : WCFinderMaskButton
{
    WCFinderFollowBtnViewModel * _viewModel; // +0x8
    WCFinderFollowBtnConfig * _config; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setupObserver;
- (void)dealloc;
- (void)updateWithContact:(id)arg1;
- (void)_updateUI;
- (void)onClickSelf;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
