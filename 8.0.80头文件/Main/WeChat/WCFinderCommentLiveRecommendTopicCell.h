@interface WCFinderCommentLiveRecommendTopicCell : UITableViewCell
{
    id <WCFinderCommentLiveRecommendTopicCellDelegate> _delegate; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMUIButton * _actionButton; // +0x28
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)commonInit;
- (void)updateWithTopicText:(id)arg1 subText:(id)arg2;
- (void)layoutSubviews;
- (void)onTapAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
