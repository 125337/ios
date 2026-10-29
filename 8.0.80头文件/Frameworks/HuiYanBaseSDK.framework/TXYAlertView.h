@interface TXYAlertView : UIView
{
    id /* block */ _resultIndex; // +0x8
    UIView * _alertView; // +0x10
    UILabel * _titleLbl; // +0x18
    UILabel * _msgLbl; // +0x20
    UIButton * _sureBtn; // +0x28
    UIButton * _cancleBtn; // +0x30
    UIView * _lineView; // +0x38
    UIView * _verLineView; // +0x40
}
- (void)setWightStyle:(id)arg1;
- (double)addButtonMethod:(id)arg1 sureTitle:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 sureBtn:(id)arg3 cancleBtn:(id)arg4;
- (void)showXLAlertView;
- (void)creatShowAnimation;
- (void)buttonEvent:(id)arg1;
- (id)getAdaptiveLable:(CGRect)arg1 andText:(id)arg2 andIsTitle:(BOOL)arg3;
- (id)imageWithColor:(id)arg1;
- (id /* block */)resultIndex;
- (void)setResultIndex:(id /* block */)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (id)titleLbl;
- (void)setTitleLbl:(id)arg1;
- (id)msgLbl;
- (void)setMsgLbl:(id)arg1;
- (id)sureBtn;
- (void)setSureBtn:(id)arg1;
- (id)cancleBtn;
- (void)setCancleBtn:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)verLineView;
- (void)setVerLineView:(id)arg1;
- (void).cxx_destruct;
@end
