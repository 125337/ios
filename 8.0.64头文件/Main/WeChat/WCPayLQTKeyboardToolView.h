@interface WCPayLQTKeyboardToolView : UIView
{
    id <WCPayLQTKeyboardToolViewDelegate> _delegate; // +0x8
    NSArray * _hints; // +0x10
    HintOfKeyboard * _currentHint; // +0x18
    UILabel * _profitLabel; // +0x20
    NSArray * _amountLabels; // +0x28
    NSArray * _separators; // +0x30
}
- (void)setHints:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)updateHintWithBankType:(id)arg1;
- (void)refreshView;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)highlightColor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)hints;
- (id)currentHint;
- (void)setCurrentHint:(id)arg1;
- (id)profitLabel;
- (void)setProfitLabel:(id)arg1;
- (id)amountLabels;
- (void)setAmountLabels:(id)arg1;
- (id)separators;
- (void)setSeparators:(id)arg1;
- (void).cxx_destruct;
@end
