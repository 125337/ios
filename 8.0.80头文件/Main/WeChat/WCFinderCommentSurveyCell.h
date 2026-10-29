@interface WCFinderCommentSurveyCell : UITableViewCell
{
    id <WCFinderCommentSurveyCellDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    MMUIButton * _closeButton; // +0x18
    WCFinderStarRatingView * _ratingView; // +0x20
    WCFinderCommentSurveyRatingViewModel * _viewModel; // +0x28
}
+ (double)titleHorPadding;
+ (double)titleHeightWithText:(id)arg1 contentWidth:(double)arg2;
+ (double)cellHeightWithViewModel:(id)arg1 contentWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupRatingViewWithItems:(id)arg1;
- (void)updateWithViewModel:(id)arg1 indexPath:(id)arg2 commentScene:(int)arg3 feedScene:(int)arg4 commentVCOpenTs:(unsigned long long)arg5 reportCommonParams:(id)arg6;
- (void)onRatingValueChanged:(id)arg1;
- (void)onCloseButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)ratingView;
- (void)setRatingView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
