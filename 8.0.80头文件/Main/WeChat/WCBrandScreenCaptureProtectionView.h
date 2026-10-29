@interface WCBrandScreenCaptureProtectionView : UIView
{
    BOOL _protecting; // +0x8
    NSDictionary * _protectionParameter; // +0x10
    UIView * _wordingView; // +0x18
    UIView * _cardView; // +0x20
    RichTextView * _titleLabel; // +0x28
    NSLayoutConstraint * _titleHeightConstraint; // +0x30
    UIView * _authorRow; // +0x38
    MMWebImageView * _avatarImageView; // +0x40
    UILabel * _authorLabel; // +0x48
    RichTextView * _previewLabel; // +0x50
    UIView * _bottomContainer; // +0x58
    UILabel * _wordingLabel; // +0x60
    UIImageView * _qrImageView; // +0x68
    UITextField * _secureField; // +0x70
    UIView * _canvasView; // +0x78
    UIView * _targetView; // +0x80
    UIView * _targetOriginalSuperview; // +0x88
    long long _targetOriginalIndex; // +0x90
    unsigned long long _targetOriginalMask; // +0x98
    NSString * _lastQRCodeContent; // +0xa0
    CGSize _previewLayoutSize; // +0xa8
    CGRect _targetOriginalFrame; // +0xb8
}
+ (id)qrCodeImageWithContent:(id)arg1 size:(double)arg2;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (BOOL)enableProtectionForTargetView:(id)arg1 parameter:(id)arg2;
- (void)disableProtection;
- (void)updateProtectionParameter:(id)arg1;
- (void)updateWording:(id)arg1;
- (void)setupWordingSubview;
- (void)updateTitle:(id)arg1;
- (void)updateAuthorName:(id)arg1 avatarUrl:(id)arg2;
- (void)updatePreview:(id)arg1 previewPercentZero:(BOOL)arg2;
- (void)updateRichTextView:(id)arg1 content:(id)arg2;
- (void)updateTitleHeightConstraint;
- (void)updatePreviewTruncationIfNeeded;
- (void)updateQRCodeWithContent:(id)arg1;
- (id)buildSecureFieldWithBounds:(CGRect)arg1;
- (id)locateSecureCanvasIn:(id)arg1;
- (id)stringValue:(id)arg1;
- (id)dictionaryValue:(id)arg1;
- (BOOL)isProtecting;
- (void)setProtecting:(BOOL)arg1;
- (id)protectionParameter;
- (void)setProtectionParameter:(id)arg1;
- (id)wordingView;
- (void)setWordingView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleHeightConstraint;
- (void)setTitleHeightConstraint:(id)arg1;
- (id)authorRow;
- (void)setAuthorRow:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)authorLabel;
- (void)setAuthorLabel:(id)arg1;
- (id)previewLabel;
- (void)setPreviewLabel:(id)arg1;
- (CGSize)previewLayoutSize;
- (void)setPreviewLayoutSize:(CGSize)arg1;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)qrImageView;
- (void)setQrImageView:(id)arg1;
- (id)secureField;
- (void)setSecureField:(id)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (id)targetOriginalSuperview;
- (void)setTargetOriginalSuperview:(id)arg1;
- (long long)targetOriginalIndex;
- (void)setTargetOriginalIndex:(long long)arg1;
- (CGRect)targetOriginalFrame;
- (void)setTargetOriginalFrame:(CGRect)arg1;
- (unsigned long long)targetOriginalMask;
- (void)setTargetOriginalMask:(unsigned long long)arg1;
- (id)lastQRCodeContent;
- (void)setLastQRCodeContent:(id)arg1;
- (void).cxx_destruct;
@end
