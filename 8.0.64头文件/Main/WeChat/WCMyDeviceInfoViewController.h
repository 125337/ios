@interface WCMyDeviceInfoViewController : MMUIViewController <WCMyDeviceInfoAssistDelegate, IWCDeviceBrandMgrExt, WCActionSheetDelegate, IStrangerContactMgrExt>
{
    WCMyDeviceInfoAssist * m_oDeviceInfoAssist; // +0x70
    id m_deviceData; // +0x78
    BOOL m_ignoreContact; // +0x80
    unsigned long long m_source; // +0x88
    WCDevice * _deviceInfo; // +0x90
}
- (id)init;
- (id)initBindInfoWithContact:(id)arg1 userData:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 userData:(id)arg2;
- (void)initMyDeviceInfoAssist;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)getViewController;
- (void)onBindDevice;
- (void)onShowDeviceSession;
- (void)onUnbindDevice;
- (void)onRemarkEdited:(id)arg1;
- (void)onEnterBrandSession;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)reloadView;
- (id)getDeviceStrangerContact;
- (void)jumpToContactInfoViewController:(id)arg1;
- (unsigned long long)m_source;
- (void)setM_source:(unsigned long long)arg1;
- (BOOL)m_ignoreContact;
- (void)setM_ignoreContact:(BOOL)arg1;
- (id)deviceInfo;
- (void)setDeviceInfo:(id)arg1;
- (void).cxx_destruct;
@end
