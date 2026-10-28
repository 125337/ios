@interface MMFinderLiveCustomizeRewardTableCellBase : UITableViewCell
{
    BOOL _showTopCorners; // +0x8
    BOOL _showBottomCorners; // +0x9
    BOOL _rewardInfoEnable; // +0xa
    UIView * _containerView; // +0x10
    UIImageView * _rightChevronView; // +0x18
    UIView * _sepLine; // +0x20
    UIView * _highlightView; // +0x28
    UIImageView * _thumbnailView; // +0x30
    UILabel * _nameLabel; // +0x38
    UILabel * _rewardPriceLabel; // +0x40
    UIImageView * _coinIconView; // +0x48
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviewsForStyle;
- (void)initSubviewsForRewardInfo;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutSubviewsForStyle;
- (void)layoutSubviewsForRewardInfo;
- (void)setShowSepLine:(BOOL)arg1;
- (BOOL)showSepLine;
- (void)setRewardInfoWithThumbUrl:(id)arg1 rewardName:(id)arg2 rewardPrice:(float)arg3;
- (BOOL)showTopCorners;
- (void)setShowTopCorners:(BOOL)arg1;
- (BOOL)showBottomCorners;
- (void)setShowBottomCorners:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (BOOL)rewardInfoEnable;
- (void)setRewardInfoEnable:(BOOL)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)rewardPriceLabel;
- (void)setRewardPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (void).cxx_destruct;
@end
