@interface KindaEditText : KindaView <UITextFieldDelegate, WCPayDecimalKeyboardViewDelegate, MMKEditText>
{
    BOOL _m_bRealLen; // +0xa8
    BOOL _showFloatButton; // +0xa9
    BOOL _m_stayFocusWhenClickEnter; // +0xaa
    BOOL _m_focusValue; // +0xab
    int _m_maxLength; // +0xac
    int _moneyRestrictionIntegerLimit; // +0xb0
    UITextField * _m_textField; // +0xb8
    UILabel * _fixedHeaderLabel; // +0xc0
    double _m_textSize; // +0xc8
    MMDynamicColor * _m_textColor; // +0xd0
    long long _m_textAlign; // +0xd8
    MMDynamicColor * _m_hintColor; // +0xe0
    long long _m_keyboardType; // +0xe8
    MMDynamicColor * _m_tintColor; // +0xf0
    NSString * _m_fontName; // +0xf8
    MMKEditTextOnTextBeginChangeCallback * _m_textBeginChangeCallback; // +0x100
    MMKEditTextOnTextChangedCallback * _m_textChangedCallback; // +0x108
    MMKEditTextOnTextEndEditingCallback * _m_textEndEditingCallBack; // +0x110
    MMKEditTextOnEditorActionCallback * _m_textEditorActionCallback; // +0x118
    NSString * _m_confirmButtonText; // +0x120
    NSString * _fixedHeaderText; // +0x128
    WCPayDecimalKeyboardView * _keyboardView; // +0x130
    long long __restrictType; // +0x138
    double _m_hintTextSize; // +0x140
    MMKEditTextOnFocusChangeCallback * _m_onFocusChangeCallback; // +0x148
    NSString * _m_confirmBtnTitle; // +0x150
    KindaView * _m_toolBarView; // +0x158
}
- (id)init;
- (void)dealloc;
- (id)getView;
- (void)textFieldDidChange;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldEndEditing;
- (void)setText:(id)arg1;
- (id)getText;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setTextFont:(id)arg1;
- (id)getTextFont;
- (void)setTextAlign:(long long)arg1;
- (long long)getTextAlign;
- (void)setHint:(id)arg1;
- (id)getHint;
- (void)setHintColor:(id)arg1;
- (id)getHintColor;
- (void)setHintTextSize:(float)arg1;
- (void)updateHint;
- (float)getHintTextSize;
- (void)setMaxLength:(int)arg1;
- (int)getMaxLength;
- (void)setKeyboardType:(long long)arg1;
- (long long)getKeyboardType;
- (void)setSelection:(int)arg1;
- (int)getSelection;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setTintColor:(id)arg1;
- (id)getTintColor;
- (id)getConfirmButtonText;
- (void)setConfirmButtonText:(id)arg1;
- (void)setOnTextBeginChangeCallback:(id)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)setOnTextEndEditingCallback:(id)arg1;
- (id)encryptWith3Des;
- (void)setClearButtonMode:(long long)arg1;
- (long long)getClearButtonMode;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)getEnabled;
- (void)setRestrictType:(long long)arg1;
- (long long)getRestrictType;
- (void)setMoneyRestrictionIntegerLimit:(int)arg1;
- (int)getMoneyRestrictionIntegerLimit;
- (void)setFixedHeaderText:(id)arg1;
- (id)getFixedHeaderText;
- (void)setIsSingleLine:(BOOL)arg1;
- (BOOL)getIsSingleLine;
- (void)enableConfirmBtn:(BOOL)arg1;
- (void)setOnEditorActionCallback:(id)arg1;
- (void)setShowFloatButton:(BOOL)arg1;
- (BOOL)getShowFloatButton;
- (void)setNeedForceDismissFloatButton;
- (void)setStayFocusWhenEnter:(BOOL)arg1;
- (BOOL)getStayFocusWhenEnter;
- (void)setOnFocusChangeCallback:(id)arg1;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)updateFixedHeaderLabel;
- (void)transfromNumber;
- (void)updateWCPayDecimalKeyBoard;
- (void)updateWCPayDecimalNoActionKeyBoard;
- (void)setCursorColor:(id)arg1;
- (id)getCursorColor;
- (void)setupToolBarView:(id)arg1;
- (id)getConfirmButtonColor;
- (void)setConfirmButtonColor:(id)arg1;
- (int)getMoneyShowBit;
- (void)setMoneyShowBit:(int)arg1;
- (BOOL)getShowInputDot;
- (void)setShowInputDot:(BOOL)arg1;
- (void)showMoneyBitView;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (id)fixedHeaderLabel;
- (void)setFixedHeaderLabel:(id)arg1;
- (double)m_textSize;
- (void)setM_textSize:(double)arg1;
- (id)m_textColor;
- (void)setM_textColor:(id)arg1;
- (long long)m_textAlign;
- (void)setM_textAlign:(long long)arg1;
- (id)m_hintColor;
- (void)setM_hintColor:(id)arg1;
- (long long)m_keyboardType;
- (void)setM_keyboardType:(long long)arg1;
- (id)m_tintColor;
- (void)setM_tintColor:(id)arg1;
- (id)m_fontName;
- (void)setM_fontName:(id)arg1;
- (id)m_textBeginChangeCallback;
- (void)setM_textBeginChangeCallback:(id)arg1;
- (id)m_textChangedCallback;
- (void)setM_textChangedCallback:(id)arg1;
- (id)m_textEndEditingCallBack;
- (void)setM_textEndEditingCallBack:(id)arg1;
- (id)m_textEditorActionCallback;
- (void)setM_textEditorActionCallback:(id)arg1;
- (id)m_confirmButtonText;
- (void)setM_confirmButtonText:(id)arg1;
- (int)m_maxLength;
- (void)setM_maxLength:(int)arg1;
- (int)moneyRestrictionIntegerLimit;
- (id)fixedHeaderText;
- (BOOL)m_bRealLen;
- (void)setM_bRealLen:(BOOL)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (long long)_restrictType;
- (void)set_restrictType:(long long)arg1;
- (double)m_hintTextSize;
- (void)setM_hintTextSize:(double)arg1;
- (BOOL)showFloatButton;
- (id)m_onFocusChangeCallback;
- (void)setM_onFocusChangeCallback:(id)arg1;
- (BOOL)m_stayFocusWhenClickEnter;
- (void)setM_stayFocusWhenClickEnter:(BOOL)arg1;
- (id)m_confirmBtnTitle;
- (void)setM_confirmBtnTitle:(id)arg1;
- (id)m_toolBarView;
- (void)setM_toolBarView:(id)arg1;
- (BOOL)m_focusValue;
- (void)setM_focusValue:(BOOL)arg1;
- (void).cxx_destruct;
@end
