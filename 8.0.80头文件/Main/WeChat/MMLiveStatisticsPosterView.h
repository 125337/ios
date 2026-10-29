@interface MMLiveStatisticsPosterView : UIView <MMLivePosterViewProviding>
{
    UIView * _roundedCornerContainerView; // +0x8
    UIView * _containerView; // +0x10
    UIImageView * _backgroundBrandLogoImageView; // +0x18
    WCFinderHeadImageView * _anchorAvatarView; // +0x20
    UILabel * _anchorDisplayNameLabel; // +0x28
    UILabel * _timeAndDescriptionLabel; // +0x30
    NSArray * _itemViews; // +0x38
    UIView * _brandContainerView; // +0x40
    UIImageView * _brandLogoImageView; // +0x48
    UILabel * _brandLabel; // +0x50
    UILabel * _qrCodeHintLabel; // +0x58
    UIImageView * _qrCodeImageView; // +0x60
}
- (id)initWithStatistics:(id)arg1 anchorFinderContact:(id)arg2 liveCreationUnixEpochTime:(unsigned int)arg3 liveDescription:(id)arg4;
- (id)snapshotImage;
- (void)layoutSubviews;
- (void)initializeComponentsWithStatistics:(id)arg1 anchorContact:(id)arg2 liveCreationUnixEpochTime:(unsigned int)arg3 liveDescription:(id)arg4;
- (id)roundedCornerContainerView;
- (void)setRoundedCornerContainerView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backgroundBrandLogoImageView;
- (void)setBackgroundBrandLogoImageView:(id)arg1;
- (id)anchorAvatarView;
- (void)setAnchorAvatarView:(id)arg1;
- (id)anchorDisplayNameLabel;
- (void)setAnchorDisplayNameLabel:(id)arg1;
- (id)timeAndDescriptionLabel;
- (void)setTimeAndDescriptionLabel:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)brandContainerView;
- (void)setBrandContainerView:(id)arg1;
- (id)brandLogoImageView;
- (void)setBrandLogoImageView:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (id)qrCodeHintLabel;
- (void)setQrCodeHintLabel:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (void).cxx_destruct;
@end
