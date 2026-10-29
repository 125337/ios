@interface WCCommonInputPanelLogic : NSObject <WCCommonInputViewDelegate>
{
    UIView<WCInputViewProtocol> * _inputView; // +0x8
    WCInputController * _inputController; // +0x10
    EmoticonBoardView * _emoticonBoardView; // +0x18
    MMUIViewController * _viewController; // +0x20
    MMGrowTextView * _textView; // +0x28
}
- (id)initWithViewController:(id)arg1 textView:(id)arg2 inputView:(id)arg3;
- (id)inputController;
- (id)emoticonBoardView;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (void)setInputController:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

