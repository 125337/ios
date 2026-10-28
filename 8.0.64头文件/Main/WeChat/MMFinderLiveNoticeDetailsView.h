@interface MMFinderLiveNoticeDetailsView : UIView
{
    BOOL _previewBackgroundImageSet; // +0x8
    id <MMFinderLiveNoticeDetailsViewDelegate> _delegate; // +0x10
    NSString * _backgroundImageUri; // +0x18
    UIImage * _previewBackgroundImage; // +0x20
    unsigned long long _currentStyleIndex; // +0x28
    WCFinderContact * _anchorContact; // +0x30
    FinderLiveNoticeInfo * _noticeInfo; // +0x38
    MMFinderLiveNoticePosterModel * _posterModel; // +0x40
    NSDateFormatter * _untimedNoticeTimeFormatter; // +0x48
    unsigned long long _committedStyleIndex; // +0x50
    UIView * _roundedCornerContainerView; // +0x58
    UIView * _masterContainerView; // +0x60
    UIView * _backgroundImageContainer; // +0x68
    UIImageView * _backgroundImageView; // +0x70
    UIView * _backgroundImageShadingView; // +0x78
    UIImageView * _brandLogoView; // +0x80
    UILabel * _brandLabel; // +0x88
    UIButton * _backgroundImageSettingsButton; // +0x90
    WCFinderHeadImageView * _anchorAvatarView; // +0x98
    UILabel * _anchorDisplayNameLabel; // +0xa0
    WCFinderAuthInfoIconView * _anchorVerificationStatusView; // +0xa8
    UILabel * _noticeRecommendationLabel; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _introductionLabel; // +0xc0
    UILabel * _subtitleLabel; // +0xc8
    UIView * _qrCodeContainer; // +0xd0
    UIImageView * _qrCodeImageView; // +0xd8
    UILabel * _reserveHintLabel; // +0xe0
    UILabel * _couponLabel; // +0xe8
    UIView * _posterBackgroundImageContainer; // +0xf0
    UIImageView * _posterBackgroundImageView; // +0xf8
    UIView * _posterBackgroundImageShadingView; // +0x100
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)hasBackgroundImage;
- (id)currentStyleId;
- (void)updateWithAnchroFinderContact:(id)arg1 previewModel:(id)arg2 posterModel:(id)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 posterModel:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setBackgroundImageUri:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)arg1;
- (id)noticeDetailsImage;
- (void)advancePreviewStyle;
- (void)advanceToPreviewStyle:(unsigned long long)arg1;
- (void)commitPreviewStyle;
- (void)revertPreviewStyle;
- (void)layoutSubviews;
- (void)onImageSettingsButtonTapped;
- (void)initializeComponents;
- (void)configureComponentsStyle;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (void)updateWithPreviewModel:(id)arg1;
- (void)updateWithNoticeInfo:(id)arg1;
- (void)configureViewsForShowingBackgroundImage:(BOOL)arg1;
- (void)layoutWithBackgroundImage;
- (void)layoutWithoutBackgroundImage;
- (struct)currentTitleLayoutAttributes;
- (struct)currentIntroductionTitleLayoutAttributes;
- (void)transformMasterContainerToCenter;
- (BOOL)isMemberLiveNotice:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (BOOL)previewBackgroundImageSet;
- (void)setPreviewBackgroundImageSet:(BOOL)arg1;
- (id)previewBackgroundImage;
- (void)setPreviewBackgroundImage:(id)arg1;
- (unsigned long long)currentStyleIndex;
- (void)setCurrentStyleIndex:(unsigned long long)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)posterModel;
- (void)setPosterModel:(id)arg1;
- (id)untimedNoticeTimeFormatter;
- (void)setUntimedNoticeTimeFormatter:(id)arg1;
- (unsigned long long)committedStyleIndex;
- (void)setCommittedStyleIndex:(unsigned long long)arg1;
- (id)roundedCornerContainerView;
- (void)setRoundedCornerContainerView:(id)arg1;
- (id)masterContainerView;
- (void)setMasterContainerView:(id)arg1;
- (id)backgroundImageContainer;
- (void)setBackgroundImageContainer:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)backgroundImageShadingView;
- (void)setBackgroundImageShadingView:(id)arg1;
- (id)brandLogoView;
- (void)setBrandLogoView:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (id)backgroundImageSettingsButton;
- (void)setBackgroundImageSettingsButton:(id)arg1;
- (id)anchorAvatarView;
- (void)setAnchorAvatarView:(id)arg1;
- (id)anchorDisplayNameLabel;
- (void)setAnchorDisplayNameLabel:(id)arg1;
- (id)anchorVerificationStatusView;
- (void)setAnchorVerificationStatusView:(id)arg1;
- (id)noticeRecommendationLabel;
- (void)setNoticeRecommendationLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)introductionLabel;
- (void)setIntroductionLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)qrCodeContainer;
- (void)setQrCodeContainer:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)reserveHintLabel;
- (void)setReserveHintLabel:(id)arg1;
- (id)couponLabel;
- (void)setCouponLabel:(id)arg1;
- (id)posterBackgroundImageContainer;
- (void)setPosterBackgroundImageContainer:(id)arg1;
- (id)posterBackgroundImageView;
- (void)setPosterBackgroundImageView:(id)arg1;
- (id)posterBackgroundImageShadingView;
- (void)setPosterBackgroundImageShadingView:(id)arg1;
- (void).cxx_destruct;
@end
