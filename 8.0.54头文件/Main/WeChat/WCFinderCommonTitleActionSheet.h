@interface WCFinderCommonTitleActionSheet : WCActionSheet
{
    NSString * _titleContent; // +0x8
    NSString * _subTitleContent; // +0x10
    NSString * _leftButtonMsg; // +0x18
    id /* block */ _clickLeftButtonBlock; // +0x20
    NSString * _rightButtonMsg; // +0x28
    id /* block */ _clickRightButtonBlock; // +0x30
    id /* block */ _bindReportViewBlock; // +0x38
    UIView * _tipsView; // +0x40
    UIButton * _leftBtn; // +0x48
    UIButton * _rightBtn; // +0x50
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (double)appendBottomView:(id)arg1 bottomLine:(double)arg2;
- (double)appendClickButtonsOnContentView:(id)arg1 topLine:(double)arg2;
- (id)titleContent;
- (void)setTitleContent:(id)arg1;
- (id)subTitleContent;
- (void)setSubTitleContent:(id)arg1;
- (id)leftButtonMsg;
- (void)setLeftButtonMsg:(id)arg1;
- (id /* block */)clickLeftButtonBlock;
- (void)setClickLeftButtonBlock:(id /* block */)arg1;
- (id)rightButtonMsg;
- (void)setRightButtonMsg:(id)arg1;
- (id /* block */)clickRightButtonBlock;
- (void)setClickRightButtonBlock:(id /* block */)arg1;
- (id /* block */)bindReportViewBlock;
- (void)setBindReportViewBlock:(id /* block */)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)leftBtn;
- (void)setLeftBtn:(id)arg1;
- (id)rightBtn;
- (void)setRightBtn:(id)arg1;
- (void).cxx_destruct;
@end

