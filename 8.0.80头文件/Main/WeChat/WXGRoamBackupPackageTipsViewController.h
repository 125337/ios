@interface WXGRoamBackupPackageTipsViewController : MMUIViewController <IOnlineClientMgrExt, IRoamOutBoxServiceExt, IRoamBackupPackageServiceExt>
{
    UILabel * _titleLabel; // +0x70
    UIImageView * _mainIcon; // +0x78
    UIButton * _bottomButton; // +0x80
    UIScrollView * _sheetView; // +0x88
    NSURL * _dirURL; // +0x90
    NSString * _deviceId; // +0x98
    unsigned long long _enterScene; // +0xa0
}
- (id)initWithEnterScene:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (void)initViewWithLeftNavStyle:(unsigned long long)arg1 IconName:(id)arg2 iconColor:(id)arg3 title:(id)arg4 subTitle:(id)arg5 buttonType:(unsigned long long)arg6 buttonTitle:(id)arg7 buttonSEL:(SEL)arg8;
- (void)setupDotTipsView;
- (void)setupSubViewWith:(id)arg1;
- (void)setupComputerRegisterTipsViewWithName:(id)arg1;
- (void)onCancel;
- (void)onScan;
- (void)onShowOutBoxSelect;
- (void)onShowOutBoxCheckPermission;
- (void)onOutBoxSelectSuccess;
- (void)onStartRegisterComputer;
- (void)onLoginWeb;
- (void)onOnlineInfoUpdated;
- (void)onRoamBackupPackageServiceBindTicketComplete:(BOOL)arg1;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)arg1 dirURL:(id)arg2 deviceId:(id)arg3;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)mainIcon;
- (void)setMainIcon:(id)arg1;
- (id)bottomButton;
- (void)setBottomButton:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)dirURL;
- (void)setDirURL:(id)arg1;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
