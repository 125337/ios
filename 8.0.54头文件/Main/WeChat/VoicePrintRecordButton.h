@interface VoicePrintRecordButton : UIView
{
    BOOL _animating; // +0x8
    unsigned int _state; // +0xc
    id <VoicePrintRecordButtonDelegate> _delegate; // +0x10
    double _volume; // +0x18
    UIView * _backgroundView; // +0x20
    UIView * _borderView; // +0x28
    UIImageView * _iconImageView; // +0x30
    MMUILabel * _tipsLabel; // +0x38
    MMUIActivityIndicatorView * _loadingView; // +0x40
    UILongPressGestureRecognizer * _longPressGesture; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initGesture;
- (void)initSubviews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)startRecordAnimation;
- (void)stopRecordAnimation;
- (void)setVolume:(double)arg1;
- (void)setState:(unsigned int)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)state;
- (double)volume;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (BOOL)isAnimating;
- (void)setAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

