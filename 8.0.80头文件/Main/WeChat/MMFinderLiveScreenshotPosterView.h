@interface MMFinderLiveScreenshotPosterView : UIView <MMLivePosterViewProviding>
{
    MMFinderLiveScreenshotPosterInfo * _posterInfo; // +0x8
    UIView * _masterContainerView; // +0x10
    UIView * _roundedCornerContainerView; // +0x18
    UIView * _screenshotImageContainerView; // +0x20
    UIView * _screenshotImageStackingView; // +0x28
    UIImageView * _screenshotImageView; // +0x30
    NSMutableDictionary * _associatedImagesViews; // +0x38
    UIImageView * _brandLogoImageView; // +0x40
    UIImageView * _sponsorLogoImageView; // +0x48
    UIImageView * _artistSignatureImageView; // +0x50
    UIImageView * _holderAvatarView; // +0x58
    UILabel * _holderLabel; // +0x60
    UILabel * _descriptionLabel; // +0x68
    WCFinderAuthInfoIconView * _anchorVerificationStatusView; // +0x70
    UIImageView * _qrCodeImageView; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (id)snapshotImage;
- (double)aspectRatio;
- (void)updateWithScreenshotPosterInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)updateForPosterScreenshot;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initializeComponents;
- (CGSize)masterContainerViewSize;
- (CGSize)screenshotImageContainerViewSize;
- (void)updateAssociatedImageViewsWithAssociatedImages:(id)arg1;
- (void)layoutAssociatedImageViewsWithAssociatedImages:(id)arg1;
- (void)updatePrimaryImageViewMaskingWithMaskingDescriptors:(id)arg1;
- (id)posterInfo;
- (void)setPosterInfo:(id)arg1;
- (id)masterContainerView;
- (void)setMasterContainerView:(id)arg1;
- (id)roundedCornerContainerView;
- (void)setRoundedCornerContainerView:(id)arg1;
- (id)screenshotImageContainerView;
- (void)setScreenshotImageContainerView:(id)arg1;
- (id)screenshotImageStackingView;
- (void)setScreenshotImageStackingView:(id)arg1;
- (id)screenshotImageView;
- (void)setScreenshotImageView:(id)arg1;
- (id)associatedImagesViews;
- (void)setAssociatedImagesViews:(id)arg1;
- (id)brandLogoImageView;
- (void)setBrandLogoImageView:(id)arg1;
- (id)sponsorLogoImageView;
- (void)setSponsorLogoImageView:(id)arg1;
- (id)artistSignatureImageView;
- (void)setArtistSignatureImageView:(id)arg1;
- (id)holderAvatarView;
- (void)setHolderAvatarView:(id)arg1;
- (id)holderLabel;
- (void)setHolderLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)anchorVerificationStatusView;
- (void)setAnchorVerificationStatusView:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (void).cxx_destruct;
@end
