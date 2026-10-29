@interface WAHomeMenuView : WCTBaseMenuView
{
    MMWebImageView * _leftImageView; // +0x8
    UILabel * _subTitleLabel; // +0x10
    MMWebImageView * _rightImageView; // +0x18
    UIView * _badgeView; // +0x20
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (id)initWithCell:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)updateHomeMenuCellUIWithTipsInfo:(id)arg1;
- (void)updateHomeMenuCellUIWithEntranceInfo:(id)arg1;
- (void)loadUI:(id)arg1;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end

