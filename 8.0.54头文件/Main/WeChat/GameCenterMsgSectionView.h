@interface GameCenterMsgSectionView : UITableViewHeaderFooterView
{
    MMUIView * _lineLeft; // +0x8
    MMUILabel * _titleView; // +0x10
    MMUIView * _lineRight; // +0x18
}
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupGameCenterMsgSectionView;
- (void)layoutSubviews;
- (id)lineLeft;
- (void)setLineLeft:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)lineRight;
- (void)setLineRight:(id)arg1;
- (void).cxx_destruct;
@end

