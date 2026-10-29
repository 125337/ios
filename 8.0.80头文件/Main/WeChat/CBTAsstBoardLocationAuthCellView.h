@interface CBTAsstBoardLocationAuthCellView : CBTAsstBoardBaseCellView
{
    UILabel * _contentLabel; // +0x8
    UIButton * _actionButton; // +0x10
    id <NSObject> _notificationToken; // +0x18
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)parseData;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)layoutContainerView;
- (void)layoutContentLabel;
- (void)layoutActionButton;
- (void)updateButtonStyle;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchCancelled:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (void)buttonTapped:(id)arg1;
- (void)viewStateChangedNotification:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (void).cxx_destruct;
@end
