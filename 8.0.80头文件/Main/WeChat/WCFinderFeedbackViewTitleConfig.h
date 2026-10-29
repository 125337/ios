@interface WCFinderFeedbackViewTitleConfig : NSObject
{
    BOOL _showSelectedButtonStyle; // +0x8
    BOOL _singleSelectionMode; // +0x9
    BOOL _showFeedbackButtonOnlyAfterSelection; // +0xa
    NSString * _likeBtnTitle; // +0x10
    NSString * _dislikeBtnTitle; // +0x18
    NSString * _dislikeTitle; // +0x20
    NSString * _dislikeDesc; // +0x28
    NSString * _simpleTitle; // +0x30
    NSString * _simpleDesc; // +0x38
    NSString * _complainTitle; // +0x40
    NSString * _feedbackButtonTitle; // +0x48
}
- (id)likeBtnTitle;
- (void)setLikeBtnTitle:(id)arg1;
- (id)dislikeBtnTitle;
- (void)setDislikeBtnTitle:(id)arg1;
- (id)dislikeTitle;
- (void)setDislikeTitle:(id)arg1;
- (id)dislikeDesc;
- (void)setDislikeDesc:(id)arg1;
- (id)simpleTitle;
- (void)setSimpleTitle:(id)arg1;
- (id)simpleDesc;
- (void)setSimpleDesc:(id)arg1;
- (id)complainTitle;
- (void)setComplainTitle:(id)arg1;
- (id)feedbackButtonTitle;
- (void)setFeedbackButtonTitle:(id)arg1;
- (BOOL)showSelectedButtonStyle;
- (void)setShowSelectedButtonStyle:(BOOL)arg1;
- (BOOL)singleSelectionMode;
- (void)setSingleSelectionMode:(BOOL)arg1;
- (BOOL)showFeedbackButtonOnlyAfterSelection;
- (void)setShowFeedbackButtonOnlyAfterSelection:(BOOL)arg1;
- (void).cxx_destruct;
@end
