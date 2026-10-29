@interface StandardButtonBuilder : NSObject
{
    BOOL _btnLoading; // +0x8
    unsigned long long _btnType; // +0x10
    unsigned long long _btnSize; // +0x18
    unsigned long long _btnStyle; // +0x20
    NSString * _btnIconName; // +0x28
}
- (id)init;
- (id /* block */)type;
- (id /* block */)size;
- (id /* block */)style;
- (id /* block */)loading;
- (id /* block */)iconName;
- (id /* block */)customizedBtn;
- (id)standardButton;
- (id)realGenStandatdBtn;
- (void)applyPrimaryTypeTo:(id)arg1;
- (void)applySecondaryTypeTo:(id)arg1;
- (void)applyNegativeTypeTo:(id)arg1;
- (void)applyLargeSizeTo:(id)arg1;
- (void)applyMediumSizeTo:(id)arg1;
- (void)applySmallSizeTo:(id)arg1;
- (unsigned long long)btnType;
- (void)setBtnType:(unsigned long long)arg1;
- (unsigned long long)btnSize;
- (void)setBtnSize:(unsigned long long)arg1;
- (unsigned long long)btnStyle;
- (void)setBtnStyle:(unsigned long long)arg1;
- (BOOL)btnLoading;
- (void)setBtnLoading:(BOOL)arg1;
- (id)btnIconName;
- (void)setBtnIconName:(id)arg1;
- (void).cxx_destruct;
@end

