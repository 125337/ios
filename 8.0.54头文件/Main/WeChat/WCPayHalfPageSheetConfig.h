@interface WCPayHalfPageSheetConfig : NSObject
{
    unsigned int _iconType; // +0x8
    NSString * _title; // +0x10
    NSString * _tipsContent; // +0x18
    NSString * _leftButtonTitle; // +0x20
    id /* block */ _onLeftButtonClick; // +0x28
    NSString * _rightButtonTitle; // +0x30
    id /* block */ _onRightButtonClick; // +0x38
}
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)tipsContent;
- (void)setTipsContent:(id)arg1;
- (id)leftButtonTitle;
- (void)setLeftButtonTitle:(id)arg1;
- (id /* block */)onLeftButtonClick;
- (void)setOnLeftButtonClick:(id /* block */)arg1;
- (id)rightButtonTitle;
- (void)setRightButtonTitle:(id)arg1;
- (id /* block */)onRightButtonClick;
- (void)setOnRightButtonClick:(id /* block */)arg1;
- (void).cxx_destruct;
@end

