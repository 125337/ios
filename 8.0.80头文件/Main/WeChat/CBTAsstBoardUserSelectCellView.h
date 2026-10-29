@interface CBTAsstBoardUserSelectCellView : CBTAsstBoardBaseCellView
{
    BOOL _isClicked; // +0x8
    NSMutableArray * _rowViews; // +0x10
    NSArray * _usernameList; // +0x18
    long long _clickedUsernameIndex; // +0x20
    double _lastLayoutContentWidth; // +0x28
    id <NSObject> _notificationToken; // +0x30
    UILabel * _titleLabel; // +0x38
    UIView * _moreFooterView; // +0x40
    UILabel * _moreFooterLabel; // +0x48
    UIImageView * _moreFooterArrow; // +0x50
    CBTAsstBoardBaseViewModel * _lastReportVM; // +0x58
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateCellHeightIfNeeded;
- (void)parseData;
- (void)layoutContainerView;
- (void)layoutTitleLabel;
- (void)layoutMoreFooterView;
- (void)onMoreFooterTapped;
- (void)refreshTheme;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)layoutRowViews;
- (void)relayoutRowViews;
- (void)onUserTapped:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)onContainerLongPress:(id)arg1;
- (void)viewStateChangedNotification:(id)arg1;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg1;
- (long long)clickedUsernameIndex;
- (void)setClickedUsernameIndex:(long long)arg1;
- (double)lastLayoutContentWidth;
- (void)setLastLayoutContentWidth:(double)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)moreFooterView;
- (void)setMoreFooterView:(id)arg1;
- (id)moreFooterLabel;
- (void)setMoreFooterLabel:(id)arg1;
- (id)moreFooterArrow;
- (void)setMoreFooterArrow:(id)arg1;
- (id)lastReportVM;
- (void)setLastReportVM:(id)arg1;
- (void).cxx_destruct;
@end
