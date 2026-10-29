@interface WAAuthPageSheetFooterView : WAAuthPageSheetBaseView
{
    BOOL _shouldShowCompletedTail; // +0x8
    BOOL _completedTailIsIgnored; // +0x9
    BOOL _buttonsCreated; // +0xa
    UIButton * _acceptButton; // +0x10
    UIButton * _rejectButton; // +0x18
    NSString * _completedTailText; // +0x20
    UIView * _tailLeftDivider; // +0x28
    UILabel * _tailLabel; // +0x30
    UIView * _tailRightDivider; // +0x38
    UIImageView * _acceptLoadingImageView; // +0x40
    NSString * _savedAcceptTitle; // +0x48
}
+ (double)buttonEdgeTopWithDataModel:(id)arg1;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setViewDataModel:(id)arg1;
- (void)createStandardButtons;
- (void)createAgentButtons;
- (void)addHighlightEffectToAgentButton:(id)arg1;
- (void)agentButtonTouchDown:(id)arg1;
- (void)agentButtonTouchUp:(id)arg1;
- (void)showCompletedTail:(id)arg1 isIgnored:(BOOL)arg2;
- (void)applyCompletedTailIfReady;
- (void)layoutSubviews;
- (void)layoutCompletedTailViews;
- (void)setAcceptLoading:(BOOL)arg1;
- (void)updateAgentLoadingImage;
- (void)startAgentLoadingRotation;
- (void)stopAgentLoadingRotation;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (BOOL)shouldShowCompletedTail;
- (void)setShouldShowCompletedTail:(BOOL)arg1;
- (id)completedTailText;
- (void)setCompletedTailText:(id)arg1;
- (BOOL)completedTailIsIgnored;
- (void)setCompletedTailIsIgnored:(BOOL)arg1;
- (id)tailLeftDivider;
- (void)setTailLeftDivider:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (id)tailRightDivider;
- (void)setTailRightDivider:(id)arg1;
- (BOOL)buttonsCreated;
- (void)setButtonsCreated:(BOOL)arg1;
- (id)acceptLoadingImageView;
- (void)setAcceptLoadingImageView:(id)arg1;
- (id)savedAcceptTitle;
- (void)setSavedAcceptTitle:(id)arg1;
- (void).cxx_destruct;
@end
