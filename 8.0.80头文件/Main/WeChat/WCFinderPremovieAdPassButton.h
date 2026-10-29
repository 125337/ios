@interface WCFinderPremovieAdPassButton : UIView
{
    id <WCFinderPremovieAdPassButtonDelegate> _delegate; // +0x8
    unsigned long long _state; // +0x10
    double _fittingWidth; // +0x18
    double _fittingHeight; // +0x20
    UILabel * _adLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIView * _sepLineView; // +0x38
    UILabel * _closeLabel; // +0x40
    UITapGestureRecognizer * _tapInSelf; // +0x48
    UIEdgeInsets _touchInsets; // +0x50
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)adjustUILayout;
- (void)updateCountDownProgress:(unsigned long long)arg1;
- (void)tapInSelfAction;
- (void)doCountDown:(id)arg1;
- (void)startCountDown:(unsigned long long)arg1;
- (void)stopCountDown;
- (void)becomeClosable;
- (CGRect)adLabelFrame;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double)fittingWidth;
- (void)setFittingWidth:(double)arg1;
- (double)fittingHeight;
- (void)setFittingHeight:(double)arg1;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (id)adLabel;
- (void)setAdLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)sepLineView;
- (void)setSepLineView:(id)arg1;
- (id)closeLabel;
- (void)setCloseLabel:(id)arg1;
- (id)tapInSelf;
- (void)setTapInSelf:(id)arg1;
- (void).cxx_destruct;
@end
