@interface GameCenterMsgListRawBaseCell : MMMultiMenuTableViewCell
{
    BOOL _highLightBackground; // +0x40
    MMUIView * _dividerView; // +0x48
    id /* block */ _clickBlock; // +0x50
    UIView * _hightLightBgView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithCellData:(id)arg1;
- (void)setHighLightBackground:(BOOL)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (BOOL)highLightBackground;
- (id)hightLightBgView;
- (void)setHightLightBgView:(id)arg1;
- (void).cxx_destruct;
@end
