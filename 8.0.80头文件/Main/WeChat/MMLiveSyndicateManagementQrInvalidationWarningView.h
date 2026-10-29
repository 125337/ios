@interface MMLiveSyndicateManagementQrInvalidationWarningView : UIView
{
    BOOL _qrImageChanged; // +0x8
    UIImage * _qrImage; // +0x10
    id <MMLiveSyndicateManagementQrInvalidationWarningViewDelegate> _delegate; // +0x18
    UIImageView * _blurredQrImage; // +0x20
    UIImageView * _icon; // +0x28
    UILabel * _title; // +0x30
    UIButton * _dismissButton; // +0x38
    CGRect _qrImageFrame; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setQrImage:(id)arg1;
- (void)setQrImageFrame:(CGRect)arg1;
- (BOOL)canDismiss;
- (void)setCanDismiss:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onDismissTapped;
- (void)updateBlurredQrImage;
- (id)qrImage;
- (CGRect)qrImageFrame;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)blurredQrImage;
- (void)setBlurredQrImage:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)dismissButton;
- (void)setDismissButton:(id)arg1;
- (BOOL)qrImageChanged;
- (void)setQrImageChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
