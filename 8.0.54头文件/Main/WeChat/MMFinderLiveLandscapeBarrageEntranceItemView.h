@interface MMFinderLiveLandscapeBarrageEntranceItemView : UIView
{
    BOOL _isEntranceOn; // +0x8
    id /* block */ _onBarrageEntranceOnChanged; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UISwitch * _entranceSwitch; // +0x20
}
+ (double)staticWidth;
+ (double)staticHeight;
- (id)initWithEntranceOn:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTitleLabel;
- (void)layoutEntranceSwitch;
- (void)switchDidChanged:(id)arg1;
- (BOOL)isEntranceOn;
- (void)setIsEntranceOn:(BOOL)arg1;
- (id /* block */)onBarrageEntranceOnChanged;
- (void)setOnBarrageEntranceOnChanged:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)entranceSwitch;
- (void)setEntranceSwitch:(id)arg1;
- (void).cxx_destruct;
@end

