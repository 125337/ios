@interface MMFinderLiveVisivilityShareSettingView : MMPageSheetBaseView <SessionSelectControllerDelegate, WCFinderLiveRosterSelectDelegate, ILinkEventExt>
{
    BOOL _isShown; // +0x8
    BOOL _forceDarkMode; // +0x9
    unsigned int _openContactSelectViewScene; // +0xc
    MMFinderLiveShareSettingInitParams * _settingInitParam; // +0x10
    MMFinderLiveVisivilitySettingInfo * _settingInfo; // +0x18
    UIViewController * _rootVC; // +0x20
    MMFinderLiveNewShareSettingSessionSelectController * _shareSettingSessionSelectVC; // +0x28
    id <MMFinderLiveVisivilityShareSettingDelegate> _settingDelegate; // +0x30
    id /* block */ _dismissCompletion; // +0x38
    long long _closeAction; // +0x40
    UIView * _contentView; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUIButton * _closeButton; // +0x58
    UIButton * _confirmButton; // +0x60
    MMTableViewInfo * _tableViewInfo; // +0x68
}
+ (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(BOOL)arg2;
+ (id)lowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2 fileLists:(id)arg3;
+ (id)reportLowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2 fileLists:(id)arg3;
+ (id)lowerCellDigestWithAudienceLists:(id)arg1 selectedLists:(id)arg2;
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(BOOL)arg3 rootVC:(id)arg4;
- (void)initSettingInfo:(id)arg1;
- (void)initPageSheetConfig;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (void)layoutSettingTableView;
- (void)layoutConfirmButton;
- (void)reloadTableData;
- (double)contentViewHeight;
- (double)getNavHeaderHeight;
- (double)getContentHeight;
- (double)getSettingTableHeight;
- (void)updateConfirmButtonEnabled;
- (id)navTitle;
- (void)pageSheetDidAppear;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)onConfirm;
- (void)onCloseAction;
- (void)updateSettingInfo:(id)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 action:(long long)arg2 completion:(id /* block */)arg3;
- (void)customParamWithSelectContactsFromRecentSessions:(unsigned int)arg1 selectedContacts:(id)arg2 viewController:(id)arg3;
- (void)selectContactsFromRecentSessions:(unsigned int)arg1 selectedContacts:(id)arg2;
- (void)dismissShareSettingSessionSelectVCAnimated:(BOOL)arg1;
- (void)showRosterSelectViewController:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)onSessionSelectController:(id)arg1 prepareMultiSelectContactsViewController:(id)arg2;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (void)onWCFinderLiveRosterSelectCancel;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)settingInitParam;
- (void)setSettingInitParam:(id)arg1;
- (id)settingInfo;
- (void)setSettingInfo:(id)arg1;
- (BOOL)isShown;
- (void)setIsShown:(BOOL)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (id)rootVC;
- (void)setRootVC:(id)arg1;
- (unsigned int)openContactSelectViewScene;
- (void)setOpenContactSelectViewScene:(unsigned int)arg1;
- (id)shareSettingSessionSelectVC;
- (void)setShareSettingSessionSelectVC:(id)arg1;
- (id)settingDelegate;
- (void)setSettingDelegate:(id)arg1;
- (id /* block */)dismissCompletion;
- (void)setDismissCompletion:(id /* block */)arg1;
- (long long)closeAction;
- (void)setCloseAction:(long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end
