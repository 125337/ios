@interface MMFinderLiveAiAssistantSwitchRow : UIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _detailLabel; // +0x10
    UIView * _sepelateLine; // +0x18
    NSString * _detail; // +0x20
    UISwitch * _functionSwitch; // +0x28
    unsigned long long _itemType; // +0x30
    id /* block */ _toggleHandler; // +0x38
}
- (id)initWithItemType:(unsigned long long)arg1 title:(id)arg2 detail:(id)arg3;
- (double)titleHeight;
- (double)labelWidthForWidth:(double)arg1;
- (double)heightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)onSwitchChanged;
- (id)functionSwitch;
- (unsigned long long)itemType;
- (id /* block */)toggleHandler;
- (void)setToggleHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
