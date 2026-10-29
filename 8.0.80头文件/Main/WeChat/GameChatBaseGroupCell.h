@interface GameChatBaseGroupCell : GCBaseCollectionViewCell
{
    MMWebImageView * _webImageView; // +0x8
    UILabel * _groupNameLabel; // +0x10
    UILabel * _gcMidDescLabel; // +0x18
    UIView * _bottomView; // +0x20
    UIView * _bgCornerView; // +0x28
    UIView * _redDotView; // +0x30
    UILabel * _topLabel; // +0x38
    UIColor * _gcNormalTextColor; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)supportStickTop;
- (id)verticalAlignArrary;
- (double)labelLeft;
- (double)maxRight;
- (double)verticalAlignCenterY;
- (void)configureWithCellModel:(id)arg1;
- (id)attributeDescForModel:(id)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)groupNameLabel;
- (void)setGroupNameLabel:(id)arg1;
- (id)gcMidDescLabel;
- (void)setGcMidDescLabel:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)bgCornerView;
- (void)setBgCornerView:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)topLabel;
- (void)setTopLabel:(id)arg1;
- (id)gcNormalTextColor;
- (void)setGcNormalTextColor:(id)arg1;
- (void).cxx_destruct;
@end
