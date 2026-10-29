@interface MMEasterEggNewYearActivityCardView : UIView
{
    BOOL _buttonEnabled; // +0x8
    id <MMEasterEggNewYearActivityCardViewDelegate> _delegate; // +0x10
    MMEasterEggNewYearActivityInfo * _activityInfo; // +0x18
    MMEasterEggNewYearActivityMaterialInfo * _materialInfo; // +0x20
    MMEasterEggNewYearActivityReportObject * _reportObject; // +0x28
    NSString * _buttonTitle; // +0x30
    UIView * _contentView; // +0x38
    UIImageView * _backgroundImageView; // +0x40
    MMWebImageView * _brandLogoImageView; // +0x48
    MMUILabel * _brandNameLabel; // +0x50
    MMUILabel * _titleLabel; // +0x58
    MMUILabel * _subtitleLabel; // +0x60
    MMWebImageView * _creativeImageView; // +0x68
    MMUILabel * _moneyAmountLabel; // +0x70
    MMUILabel * _moneyMeasureLabel; // +0x78
    UIButton * _actionButton; // +0x80
    WCPlayerView * _creativeVideoView; // +0x88
    WCPlayerConfigControlView * _creativeVideoControlView; // +0x90
    WCPlayerPlayArgs * _creativeVideoPlayerInfo; // +0x98
    WCPlayerHttpMediaWrap * _creativeVideoMediaWrap; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMaterialInfo:(id)arg1;
- (void)setButtonEnabled:(BOOL)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)transformButtonToOpenMoneyStyle;
- (void)setupBrandHeader;
- (void)setupTitleAndSubtitle;
- (void)setupCreativeView;
- (void)setupActionButton;
- (void)layoutSubviews;
- (double)estimatedHeight;
- (float)ratioDisplay;
- (void)didShow;
- (void)pauseVideoIfNeeded;
- (void)resumeVideoIfNeeded;
- (void)closeViewController;
- (id)createPlayerConfig;
- (id)createMediaWrapFromURL:(id)arg1;
- (id)createPlayerInfoFromMediaWrap:(id)arg1;
- (void)onTapActionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (id)materialInfo;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (BOOL)buttonEnabled;
- (id)buttonTitle;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)brandLogoImageView;
- (void)setBrandLogoImageView:(id)arg1;
- (id)brandNameLabel;
- (void)setBrandNameLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)creativeImageView;
- (void)setCreativeImageView:(id)arg1;
- (id)moneyAmountLabel;
- (void)setMoneyAmountLabel:(id)arg1;
- (id)moneyMeasureLabel;
- (void)setMoneyMeasureLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)creativeVideoView;
- (void)setCreativeVideoView:(id)arg1;
- (id)creativeVideoControlView;
- (void)setCreativeVideoControlView:(id)arg1;
- (id)creativeVideoPlayerInfo;
- (void)setCreativeVideoPlayerInfo:(id)arg1;
- (id)creativeVideoMediaWrap;
- (void)setCreativeVideoMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end
