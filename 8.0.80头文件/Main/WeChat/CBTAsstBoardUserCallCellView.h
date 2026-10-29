@interface CBTAsstBoardUserCallCellView : CBTAsstBoardBaseCellView
{
    NSMutableArray * _rowViews; // +0x8
    NSArray * _usernameList; // +0x10
    long long _clickedUsernameIndex; // +0x18
    id <NSObject> _notificationToken; // +0x20
    UILabel * _titleLabel; // +0x28
    CBTAsstBoardBaseViewModel * _lastReportVM; // +0x30
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)parseData;
- (void)layoutContainerView;
- (void)layoutTitleLabel;
- (void)refreshTheme;
- (void)layoutRowViews;
- (void)relayoutRowViews;
- (void)onCallButtonTapped:(id)arg1;
- (void)triggerMakeCallWithChatId:(id)arg1 callType:(long long)arg2;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)viewStateChangedNotification:(id)arg1;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (long long)clickedUsernameIndex;
- (void)setClickedUsernameIndex:(long long)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lastReportVM;
- (void)setLastReportVM:(id)arg1;
- (void).cxx_destruct;
@end
