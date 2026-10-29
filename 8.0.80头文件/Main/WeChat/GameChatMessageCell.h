@interface GameChatMessageCell : GCBaseCollectionViewCell
{
    MMWebImageView * _iconImgView; // +0x8
    UILabel * _bottomLabel; // +0x10
    MMBadgeView * _badgeView; // +0x18
}
+ (double)dynamicCellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (void)layoutBadgeView;
- (void)updateBadgeView:(unsigned long long)arg1 asSmallDot:(BOOL)arg2;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
