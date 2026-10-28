@interface MMLiveRewardGiftNewCustomizationInputToolView : UIView <UITextFieldDelegate>
{
    BOOL _isInputInValid; // +0x8
    id /* block */ _shouldBeginEditingCallback; // +0x10
    id /* block */ _inputTextChangedCallback; // +0x18
    long long _currentState; // +0x20
    NSString * _currentValidText; // +0x28
    MMFinderLiveNewCustomGiftText * _giftCustomText; // +0x30
    UIView * _pubbleInputView; // +0x38
    UITextField * _textField; // +0x40
    MMUIButton * _clearBtn; // +0x48
    MMUIButton * _doneBtn; // +0x50
    UIImageView * _beanIconView; // +0x58
    MMUILabel * _beanCntLabel; // +0x60
    MMUILabel * _tipLabel; // +0x68
    NSString * _initialText; // +0x70
    NSRegularExpression * _nonAlphanumericRegex; // +0x78
    NSMutableArray * _inputToolStateListenerList; // +0x80
    MMUILabel * _beanIncreaseLabel; // +0x88
}
+ (double)preferHeight;
- (id)initWithGiftCustomText:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDoneBtn;
- (void)updateDoneButtonHidden;
- (void)updateDoneButtonEnable;
- (BOOL)isDoneButtonEnable;
- (void)layoutPubbleInputView;
- (void)updatePubbleInputViewFrame;
- (void)layoutTextField;
- (void)updateTextFieldFrame;
- (void)layoutClearBtn;
- (void)updateClearBtnOrigin;
- (void)updateClearBtnHidden;
- (void)layoutBeanWidgets;
- (void)layoutBeanIncreaseLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanCntLabel;
- (void)updateBeanWidgetsOrigin;
- (void)updateBeanWidgetsHidden;
- (void)layoutTipLabel;
- (void)updateTipLabelHidden;
- (void)updateTipLableTextColor;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChangeContent:(id)arg1;
- (BOOL)checkHasMarkedTextRange:(id)arg1;
- (void)onTextFieldTextChanged;
- (void)clearText;
- (void)onDoneButtonClick;
- (void)endEditing;
- (void)beginEditing;
- (void)setInputText:(id)arg1;
- (void)addInputToolStateListener:(id /* block */)arg1;
- (void)removeInputToolStateListener:(id /* block */)arg1;
- (void)updateTextFieldText:(id)arg1;
- (void)updateCurrentState:(long long)arg1;
- (void)synchronizeAllListenersWithPreState:(long long)arg1 currState:(long long)arg2;
- (void)checkTextFieldTextOverLengthLimit;
- (unsigned int)textFieldWordLimit;
- (void)checkTextFieldTextValid;
- (BOOL)isTextValid:(id)arg1;
- (void)updateValidText;
- (id)getValidTextFromInitText:(id)arg1;
- (BOOL)isCharacterValid:(id)arg1;
- (id)nonAlphanumericRegex;
- (BOOL)hasInputText;
- (BOOL)isEditing;
- (id)inputToolStateListenerList;
- (id)currentText;
- (id /* block */)shouldBeginEditingCallback;
- (void)setShouldBeginEditingCallback:(id /* block */)arg1;
- (id /* block */)inputTextChangedCallback;
- (void)setInputTextChangedCallback:(id /* block */)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (id)currentValidText;
- (void)setCurrentValidText:(id)arg1;
- (id)giftCustomText;
- (void)setGiftCustomText:(id)arg1;
- (id)pubbleInputView;
- (void)setPubbleInputView:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)clearBtn;
- (void)setClearBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)beanIconView;
- (void)setBeanIconView:(id)arg1;
- (id)beanCntLabel;
- (void)setBeanCntLabel:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)initialText;
- (void)setInitialText:(id)arg1;
- (BOOL)isInputInValid;
- (void)setIsInputInValid:(BOOL)arg1;
- (void)setNonAlphanumericRegex:(id)arg1;
- (void)setInputToolStateListenerList:(id)arg1;
- (id)beanIncreaseLabel;
- (void)setBeanIncreaseLabel:(id)arg1;
- (void).cxx_destruct;
@end
