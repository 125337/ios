@interface VoIPEnhanceVoiceBubbleView : MMUIView
{
    BOOL _enhanceVoiceEnabled; // +0x8
    UIVisualEffectView * _blurView; // +0x10
    CAShapeLayer * _maskLayer; // +0x18
    MMUILabel * _tipLabel; // +0x20
    MMUIButton * _actionButton; // +0x28
    MMUIButton * _closeButton; // +0x30
}
- (id)initWithActionTarget:(id)arg1 action:(SEL)arg2 closeAction:(SEL)arg3;
- (void)setEnhanceVoiceEnabled:(BOOL)arg1;
- (void)updateWording;
- (void)layoutWithAvailableWidth:(double)arg1 bubbleBottom:(double)arg2 arrowCenterX:(double)arg3;
- (BOOL)isEnhanceVoiceEnabled;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
