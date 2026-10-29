@interface SettingHeadImgViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate>
{
    MMHDHeadImageView * m_hdHeadImageView; // +0x68
    SettingMyAccountExtInfoLogic * m_infoLogic; // +0x70
    BOOL _operateDirectly; // +0x78
}
- (id)initWithContact:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldRestrictContentViewSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onImgSave;
- (void)Operate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onInfoChange;
- (void)onImgBeginChange:(id)arg1;
- (void)onImgChangeEnd:(BOOL)arg1 withError:(id)arg2;
- (BOOL)operateDirectly;
- (void)setOperateDirectly:(BOOL)arg1;
- (void).cxx_destruct;
@end

