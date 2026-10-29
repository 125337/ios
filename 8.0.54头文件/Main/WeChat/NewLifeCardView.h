@interface NewLifeCardView : UIView
{
    BOOL _enableFinderLike; // +0x8
    NewLifeCardViewModel * _viewModel; // +0x10
    MMWebImageView * _mediaImageView; // +0x18
    UIView * _mediaMaskView; // +0x20
    RichTextView * _titleLabel; // +0x28
    WCFinderHeadImageView * _headImageView; // +0x30
    MMUILabel * _usernameLabel; // +0x38
    MMUIButton * _likeButton; // +0x40
    MMUIButton * _globalFavoriteButton; // +0x48
    MMUIButton * _readCountButton; // +0x50
    UIView * _separateView; // +0x58
    MMUIButton * _stickyButton; // +0x60
    MMUIButton * _privacyButton; // +0x68
    NewLifeCardPostStateView * _postStateView; // +0x70
    ColorGradientView * _gradientView; // +0x78
    WCFinderStaticCoverInfoView * _infoView; // +0x80
    UIView * _infoBGView; // +0x88
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x90
    NewLifeRedPacketActivityView * _redPacketView; // +0x98
}
+ (double)adjustFooterButtonSize:(id)arg1;
+ (id)generateFooterButton;
+ (id)generateMediaBottomButtonWithHasText:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformMagicTap;
- (void)initSubviews;
- (void)setEnableFinderLike:(BOOL)arg1;
- (void)updateLayout;
- (CGRect)getCoverCropRect;
- (void)updateView;
- (void)updateStateButtons;
- (void)updateMaskState;
- (void)updateLikeState;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)updateSeparateView;
- (id)mediaView;
- (void)onTapLikeButton;
- (id)feedbackGenerator;
- (void)configureCardReportWithParams:(id)arg1;
- (void)configureLikeButtonClickReportWithParams:(id)arg1;
- (void)updateReportParams:(id)arg1;
- (id)viewModel;
- (BOOL)enableFinderLike;
- (id)mediaImageView;
- (void)setMediaImageView:(id)arg1;
- (id)mediaMaskView;
- (void)setMediaMaskView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)globalFavoriteButton;
- (void)setGlobalFavoriteButton:(id)arg1;
- (id)readCountButton;
- (void)setReadCountButton:(id)arg1;
- (id)separateView;
- (void)setSeparateView:(id)arg1;
- (id)stickyButton;
- (void)setStickyButton:(id)arg1;
- (id)privacyButton;
- (void)setPrivacyButton:(id)arg1;
- (id)postStateView;
- (void)setPostStateView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (id)infoBGView;
- (void)setInfoBGView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (id)redPacketView;
- (void)setRedPacketView:(id)arg1;
- (void).cxx_destruct;
@end

