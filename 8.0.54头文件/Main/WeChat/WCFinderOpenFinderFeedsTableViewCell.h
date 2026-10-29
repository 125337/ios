@interface WCFinderOpenFinderFeedsTableViewCell : UITableViewCell <WCFinderPreviewFeedHorizontallyViewDelegate>
{
    id <WCFinderOpenFinderFeedsTableViewCellDelegate> _delegate; // +0x8
    WCFinderPreviewFeedHorizontallyView * _feedHorizonView; // +0x10
    RichTextView * _tipsTextView; // +0x18
    UIImageView * _arrowImageView; // +0x20
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)feedHorizonView;
- (id)tipsTextView;
- (id)arrowImageView;
- (void)updateCellWithDataSource:(id)arg1 guideTips:(id)arg2;
- (void)layoutViews;
- (void)onClickContentAction;
- (void)horizonViewClickItemWith:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFeedHorizonView:(id)arg1;
- (void)setTipsTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

