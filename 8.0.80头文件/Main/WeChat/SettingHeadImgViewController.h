@interface SettingHeadImgViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate>
{
    MMHDHeadImageView * m_hdHeadImageView; // +0x70
    SettingMyAccountExtInfoLogic * m_infoLogic; // +0x78
    BOOL _operateDirectly; // +0x80
    BOOL _showOnlyPhotoLibrary; // +0x81
    BOOL _showCameraAndPhotoLibraryOnly; // +0x82
    NSString * _botUserName; // +0x88
}
- (id)initWithContact:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldRestrictContentViewSize;
- (BOOL)shouldInteractiveDismiss;
- (void)viewDidLoad;
- (void)setupForPresentation;
- (void)onBack:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onImgSave;
- (void)Operate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onInfoChange;
- (void)onImgBeginChange:(id)arg1;
- (void)onImgChangeEnd:(BOOL)arg1 withError:(id)arg2;
- (void)registerYReportSdk;
- (BOOL)operateDirectly;
- (void)setOperateDirectly:(BOOL)arg1;
- (BOOL)showOnlyPhotoLibrary;
- (void)setShowOnlyPhotoLibrary:(BOOL)arg1;
- (BOOL)showCameraAndPhotoLibraryOnly;
- (void)setShowCameraAndPhotoLibraryOnly:(BOOL)arg1;
- (id)botUserName;
- (void)setBotUserName:(id)arg1;
- (void).cxx_destruct;
@end
