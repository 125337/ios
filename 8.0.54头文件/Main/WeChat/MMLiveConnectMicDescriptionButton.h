@interface MMLiveConnectMicDescriptionButton : UIView
{
    BOOL _showRedDot; // +0x8
    BOOL _isAnchor; // +0x9
    unsigned long long _connectMicState; // +0x10
    WCLiveBlurButton * _connectMicButton; // +0x18
    UIImageView * _micIcon; // +0x20
    UILabel * _textLabel; // +0x28
    UIImageView * _closeIcon; // +0x30
    CALayer * _redDotLayer; // +0x38
    UILabel * _descriptionLabel; // +0x40
}
- (void)updateViews;
- (void)setConnectMicState:(unsigned long long)arg1;
- (void)setShowRedDot:(BOOL)arg1;
- (unsigned long long)connectMicState;
- (id)connectMicButton;
- (void)setConnectMicButton:(id)arg1;
- (id)micIcon;
- (void)setMicIcon:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)closeIcon;
- (void)setCloseIcon:(id)arg1;
- (id)redDotLayer;
- (void)setRedDotLayer:(id)arg1;
- (BOOL)showRedDot;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (void).cxx_destruct;
@end

