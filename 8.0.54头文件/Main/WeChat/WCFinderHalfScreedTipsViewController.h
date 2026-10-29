@interface WCFinderHalfScreedTipsViewController : MMPageSheetBaseViewController
{
    NSString * _titleTips; // +0x68
    NSString * _detail; // +0x70
    NSString * _cancelTips; // +0x78
    NSString * _confirmTips; // +0x80
    id /* block */ _clickConfirmBtnBlock; // +0x88
    id /* block */ _clickCancelBtnBlock; // +0x90
}
- (id)initWithTipsTitle:(id)arg1 tipsDetail:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;
- (double)pageSheetContentHeight;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupSubView;
- (void)onClickDoneBtn;
- (void)onCancelBtn;
- (id)titleTips;
- (void)setTitleTips:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)cancelTips;
- (void)setCancelTips:(id)arg1;
- (id)confirmTips;
- (void)setConfirmTips:(id)arg1;
- (id /* block */)clickConfirmBtnBlock;
- (void)setClickConfirmBtnBlock:(id /* block */)arg1;
- (id /* block */)clickCancelBtnBlock;
- (void)setClickCancelBtnBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

