@interface EmoticonBoardCrossCollectionRecommendEmoticonHeaderView : UICollectionReusableView <ILinkEventExt>
{
    id <EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewDelegate> _delegate; // +0x8
    EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewModel * _viewModel; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _fullPrivacyView; // +0x20
    MMUILabel * _recommendationTitleLabel; // +0x28
    RichTextView * _recommendationIntroduceView; // +0x30
    UIButton * _fullPrivacyConfirmButton; // +0x38
    UIButton * _fullPrivacyCloseButton; // +0x40
    UIView * _briefPrivacyView; // +0x48
    UIView * _briefPrivacyViewTopline; // +0x50
    UIView * _briefPrivacyViewBottomline; // +0x58
    MMUILabel * _briefPrivacyTitle; // +0x60
    UIButton * _briefPrivacyTipButton; // +0x68
    UIButton * _briefPrivacyConfirmButton; // +0x70
    UIButton * _briefPrivacyCancelButton; // +0x78
    UIButton * _refreshButton; // +0x80
}
+ (double)heightForPrivacyViewWithWidth:(double)arg1 type:(unsigned long long)arg2 text:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupFullPrivacyView;
- (void)fullPrivacyCloseButtonTouchDown:(id)arg1;
- (void)fullPrivacyCloseButtonTouchUp:(id)arg1;
- (void)setupBriefPrivacyView;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)configureFullPrivacyViewLayoutWithFlex:(void *)arg1;
- (void)configureBriefPrivacyViewLayoutWithFlex:(void *)arg1;
- (void)onClickFullPrivacyConfirmButton;
- (void)onClickFullPrivacyCancelButton;
- (void)onClickBriefPrivacyTipButton;
- (void)onClickBriefPrivacyConfirmButton;
- (void)onClickBriefPrivacyCancelButton;
- (void)onClickRefreshButton:(id)arg1;
- (void)onClickRefreshButtonTouchDown:(id)arg1;
- (void)onClickRefreshButtonTouchUp:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)fullPrivacyView;
- (void)setFullPrivacyView:(id)arg1;
- (id)recommendationTitleLabel;
- (void)setRecommendationTitleLabel:(id)arg1;
- (id)recommendationIntroduceView;
- (void)setRecommendationIntroduceView:(id)arg1;
- (id)fullPrivacyConfirmButton;
- (void)setFullPrivacyConfirmButton:(id)arg1;
- (id)fullPrivacyCloseButton;
- (void)setFullPrivacyCloseButton:(id)arg1;
- (id)briefPrivacyView;
- (void)setBriefPrivacyView:(id)arg1;
- (id)briefPrivacyViewTopline;
- (void)setBriefPrivacyViewTopline:(id)arg1;
- (id)briefPrivacyViewBottomline;
- (void)setBriefPrivacyViewBottomline:(id)arg1;
- (id)briefPrivacyTitle;
- (void)setBriefPrivacyTitle:(id)arg1;
- (id)briefPrivacyTipButton;
- (void)setBriefPrivacyTipButton:(id)arg1;
- (id)briefPrivacyConfirmButton;
- (void)setBriefPrivacyConfirmButton:(id)arg1;
- (id)briefPrivacyCancelButton;
- (void)setBriefPrivacyCancelButton:(id)arg1;
- (id)refreshButton;
- (void)setRefreshButton:(id)arg1;
- (void).cxx_destruct;
@end
