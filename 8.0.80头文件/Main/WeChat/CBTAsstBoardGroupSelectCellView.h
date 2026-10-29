@interface CBTAsstBoardGroupSelectCellView : CBTAsstBoardBaseCellView
{
    BOOL _isClicked; // +0x8
    UILabel * _titleLabel; // +0x10
    NSMutableArray * _rowViews; // +0x18
    NSArray * _groupIdList; // +0x20
    NSArray * _subTitleList; // +0x28
    long long _clickedGroupIdIndex; // +0x30
    id <NSObject> _notificationToken; // +0x38
    CBTAsstBoardBaseViewModel * _lastReportVM; // +0x40
}
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutSubviews;
- (void)parseData;
- (void)layoutTitleLabel;
- (void)layoutContainerView;
- (void)refreshTheme;
- (BOOL)needsBubbleBackground;
- (void)layoutRowViews;
- (void)relayoutRowViews;
- (void)onGroupTapped:(id)arg1;
- (CGRect)getBubbleFrame;
- (id)getCellReuseId;
- (void)onContainerLongPress:(id)arg1;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)viewStateChangedNotification:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (id)groupIdList;
- (void)setGroupIdList:(id)arg1;
- (id)subTitleList;
- (void)setSubTitleList:(id)arg1;
- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg1;
- (long long)clickedGroupIdIndex;
- (void)setClickedGroupIdIndex:(long long)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)lastReportVM;
- (void)setLastReportVM:(id)arg1;
- (void).cxx_destruct;
@end
