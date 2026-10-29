@interface MMFinderLiveLotteryMsgEditPanel : MMFinderLiveLinkPromoteEditPanel <MMGrowTextViewDelegate>
{
    NSString * _msgTitleText; // +0x8
    NSString * _msgPlaceholderText; // +0x10
    id /* block */ _completion; // +0x18
    double _keyboardHeight; // +0x20
    MMGrowTextView * _growTextView; // +0x28
    UIView * _inputContentBackView; // +0x30
    UILabel * _wordCountTips; // +0x38
}
- (void)layoutOtherUI;
- (id)titleText;
- (id)placeholderText;
- (id)validUriPrefixes;
- (void)updateConfig;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)fixTopicText:(BOOL)arg1;
- (void)layoutWordCountTips;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (double)contentHeight;
- (id)getCurrentLeftButton;
- (void)onLeftButtonAction;
- (void)onRightButtonAction;
- (id)msgTitleText;
- (void)setMsgTitleText:(id)arg1;
- (id)msgPlaceholderText;
- (void)setMsgPlaceholderText:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)inputContentBackView;
- (void)setInputContentBackView:(id)arg1;
- (id)wordCountTips;
- (void)setWordCountTips:(id)arg1;
- (void).cxx_destruct;
@end

