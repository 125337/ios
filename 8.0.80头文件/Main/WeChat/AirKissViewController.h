@interface AirKissViewController : MMUIViewController <ILocationMgrExt, UITextFieldDelegate, INetworkStatusMgrExt, IWCDeviceAirKissMgrExt>
{
    UIImageView * m_imageView; // +0x70
    MMUILabel * m_ssidView; // +0x78
    MMTableViewInfo * m_tableView; // +0x80
    UITextField * m_ssidTextField; // +0x88
    UITextField * m_password; // +0x90
    UILabel * m_lengthErrLabel; // +0x98
    UIButton * m_connectButton; // +0xa0
    UIView * m_noWifiOrBLEView; // +0xa8
    BOOL m_hasStart; // +0xb0
    NSDate * m_startDate; // +0xb8
    BOOL m_isContinueToSearch; // +0xc0
    BOOL m_isStarted; // +0xc1
    BOOL m_isSsidExist; // +0xc2
    BOOL _isInAlert; // +0xc3
    int m_procint; // +0xc4
    int m_dataint; // +0xc8
    id <AirKissViewControllerDelegate> m_delegate; // +0xd0
    NSData * m_key; // +0xd8
    WCDevice * m_targetDeviceInfo; // +0xe0
    unsigned long long m_source; // +0xe8
    MMUIScrollView * m_scrollView; // +0xf0
    NSString * m_ssid; // +0xf8
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)getSSIDAndReloadView;
- (void)doAlertForNotAuthoriziedStateInIOS13AndReloadView;
- (void)doGetSSIDWifiInfoAndReloadView;
- (void)initView;
- (void)makeSsidCell:(id)arg1;
- (void)makePasswordCell:(id)arg1;
- (void)initNoWifiView;
- (void)infoBtnClicked;
- (id)dismissWithAnimate:(BOOL)arg1;
- (void)onCancel;
- (void)onSuccess;
- (void)onReturn:(BOOL)arg1;
- (void)onConnect;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onTextFieldLengthChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onTap;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onAirKissEnd:(BOOL)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_key;
- (void)setM_key:(id)arg1;
- (int)m_procint;
- (void)setM_procint:(int)arg1;
- (int)m_dataint;
- (void)setM_dataint:(int)arg1;
- (BOOL)m_isContinueToSearch;
- (void)setM_isContinueToSearch:(BOOL)arg1;
- (id)m_targetDeviceInfo;
- (void)setM_targetDeviceInfo:(id)arg1;
- (unsigned long long)m_source;
- (void)setM_source:(unsigned long long)arg1;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (BOOL)m_isStarted;
- (void)setM_isStarted:(BOOL)arg1;
- (BOOL)m_isSsidExist;
- (void)setM_isSsidExist:(BOOL)arg1;
- (id)m_ssid;
- (void)setM_ssid:(id)arg1;
- (BOOL)isInAlert;
- (void)setIsInAlert:(BOOL)arg1;
- (void).cxx_destruct;
@end
