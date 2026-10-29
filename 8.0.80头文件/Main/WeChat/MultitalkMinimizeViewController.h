@interface MultitalkMinimizeViewController : MMUIViewController <BackgroundMoveViewDelegate>
{
    BackgroundMoveView * m_backgroundImageView; // +0x70
    id <MultitalkMinimizeViewControllerDelegate> m_delegate; // +0x78
    MultitalkMinimizeView * _m_minimizeView; // +0x80
}
- (id)moveView;
- (CGRect)moveViewOriginRect;
- (id)backgroundView;
- (id)backgroundImage;
- (id)containerView;
- (void)adsorbToWindow;
- (void)viewDidLoad;
- (void)initBackgroundView;
- (void)initContainerView;
- (void)viewDidLayoutSubviews;
- (void)startTimer;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (void)onBackgroundMoveViewTap;
- (id)m_backgroundImageView;
- (void)setM_backgroundImageView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_minimizeView;
- (void)setM_minimizeView:(id)arg1;
- (void).cxx_destruct;
@end
