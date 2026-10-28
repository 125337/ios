@interface WCFinderLivePersonalCenterBasicSettingCollectionCell : UICollectionViewCell
{
    BOOL _reportedExposeLiveMention; // +0x8
    id <WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate> _actionDelegate; // +0x10
    FinderLivePersonalCenterPrepareInfo * _userInfo; // +0x18
    WCTableViewManager * _tableViewManager; // +0x20
}
+ (double)cellHeightWithInfo:(id)arg1;
+ (id)cellID;
+ (BOOL)showRecentWatch:(id)arg1;
+ (BOOL)showReservedRecord:(id)arg1;
+ (BOOL)showMention;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setup;
- (void)setUserInfo:(id)arg1;
- (void)reloadTableView;
- (id)setUpMentionCellWithRedDot;
- (id)getRightViewByRightRedDot:(id)arg1;
- (id)getCommentSceneStr;
- (void)reportCellExpose;
- (void)reportMentionCellWithActionType:(unsigned long long)arg1;
- (void)onPrivateMsgClicked;
- (void)onPrivacyClicked;
- (void)onRewardLevelClicked;
- (void)onSettingsClicked;
- (void)onRecentWatchClicked;
- (void)onReservedRecordClicked;
- (void)onMentionClicked;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)userInfo;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (BOOL)reportedExposeLiveMention;
- (void)setReportedExposeLiveMention:(BOOL)arg1;
- (void).cxx_destruct;
@end
