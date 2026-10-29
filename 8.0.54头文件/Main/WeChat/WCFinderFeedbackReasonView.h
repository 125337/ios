@interface WCFinderFeedbackReasonView : UIView
{
    id <WCFinderFeedbackReasonViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _tipsLabel; // +0x18
    NSMutableArray * _optionButtonArray; // +0x20
    UIButton * _feedbackButton; // +0x28
    double _maxWidth; // +0x30
}
- (id)initWithMaxWidth:(double)arg1;
- (void)updateWithOptionList:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)initSubviews;
- (id)genOptionButtonWithTitle:(id)arg1;
- (void)addFlexLayout;
- (void)addButtonsInLine:(void *)arg1 buttons:(id)arg2;
- (void)onClickOptionButton:(id)arg1;
- (void)onClickFeedbackButton:(id)arg1;
- (id)titleLabel;
- (id)tipsLabel;
- (id)feedbackButton;
- (id)optionButtonArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setOptionButtonArray:(id)arg1;
- (void)setFeedbackButton:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

