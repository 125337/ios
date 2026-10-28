@interface WXGRoamHalfNotifyView : MMPageSheetBaseView <IRoamBackupPackageServiceExt>
{
    id /* block */ _buttonBlock; // +0x8
    unsigned long long _curPackageId; // +0x10
    UILabel * _subTitle; // +0x18
    UILabel * _title; // +0x20
    UIButton * _scanBtn; // +0x28
}
- (id)initWithDetailHeight:(double)arg1 navLeftStyle:(unsigned int)arg2 iconName:(id)arg3 iconColor:(id)arg4 title:(id)arg5 subTitle:(id)arg6 buttonType:(unsigned long long)arg7 buttonTitle:(id)arg8 buttonBlock:(id /* block */)arg9;
- (id)initWithDetailHeight:(double)arg1 navLeftStyle:(unsigned int)arg2 iconName:(id)arg3 iconSize:(CGSize)arg4 iconColor:(id)arg5 title:(id)arg6 subTitle:(id)arg7 buttonType:(unsigned long long)arg8 buttonTitle:(id)arg9 buttonBlock:(id /* block */)arg10;
- (void)setupDotTipsView;
- (void)updateUSBTipsView;
- (void)tapButton;
- (void)onRoamBackupPackageServiceStartTask:(unsigned long long)arg1;
- (id /* block */)buttonBlock;
- (void)setButtonBlock:(id /* block */)arg1;
- (unsigned long long)curPackageId;
- (void)setCurPackageId:(unsigned long long)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)scanBtn;
- (void)setScanBtn:(id)arg1;
- (void).cxx_destruct;
@end
