@interface FBSDKAppLinkReturnToRefererView : UIView
{
    BOOL _explicitlyHidden; // +0x8
    BOOL _closed; // +0x9
    id <FBSDKAppLinkReturnToRefererViewDelegate> _delegate; // +0x10
    UIColor * _textColor; // +0x18
    FBSDKAppLink * _refererAppLink; // +0x20
    unsigned long long _includeStatusBarInSize; // +0x28
    UILabel * _labelView; // +0x30
    UIButton * _closeButton; // +0x38
    UITapGestureRecognizer * _insideTapGestureRecognizer; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)initViews;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)statusBarHeight;
- (void)setIncludeStatusBarInSize:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setRefererAppLink:(id)arg1;
- (void)setClosed:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)updateLabelText;
- (void)updateColors;
- (id)drawCloseButtonImageWithColor:(id)arg1;
- (id)localizedLabelForReferer:(id)arg1;
- (BOOL)hasRefererData;
- (void)closeButtonTapped:(id)arg1;
- (void)onTapInside:(id)arg1;
- (void)updateHidden;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textColor;
- (id)refererAppLink;
- (unsigned long long)includeStatusBarInSize;
- (BOOL)isClosed;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)insideTapGestureRecognizer;
- (void)setInsideTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

