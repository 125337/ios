@interface WCMomentsFinderRecommendationButton : MMUIButton
{
    WCMomentsFinderRecommendationViewModel * _viewModel; // +0x8
    NSMutableArray * _headImageViews; // +0x10
    MMUILabel * _seeLabel; // +0x18
    RichTextView * _userTextView; // +0x20
    RichTextView * _contentTypeTextView; // +0x28
    UIImageView * _finderLogoView; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UIView * _bannerContainerView; // +0x40
    RichTextView * _singleRichTextView; // +0x48
    UIView * _cardContainerView; // +0x50
    UIView * _separatorLine; // +0x58
    UIImageView * _thumbImageView; // +0x60
    SightIconView * _playIconView; // +0x68
    RichTextView * _descriptionTextView; // +0x70
}
+ (double)heightForViewModel:(id)arg1;
+ (double)heightForBannerView:(id)arg1;
+ (double)heightForCardView:(id)arg1;
+ (id)createSingleRichTextView;
+ (void)updateRichTextView:(id)arg1 withFont:(id)arg2;
- (void)initParamsForReporter;
- (void)updateParamsForReporter;
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (void)updateSubviews;
- (void)reloadBannerViews;
- (void)loadBannerContainerView;
- (void)reloadHeadImageViews;
- (id)createHeadImageView;
- (void)reloadSeeLabel;
- (void)reloadUserTextView;
- (void)reloadContentTypeTextView;
- (void)updateContentTypeTextView:(BOOL)arg1;
- (void)loadFinderLogoView;
- (void)loadArrowImageView;
- (void)reloadSingleRichTextView;
- (void)reloadCardViews;
- (void)loadCardContainerView;
- (void)loadSeparatorLine;
- (void)reloadThumbImageView;
- (void)reloadDescriptionTextView;
- (void)updateAccessibility;
- (void)fitSizeAndSubviews;
- (void)_fitSizeAndLayoutContainerViews;
- (void)_Banner_fitContentForSubviews;
- (void)_Banner_fitSizeAndLayoutSubviews;
- (void)_Banner_AC_fitContentForSubviews;
- (void)_Banner_AC_fitSizeAndLayoutSubviews;
- (void)_Banner_BD_fitContentForSubviews;
- (void)_Banner_BD_fitSizeAndLayoutSubviews;
- (void)_Banner_E_fitContentForSubviews;
- (void)_Banner_E_fitSizeAndLayoutSubviews;
- (void)_Banner_E_SingleText_fitContentForSubviews;
- (void)_Banner_E_SingleText_fitSizeAndLayoutSubviews;
- (void)_Card_fitSizeAndLayoutSubviews;
- (void)layoutHeadImageViews:(id)arg1 fromLeft:(double)arg2 toRightEx:(double *)arg3 centerY:(double)arg4;
- (void)layoutHeadImageViews:(id)arg1 fromRight:(double)arg2 toLeftEx:(double *)arg3 centerY:(double)arg4;
- (void)layoutSubviews;
- (id)viewModel;
- (id)headImageViews;
- (void)setHeadImageViews:(id)arg1;
- (id)seeLabel;
- (void)setSeeLabel:(id)arg1;
- (id)userTextView;
- (void)setUserTextView:(id)arg1;
- (id)contentTypeTextView;
- (void)setContentTypeTextView:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)bannerContainerView;
- (void)setBannerContainerView:(id)arg1;
- (id)singleRichTextView;
- (void)setSingleRichTextView:(id)arg1;
- (id)cardContainerView;
- (void)setCardContainerView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)descriptionTextView;
- (void)setDescriptionTextView:(id)arg1;
- (void).cxx_destruct;
@end

