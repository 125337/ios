@interface MMLiveAddBoardViewItem : UIView
{
    BOOL _isActionEnabled; // +0x8
    unsigned long long _type; // +0x10
    id /* block */ _itemClickBlock; // +0x18
    MMUIButton * _functionButton; // +0x20
    MMUILabel * _functionLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)setType:(unsigned long long)arg1;
- (id)functionButton;
- (id)functionLabel;
- (void)functionButtonClick;
- (void)setIsActionEnabled:(BOOL)arg1;
- (unsigned long long)type;
- (id /* block */)itemClickBlock;
- (void)setItemClickBlock:(id /* block */)arg1;
- (BOOL)isActionEnabled;
- (void)setFunctionButton:(id)arg1;
- (void)setFunctionLabel:(id)arg1;
- (void).cxx_destruct;
@end

