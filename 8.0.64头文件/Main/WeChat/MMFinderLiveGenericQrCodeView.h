@interface MMFinderLiveGenericQrCodeView : UIView <MMLivePosterViewProviding>
{
    BOOL _previewBackgroundImageSet; // +0x8
    BOOL _backgroundImageSettingsButtonHidden; // +0x9
    BOOL _isNormalAudience; // +0xa
    MMLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveGenericQrCodeViewDelegate> _delegate; // +0x18
    NSString * _backgroundImageUri; // +0x20
    UIImage * _previewBackgroundImage; // +0x28
    WCFinderContact * _anchorContact; // +0x30
    FinderLiveShareLiveQRCodeInfo * _qrCodeInfo; // +0x38
    MMFinderLiveNoticePosterModel * _posterModel; // +0x40
    unsigned long long _currentStyleIndex; // +0x48
    unsigned long long _committedStyleIndex; // +0x50
    UIView * _roundedCornerContainerView; // +0x58
    UIView * _masterContainerView; // +0x60
    UIView * _backgroundImageContainer; // +0x68
    UIImageView * _backgroundImageView; // +0x70
    UIView * _backgroundImageShadingView; // +0x78
    UIImageView * _brandLogoView; // +0x80
    UILabel * _brandLabel; // +0x88
    WCFinderHeadImageView * _anchorAvatarView; // +0x90
    UILabel * _anchorDisplayNameLabel; // +0x98
    WCFinderAuthInfoIconView * _anchorVerificationStatusView; // +0xa0
    UILabel * _titleLabel; // +0xa8
    UILabel * _subtitleLabel; // +0xb0
    UIView * _qrCodeContainer; // +0xb8
    UIImageView * _qrCodeImageView; // +0xc0
    UILabel * _scanTipsLabel; // +0xc8
    UIView * _posterBackgroundImageContainer; // +0xd0
    UIImageView * _posterBackgroundImageView; // +0xd8
    UIView * _posterBackgroundImageShadingView; // +0xe0
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)hasBackgroundImage;
- (id)currentStyleId;
- (id)finderLiveTask;
- (void)updateWithAnchorContact:(id)arg1 qrCodeInfo:(id)arg2 posterModel:(id)arg3 isNormalAudience:(BOOL)arg4 completionBlock:(id /* block */)arg5;
- (void)setBackgroundImageUrl:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)arg1;
- (void)advancePreviewStyle;
- (void)advanceToPreviewStyle:(unsigned long long)arg1;
- (void)commitPreviewStyle;
- (void)revertPreviewStyle;
- (id)snapshotImage;
- (void)layoutSubviews;
- (void)onImageSettingsButtonTapped;
- (void)initUI;
- (void)configureComponentsStyle;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (void)updateWithQrCodeInfo:(id)arg1;
- (void)configureBackgroundImage:(BOOL)arg1;
- (void)layoutWithBackgroundImage;
- (void)layoutWithoutBackgroundImage;
- (struct)currentTitleLayoutAttributes;
- (void)transformMasterContainerToCenter;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (BOOL)previewBackgroundImageSet;
- (void)setPreviewBackgroundImageSet:(BOOL)arg1;
- (id)previewBackgroundImage;
- (void)setPreviewBackgroundImage:(id)arg1;
- (BOOL)backgroundImageSettingsButtonHidden;
- (void)setBackgroundImageSettingsButtonHidden:(BOOL)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)qrCodeInfo;
- (void)setQrCodeInfo:(id)arg1;
- (id)posterModel;
- (void)setPosterModel:(id)arg1;
- (BOOL)isNormalAudience;
- (void)setIsNormalAudience:(BOOL)arg1;
- (unsigned long long)currentStyleIndex;
- (void)setCurrentStyleIndex:(unsigned long long)arg1;
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
- (id)anchorAvatarView;
- (void)setAnchorAvatarView:(id)arg1;
- (id)anchorDisplayNameLabel;
- (void)setAnchorDisplayNameLabel:(id)arg1;
- (id)anchorVerificationStatusView;
- (void)setAnchorVerificationStatusView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)qrCodeContainer;
- (void)setQrCodeContainer:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)scanTipsLabel;
- (void)setScanTipsLabel:(id)arg1;
- (id)posterBackgroundImageContainer;
- (void)setPosterBackgroundImageContainer:(id)arg1;
- (id)posterBackgroundImageView;
- (void)setPosterBackgroundImageView:(id)arg1;
- (id)posterBackgroundImageShadingView;
- (void)setPosterBackgroundImageShadingView:(id)arg1;
- (void).cxx_destruct;
@end
