@interface WCFinderFeedbackReasonView : UIView
{
    BOOL _showSelectedButtonStyle; // +0x8
    BOOL _singleSelectionMode; // +0x9
    BOOL _showFeedbackButtonOnlyAfterSelection; // +0xa
    NSString * _dislikeTitle; // +0x10
    NSString * _dislikeDesc; // +0x18
    NSString * _feedbackButtonTitle; // +0x20
    id <WCFinderFeedbackReasonViewDelegate> _delegate; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _tipsLabel; // +0x38
    NSMutableArray * _optionButtonArray; // +0x40
    UIButton * _feedbackButton; // +0x48
    double _maxWidth; // +0x50
}
- (id)initWithMaxWidth:(double)arg1;
- (void)updateWithOptionList:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)initSubviews;
- (id)genOptionButtonWithTitle:(id)arg1;
- (void)addFlexLayout;
- (void)addButtonsInLine:(void *)arg1 buttons:(id)arg2;
- (void)onClickOptionButton:(id)arg1;
- (void)updateFeedbackButonStyle:(BOOL)arg1;
- (void)onClickFeedbackButton:(id)arg1;
- (void)setDislikeDesc:(id)arg1;
- (void)setDislikeTitle:(id)arg1;
- (void)setShowSelectedButtonStyle:(BOOL)arg1;
- (void)setShowFeedbackButtonOnlyAfterSelection:(BOOL)arg1;
- (id)titleLabel;
- (id)tipsLabel;
- (id)feedbackButton;
- (id)optionButtonArray;
- (id)dislikeTitle;
- (id)dislikeDesc;
- (id)feedbackButtonTitle;
- (void)setFeedbackButtonTitle:(id)arg1;
- (BOOL)showSelectedButtonStyle;
- (BOOL)singleSelectionMode;
- (void)setSingleSelectionMode:(BOOL)arg1;
- (BOOL)showFeedbackButtonOnlyAfterSelection;
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
