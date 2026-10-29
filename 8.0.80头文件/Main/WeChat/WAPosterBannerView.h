@interface WAPosterBannerView : UIView
{
    BOOL _isPortrait; // +0x8
    NSString * _weappName; // +0x10
    NSString * _weappDesc; // +0x18
    UIImage * _qrCodeImage; // +0x20
    UIView * _titleDescContainer; // +0x28
    UILabel * _displayNameLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIImageView * _qrCodeImageView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)updateContent;
- (void)setWeappName:(id)arg1;
- (void)setWeappDesc:(id)arg1;
- (void)setQrCodeImage:(id)arg1;
- (BOOL)isPortrait;
- (void)setIsPortrait:(BOOL)arg1;
- (id)weappName;
- (id)weappDesc;
- (id)qrCodeImage;
- (id)titleDescContainer;
- (void)setTitleDescContainer:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (void).cxx_destruct;
@end
