@interface WCFinderLocationLbsTableViewCell : UITableViewCell
{
    id <WCFinderLocationLbsTableViewCellDelegate> _delegate; // +0x8
    RichTextView * _nameTextView; // +0x10
    RichTextView * _distanceTextView; // +0x18
    RichTextView * _rewardTextView; // +0x20
    RichTextView * _dividerTextView; // +0x28
    RichTextView * _moreTextView; // +0x30
    UIButton * _moreBtn; // +0x38
    WCFinderAnimationLoadingView * _loadingImageView; // +0x40
    UIImageView * _arrowImageView; // +0x48
    UIView * _separatorLine; // +0x50
}
+ (double)textAreaMaxWidth:(double)arg1;
+ (id)stringWithCustomLink:(id)arg1 searchString:(id)arg2;
+ (double)cellHeightWithConfig:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)layoutAllSubviews;
- (void)layoutSubviews;
- (void)updateTextView:(id)arg1 width:(double)arg2;
- (void)prepareForReuse;
- (void)updateWithConfig:(id)arg1 searchWord:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nameTextView;
- (void)setNameTextView:(id)arg1;
- (id)distanceTextView;
- (void)setDistanceTextView:(id)arg1;
- (id)rewardTextView;
- (void)setRewardTextView:(id)arg1;
- (id)dividerTextView;
- (void)setDividerTextView:(id)arg1;
- (id)moreTextView;
- (void)setMoreTextView:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
