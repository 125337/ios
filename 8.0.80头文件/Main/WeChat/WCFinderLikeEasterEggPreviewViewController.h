@interface WCFinderLikeEasterEggPreviewViewController : UIViewController <WCFinderHalfScreenContentProtocol>
{
    WCFinderHalfScreenContainerViewController * _containerViewController; // +0x8
    id /* block */ _onDismissCompletion; // +0x10
    WCFinderLikeEasterEggPreviewConfiguration * _configuration; // +0x18
    _TtC6WeChat20WFDEnhancedLabelView * _titleLabel; // +0x20
    _TtC6WeChat20WFDEnhancedLabelView * _subtitleLabel; // +0x28
    PAGView * _pagPreviewView; // +0x30
    UILabel * _confirmLabel; // +0x38
    WCFinderLikeEasterEggFlipAnimationView * _flipAnimationView; // +0x40
    UIView * _mockFeedCardView; // +0x48
}
- (id)initWithConfiguration:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_setupUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_addMockBottomBarToCardView:(id)arg1;
- (void)handleConfirmLabelTap;
- (double)contentHeight;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)pagPreviewView;
- (id)mockFeedCardView;
- (id)flipAnimationView;
- (id)confirmLabel;
- (id)containerViewController;
- (void)setContainerViewController:(id)arg1;
- (id /* block */)onDismissCompletion;
- (void)setOnDismissCompletion:(id /* block */)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setPagPreviewView:(id)arg1;
- (void)setConfirmLabel:(id)arg1;
- (void)setFlipAnimationView:(id)arg1;
- (void)setMockFeedCardView:(id)arg1;
- (void).cxx_destruct;
@end
