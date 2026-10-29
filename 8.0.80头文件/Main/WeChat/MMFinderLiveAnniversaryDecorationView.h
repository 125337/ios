@interface MMFinderLiveAnniversaryDecorationView : MMLiveBaseComponentView <PAGViewListener>
{
    unsigned long long _status; // +0x8
    PAGView * _decorationView; // +0x10
    MMFinderLiveAnniversaryDecorationViewModel * _viewModel; // +0x18
    NSString * _currentUrl; // +0x20
}
- (void)updateViewModel:(id)arg1;
- (void)layoutUI;
- (void)stopAnimation;
- (void)setupDecorationView;
- (void)decorationViewPlay;
- (void)playEnd;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)decorationView;
- (void)setDecorationView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (void).cxx_destruct;
@end
