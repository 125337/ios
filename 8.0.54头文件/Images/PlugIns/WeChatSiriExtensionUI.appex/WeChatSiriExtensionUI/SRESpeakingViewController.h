@interface SRESpeakingViewController : UIViewController
{
    BOOL _isAnimating; // +0x8
    BOOL _shouldStopAnimation; // +0x9
    INSendMessageIntent * _intent; // +0x10
    UIImageView * _backgroundImageView; // +0x18
    UIView * _recipientBackgroundView; // +0x20
    UIView * _dotsContainer; // +0x28
    NSMutableArray * _dots; // +0x30
    SREReceiverViewController * _receiverController; // +0x38
    unsigned long long _preferEdge; // +0x40
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupDots;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setupWithIntent:(id)arg1;
- (void)updateWithBackgroundImage:(id)arg1;
- (id)intent;
- (void)setIntent:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)recipientBackgroundView;
- (void)setRecipientBackgroundView:(id)arg1;
- (id)dotsContainer;
- (void)setDotsContainer:(id)arg1;
- (id)dots;
- (void)setDots:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)shouldStopAnimation;
- (void)setShouldStopAnimation:(BOOL)arg1;
- (id)receiverController;
- (void)setReceiverController:(id)arg1;
- (unsigned long long)preferEdge;
- (void)setPreferEdge:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

