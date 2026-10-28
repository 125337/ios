@interface MMLiveCNYSharePageSheet : MMPageSheetBaseView
{
    id <MMLiveCNYSharePageSheetDelegate> _delegate; // +0x8
    MMFinderLiveBannerInfo * _bannerInfo; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    FinderJumpInfo_NativeInfo * _oriInfo; // +0x20
    MMUIView * _contentView; // +0x28
    UIView * _gradientBackgroundView; // +0x30
    CAGradientLayer * _gradientLayer; // +0x38
    UIImageView * _backgroundBottomDecorationView; // +0x40
    MMUILabel * _shareTitleLabel; // +0x48
    MMUILabel * _shareIntroductionLabel; // +0x50
    MMWebImageView * _shareResultPreviewView; // +0x58
    MMUIButton * _shareActionBtn; // +0x60
    MMUILabel * _sponsorInfoLabel; // +0x68
}
- (id)initWithTaskId:(id)arg1 info:(id)arg2;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (id)sponsorFont;
- (void)setupViewsContent;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutShareContent;
- (void)onClickShareActionBtn;
- (void)setupSponsorInfoLabel;
- (id)contentView;
- (id)gradientBackgroundView;
- (id)shareTitleLabel;
- (id)shareIntroductionLabel;
- (id)shareResultPreviewView;
- (id)shareActionBtn;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)configSponsorLabel:(int)arg1;
- (id)createTitleDisplayStr:(int)arg1;
- (id)createIntroductionDisplayStr:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)oriInfo;
- (void)setOriInfo:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setGradientBackgroundView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)backgroundBottomDecorationView;
- (void)setBackgroundBottomDecorationView:(id)arg1;
- (void)setShareTitleLabel:(id)arg1;
- (void)setShareIntroductionLabel:(id)arg1;
- (void)setShareResultPreviewView:(id)arg1;
- (void)setShareActionBtn:(id)arg1;
- (id)sponsorInfoLabel;
- (void)setSponsorInfoLabel:(id)arg1;
- (void).cxx_destruct;
@end
