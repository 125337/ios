@interface MMFinderLiveScreenshotPosterInfo : NSObject
{
    MMFinderLiveScreenshotPosterImages * _images; // +0x8
    double _expectedScreenshotAspectRatio; // +0x10
    NSString * _brandLogoUri; // +0x18
    NSString * _sponsorLogoUri; // +0x20
    NSString * _artistSignatureImageUri; // +0x28
    double _artistSignatureImageRightMargin; // +0x30
    double _artistSignatureImageBottomMargin; // +0x38
    UIImage * _holderAvatar; // +0x40
    NSString * _holderNickname; // +0x48
    NSString * _holderNicknameSuffix; // +0x50
    NSString * _posterDescription; // +0x58
    WCFinderContact * _anchorContact; // +0x60
    UIImage * _qrCodeImage; // +0x68
    NSString * _qrCodeImageUri; // +0x70
    NSString * _qrCodeContent; // +0x78
    NSString * _qrCodeCenterImageUri; // +0x80
    CGPoint _topLeftCropPoint; // +0x88
    CGPoint _bottomRightCropPoint; // +0x98
}
- (BOOL)cropAreaValid;
- (CGPoint)cropAreaCenter;
- (CGSize)cropAreaSize;
- (id)images;
- (void)setImages:(id)arg1;
- (CGPoint)topLeftCropPoint;
- (void)setTopLeftCropPoint:(CGPoint)arg1;
- (CGPoint)bottomRightCropPoint;
- (void)setBottomRightCropPoint:(CGPoint)arg1;
- (double)expectedScreenshotAspectRatio;
- (void)setExpectedScreenshotAspectRatio:(double)arg1;
- (id)brandLogoUri;
- (void)setBrandLogoUri:(id)arg1;
- (id)sponsorLogoUri;
- (void)setSponsorLogoUri:(id)arg1;
- (id)artistSignatureImageUri;
- (void)setArtistSignatureImageUri:(id)arg1;
- (double)artistSignatureImageRightMargin;
- (void)setArtistSignatureImageRightMargin:(double)arg1;
- (double)artistSignatureImageBottomMargin;
- (void)setArtistSignatureImageBottomMargin:(double)arg1;
- (id)holderAvatar;
- (void)setHolderAvatar:(id)arg1;
- (id)holderNickname;
- (void)setHolderNickname:(id)arg1;
- (id)holderNicknameSuffix;
- (void)setHolderNicknameSuffix:(id)arg1;
- (id)posterDescription;
- (void)setPosterDescription:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)qrCodeImage;
- (void)setQrCodeImage:(id)arg1;
- (id)qrCodeImageUri;
- (void)setQrCodeImageUri:(id)arg1;
- (id)qrCodeContent;
- (void)setQrCodeContent:(id)arg1;
- (id)qrCodeCenterImageUri;
- (void)setQrCodeCenterImageUri:(id)arg1;
- (void).cxx_destruct;
@end
