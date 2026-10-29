@interface WCCanvasLocationComponent : WCCanvasComponent
{
    UIImageView * _m_lbsIcon; // +0x8
    UIImageView * _m_rightIcon; // +0x10
    UILabel * _m_poiNameLabel; // +0x18
    UIView * _topLineView; // +0x20
    UIView * _bottomLineView; // +0x28
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)configureLineView:(id)arg1;
- (void)updateFrame:(id)arg1;
- (id)m_lbsIcon;
- (id)m_rightIcon;
- (id)m_poiNameLabel;
- (id)topLineView;
- (id)bottomLineView;
- (void)setM_lbsIcon:(id)arg1;
- (void)setM_rightIcon:(id)arg1;
- (void)setM_poiNameLabel:(id)arg1;
- (void)setTopLineView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (void).cxx_destruct;
@end
