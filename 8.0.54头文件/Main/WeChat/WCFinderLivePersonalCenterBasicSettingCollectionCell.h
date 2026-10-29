@interface WCFinderLivePersonalCenterBasicSettingCollectionCell : UICollectionViewCell
{
    id <WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate> _actionDelegate; // +0x8
    FinderLivePersonalCenterPrepareInfo * _userInfo; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
}
+ (double)cellHeight;
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setup;
- (void)setUserInfo:(id)arg1;
- (void)reloadTableView;
- (id)getCommentSceneStr;
- (void)reportCellExpose;
- (void)onPrivateMsgClicked;
- (void)onPrivacyClicked;
- (void)onRewardLevelClicked;
- (void)onSettingsClicked;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)userInfo;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end

