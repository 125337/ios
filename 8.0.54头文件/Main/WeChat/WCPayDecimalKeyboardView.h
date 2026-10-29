@interface WCPayDecimalKeyboardView : UIView <MMUIViewControllerExt, WCBaseControlLogicExt>
{
    BOOL _alwaysHideFloatButton; // +0x8
    BOOL _alwaysShowFloatButton; // +0x9
    BOOL _confirmBtnEnableFlag; // +0xa
    BOOL _operateBtnEnableFlag; // +0xb
    BOOL _isOnlySupportInteger; // +0xc
    BOOL _bIsViewControllerDismiss; // +0xd
    BOOL _bIskeyboardHiding; // +0xe
    BOOL _bIskeyboardShowing; // +0xf
    BOOL _bNeedForceHide; // +0x10
    BOOL _bNeedHideFloatBtn; // +0x11
    BOOL _bIsInnerMode; // +0x12
    UIButton * _confirmBtn; // +0x18
    UIButton * _zeroBtn; // +0x20
    UIButton * _dotBtn; // +0x28
    UIButton * _deleteBtn; // +0x30
    id <WCPayDecimalKeyboardViewDelegate> _delegate; // +0x38
    UIView * _toolView; // +0x40
    UIView * _keysArea; // +0x48
    NSString * _confirmBtnTitle; // +0x50
    NSString * _operateBtnTitle; // +0x58
    UIButton * _operateBtn; // +0x60
    NSMutableArray * _keyContentArray; // +0x68
    UITextField * _targetTextField; // +0x70
    UIButton * _floatConfirmBtn; // +0x78
    double _keyboardShowY; // +0x80
    double _vcBottomContentY; // +0x88
    NSString * _enterAmount; // +0x90
    NSString * _innerAmount; // +0x98
    NSTimer * _clearTimer; // +0xa0
}
- (void)dealloc;
- (id)initKeyboardViewWithDelegate:(id)arg1 textField:(id)arg2 confirmBtnTitle:(id)arg3;
- (id)initKeyboardViewWithDelegate:(id)arg1 textField:(id)arg2 confirmBtnTitle:(id)arg3 toolView:(id)arg4 operateBtnTitle:(id)arg5;
- (id)initKeyboardViewWithDelegate:(id)arg1 textField:(id)arg2 confirmBtnTitle:(id)arg3 toolView:(id)arg4 operateBtnTitle:(id)arg5 isOnlySupportInteger:(BOOL)arg6;
- (void)manualShowKeyboard;
- (void)manualHideKeyboard;
- (id)getInputAmount;
- (void)resetAmount;
- (id)getEnterAmount;
- (void)clickConfirm;
- (void)outTimeTask;
- (void)setupKeyboardView;
- (long long)getCurrentKeyboardBtnTag;
- (id)genKeyboardCommonBtnWithTitle:(id)arg1;
- (id)genKeyboardIconBtnWithImage:(id)arg1;
- (id)genKeyboardBigConfirmBtnWithTitle:(id)arg1 needDefaultClickEvent:(BOOL)arg2;
- (id)genKeyboardCommonBtnAttributeWithBackgroundColor:(id)arg1 needDefaultClickEvent:(BOOL)arg2;
- (double)commonBtnWidth;
- (double)commonBtnHeight;
- (double)confirmBtnWidth;
- (void)setConfirmbtnEnable:(BOOL)arg1;
- (void)setOperateBtnEnable:(BOOL)arg1;
- (BOOL)confirmBtnEnable;
- (BOOL)operateBtnEnable;
- (void)setConfirmBtnBackgroundColor:(id)arg1;
- (void)setNeedForceDismiss;
- (void)setNeedForceDismissAndHideFloatBtn;
- (void)setViewControllerBottomContentY:(double)arg1;
- (void)forceShowFloatConfirmBtn;
- (void)keyboardBtnTouchDown:(id)arg1;
- (void)keyboardBtnClick:(id)arg1;
- (void)handleTextFieldEditingWithText:(id)arg1;
- (_NSRange)textFieldSelectedRange;
- (double)smallCircleDiameter;
- (double)bigCircleDiameter;
- (id)pathWithDiameter:(double)arg1;
- (id)circleLayerWithDiameter:(double)arg1;
- (id)copyConfirmBtn;
- (double)smallBtnWidth;
- (double)smallBtnHeight;
- (double)smallBtnRightMargin;
- (double)smallBtnBottomMargin;
- (void)genFloatConfirmBtn;
- (void)floatConfirmBtnClick;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (BOOL)isCurrentKeyboardViewActive;
- (void)keyboardFrameChange:(id)arg1;
- (void)layoutKeyboardButton;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)WCBaseViewControllerWillBeDismissed:(id)arg1;
- (BOOL)alwaysHideFloatButton;
- (void)setAlwaysHideFloatButton:(BOOL)arg1;
- (BOOL)alwaysShowFloatButton;
- (void)setAlwaysShowFloatButton:(BOOL)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)zeroBtn;
- (void)setZeroBtn:(id)arg1;
- (id)dotBtn;
- (void)setDotBtn:(id)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)keysArea;
- (void)setKeysArea:(id)arg1;
- (id)confirmBtnTitle;
- (void)setConfirmBtnTitle:(id)arg1;
- (id)operateBtnTitle;
- (void)setOperateBtnTitle:(id)arg1;
- (id)operateBtn;
- (void)setOperateBtn:(id)arg1;
- (BOOL)confirmBtnEnableFlag;
- (void)setConfirmBtnEnableFlag:(BOOL)arg1;
- (BOOL)operateBtnEnableFlag;
- (void)setOperateBtnEnableFlag:(BOOL)arg1;
- (BOOL)isOnlySupportInteger;
- (void)setIsOnlySupportInteger:(BOOL)arg1;
- (id)keyContentArray;
- (void)setKeyContentArray:(id)arg1;
- (id)targetTextField;
- (void)setTargetTextField:(id)arg1;
- (id)floatConfirmBtn;
- (void)setFloatConfirmBtn:(id)arg1;
- (BOOL)bIsViewControllerDismiss;
- (void)setBIsViewControllerDismiss:(BOOL)arg1;
- (BOOL)bIskeyboardHiding;
- (void)setBIskeyboardHiding:(BOOL)arg1;
- (BOOL)bIskeyboardShowing;
- (void)setBIskeyboardShowing:(BOOL)arg1;
- (double)keyboardShowY;
- (void)setKeyboardShowY:(double)arg1;
- (BOOL)bNeedForceHide;
- (void)setBNeedForceHide:(BOOL)arg1;
- (BOOL)bNeedHideFloatBtn;
- (void)setBNeedHideFloatBtn:(BOOL)arg1;
- (double)vcBottomContentY;
- (void)setVcBottomContentY:(double)arg1;
- (BOOL)bIsInnerMode;
- (void)setBIsInnerMode:(BOOL)arg1;
- (id)enterAmount;
- (void)setEnterAmount:(id)arg1;
- (id)innerAmount;
- (void)setInnerAmount:(id)arg1;
- (id)clearTimer;
- (void)setClearTimer:(id)arg1;
- (void).cxx_destruct;
@end

