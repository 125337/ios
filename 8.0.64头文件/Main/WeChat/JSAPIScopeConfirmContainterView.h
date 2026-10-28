@interface JSAPIScopeConfirmContainterView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView * _contentView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _titleSplitLine; // +0x18
    MMWebImageView * _appIconImageView; // +0x20
    UILabel * _scopeDescriptionLabel; // +0x28
    UIView * _tableSplitLine; // +0x30
    UITableView * _scopeTableView; // +0x38
    UIView * _buttonSplitLine; // +0x40
    UIView * _buttonVerticalSpliteLine; // +0x48
    UIButton * _cancelButton; // +0x50
    UIButton * _confirmButton; // +0x58
    NSMutableArray * _arrSelect; // +0x60
    JSApiScopeConfirmWindow * _weakConfirmWindow; // +0x68
}
- (id)confirmWindow;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)layoutSubviews;
- (CGRect)contentViewFrame;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (double)designTableHeightToContentWidthRatio;
- (id)titleText;
- (void)onClickButtonConfirm:(id)arg1;
- (void)onClickButtonCancel:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)weakConfirmWindow;
- (void)setWeakConfirmWindow:(id)arg1;
- (void).cxx_destruct;
@end
