@interface FavAISearchFooterView : UIView
{
    BOOL _emptyState; // +0x8
    id <FavAISearchFooterViewDelegate> _viewDelegate; // +0x10
    UIView * _endLineContainer; // +0x18
    UIView * _endLineLeft; // +0x20
    UIView * _endLineRight; // +0x28
    UILabel * _endLineTextLabel; // +0x30
    UIButton * _feedbackLinkButton; // +0x38
    UILabel * _feedbackDescLabel; // +0x40
    double _lastAppliedHeight; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)onFeedbackTapped;
- (void)applyEmptyState:(BOOL)arg1;
- (double)minimumRequiredHeight;
- (void)layoutSubviews;
- (void)adjustHeightIfNeeded;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)endLineContainer;
- (void)setEndLineContainer:(id)arg1;
- (id)endLineLeft;
- (void)setEndLineLeft:(id)arg1;
- (id)endLineRight;
- (void)setEndLineRight:(id)arg1;
- (id)endLineTextLabel;
- (void)setEndLineTextLabel:(id)arg1;
- (id)feedbackLinkButton;
- (void)setFeedbackLinkButton:(id)arg1;
- (id)feedbackDescLabel;
- (void)setFeedbackDescLabel:(id)arg1;
- (double)lastAppliedHeight;
- (void)setLastAppliedHeight:(double)arg1;
- (BOOL)emptyState;
- (void).cxx_destruct;
@end
