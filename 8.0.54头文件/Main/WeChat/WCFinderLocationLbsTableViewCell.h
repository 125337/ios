@interface WCFinderLocationLbsTableViewCell : UITableViewCell
{
    RichTextView * _nameTextView; // +0x8
    RichTextView * _distanceTextView; // +0x10
    RichTextView * _rewardTextView; // +0x18
    RichTextView * _dividerTextView; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _separatorLine; // +0x30
}
+ (double)textAreaMaxWidth:(double)arg1;
+ (id)stringWithCustomLink:(id)arg1 searchString:(id)arg2;
+ (double)cellHeightWithConfig:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)layoutAllSubviews;
- (void)prepareForReuse;
- (void)updateWithConfig:(id)arg1 searchWord:(id)arg2;
- (id)nameTextView;
- (void)setNameTextView:(id)arg1;
- (id)distanceTextView;
- (void)setDistanceTextView:(id)arg1;
- (id)rewardTextView;
- (void)setRewardTextView:(id)arg1;
- (id)dividerTextView;
- (void)setDividerTextView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

