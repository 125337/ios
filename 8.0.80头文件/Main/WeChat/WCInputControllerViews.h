@interface WCInputControllerViews : NSObject
{
    WCInputController * _inputController; // +0x8
    UIView * _inputView; // +0x10
    UIButton * _expressionButton; // +0x18
    MMGrowTextView * _growTextView; // +0x20
    MMUILabel * _remainWordCountLabel; // +0x28
    UIView * _backgroundView; // +0x30
    EmoticonBoardView * _emoticonBoardView; // +0x38
}
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)remainWordCountLabel;
- (void)setRemainWordCountLabel:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (void).cxx_destruct;
@end
