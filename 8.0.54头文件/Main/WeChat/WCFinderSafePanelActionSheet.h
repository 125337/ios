@interface WCFinderSafePanelActionSheet : WCActionSheet
{
    NSString * _titleContent; // +0x8
    NSString * _subTitleContent; // +0x10
    id /* block */ _clickSubTitleAction; // +0x18
    NSString * _leftButtonMsg; // +0x20
    id /* block */ _clickLeftButtonBlock; // +0x28
    NSString * _rightButtonMsg; // +0x30
    id /* block */ _clickRightButtonBlock; // +0x38
    NSArray * _buttonModelArray; // +0x40
    UIView * _tipsView; // +0x48
    UILabel * _subTitleLabel; // +0x50
    UIButton * _rightBtn; // +0x58
    UIButton * _leftBtn; // +0x60
    UIButton * _bottomBtn; // +0x68
    NSMutableArray * _buttonArray; // +0x70
}
+ (id)buildActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(id /* block */)arg3 rightButtonMsg:(id)arg4 clickRightButtonBlock:(id /* block */)arg5 leftButtonMsg:(id)arg6 clickLeftButtonBlock:(id /* block */)arg7;
+ (id)buildActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(id /* block */)arg3 buttonModelArray:(id)arg4;
+ (id)genClickButtonMaxWidth:(double)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 clickBlock:(id /* block */)arg4;
- (id)buttonArray;
- (void)setButtonModelArray:(id)arg1;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (double)appendClickButtonsOnContentView:(id)arg1 topLine:(double)arg2;
- (void)bindSafeCheckPanelExposeReportCommentScene:(int)arg1 showType:(unsigned long long)arg2;
- (void)bindSafeCheckPanelSubviewClickReportCommentScene:(int)arg1 showType:(unsigned long long)arg2;
- (id)titleContent;
- (void)setTitleContent:(id)arg1;
- (id)subTitleContent;
- (void)setSubTitleContent:(id)arg1;
- (id /* block */)clickSubTitleAction;
- (void)setClickSubTitleAction:(id /* block */)arg1;
- (id)leftButtonMsg;
- (void)setLeftButtonMsg:(id)arg1;
- (id /* block */)clickLeftButtonBlock;
- (void)setClickLeftButtonBlock:(id /* block */)arg1;
- (id)rightButtonMsg;
- (void)setRightButtonMsg:(id)arg1;
- (id /* block */)clickRightButtonBlock;
- (void)setClickRightButtonBlock:(id /* block */)arg1;
- (id)buttonModelArray;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)rightBtn;
- (void)setRightBtn:(id)arg1;
- (id)leftBtn;
- (void)setLeftBtn:(id)arg1;
- (id)bottomBtn;
- (void)setBottomBtn:(id)arg1;
- (void)setButtonArray:(id)arg1;
- (void).cxx_destruct;
@end

