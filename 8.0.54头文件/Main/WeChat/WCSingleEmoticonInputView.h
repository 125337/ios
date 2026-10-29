@interface WCSingleEmoticonInputView : UIView <WCInputViewProtocol>
{
    id <WCCommonInputViewDelegate> _delegate; // +0x8
    UIButton * _expressionButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)expressionButton;
- (id)svgIconName:(id)arg1 isHighlight:(BOOL)arg2;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)setInputMode:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setExpressionButton:(id)arg1;
- (void).cxx_destruct;
@end

