@interface CBTAuthRichTextCellView : CBTAuthBaseCellView <ILinkEventExt, UIGestureRecognizerDelegate>
{
    UIView * _descriptionContainerView; // +0x8
    NSMutableArray * _descriptionViews; // +0x10
    UIButton * _cancelButton; // +0x18
    UIButton * _confirmButton; // +0x20
    UIView * _feedbackLeftDivider; // +0x28
    UIView * _feedbackRightDivider; // +0x30
    UILabel * _feedbackLabel; // +0x38
    id <NSObject> _notificationToken; // +0x40
    UITapGestureRecognizer * _winTapGesture; // +0x48
    CBTAuthBaseViewModel * _widgetWinReportVM; // +0x50
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)setupWidgetPermissionWinReportingWithViewModel:(id)arg1;
- (void)setupExposureWithViewId:(id)arg1 onView:(id)arg2;
- (id)widgetPermissionWinReportParamsWithViewModel:(id)arg1;
- (void)reportWidgetWinViewClkWithViewId:(id)arg1;
- (void)setupWinWindowClickReportingIfNeededOnView:(id)arg1;
- (void)winWindowTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)richTextViewContainsLink:(id)arg1;
- (id)createContentView;
- (double)layoutContentView:(id)arg1 y:(double)arg2 width:(double)arg3;
- (double)layoutDescriptionWithViewModel:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4;
- (void)ensureDescriptionViewsWithCount:(unsigned long long)arg1;
- (void)hideButtons;
- (void)hideCompletedFeedbackArea;
- (double)layoutActiveActionAreaWithViewModel:(id)arg1 contentBottom:(double)arg2 width:(double)arg3;
- (double)layoutCompletedFeedbackAreaWithViewModel:(id)arg1 contentBottom:(double)arg2 width:(double)arg3;
- (void)refreshContentViewTheme;
- (id)contentCopyableText;
- (void)ensureButtons;
- (void)ensureFeedbackViews;
- (id)createButtonWithAction:(SEL)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)confirmButtonTapped:(id)arg1;
- (void)performConfirmAuthActionForButton:(id)arg1;
- (void)rightIconButtonTapped:(id)arg1;
- (void)routeActionForButton:(id)arg1 resultCode:(id)arg2;
- (void)launchAuthLiteApp:(id)arg1;
- (id)makeAuthStoreForButton:(id)arg1;
- (void)launchH5Target:(id)arg1;
- (void)collapseToTailWithActionKey:(id)arg1 resultCode:(id)arg2;
- (void)reportRemoteActionForActionKey:(id)arg1 viewModel:(id)arg2;
- (void)setupNotificationIfNeeded;
- (void)viewStateChangedNotification:(id)arg1;
- (id)actionKeyForResultCode:(id)arg1 button:(id)arg2;
- (void)updateButtonStyle:(id)arg1 confirm:(BOOL)arg2;
- (id)confirmTextColor;
- (id)confirmBackgroundColor;
- (id)cancelTextColor;
- (id)cancelBackgroundColor;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchCancelled:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)richTextTextColor;
- (id)feedbackTextColorForIgnored:(BOOL)arg1;
- (id)descriptionContainerView;
- (void)setDescriptionContainerView:(id)arg1;
- (id)descriptionViews;
- (void)setDescriptionViews:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)feedbackLeftDivider;
- (void)setFeedbackLeftDivider:(id)arg1;
- (id)feedbackRightDivider;
- (void)setFeedbackRightDivider:(id)arg1;
- (id)feedbackLabel;
- (void)setFeedbackLabel:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)winTapGesture;
- (void)setWinTapGesture:(id)arg1;
- (id)widgetWinReportVM;
- (void)setWidgetWinReportVM:(id)arg1;
- (void).cxx_destruct;
@end
