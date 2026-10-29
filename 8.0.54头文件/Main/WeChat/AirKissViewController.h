@interface AirKissViewController : MMUIViewController <ILocationMgrExt, UITextFieldDelegate, INetworkStatusMgrExt, IWCDeviceAirKissMgrExt>
{
    UIImageView * m_imageView; // +0x68
    MMUILabel * m_ssidView; // +0x70
    MMTableViewInfo * m_tableView; // +0x78
    UITextField * m_ssidTextField; // +0x80
    UITextField * m_password; // +0x88
    UILabel * m_lengthErrLabel; // +0x90
    UIButton * m_connectButton; // +0x98
    UIView * m_noWifiOrBLEView; // +0xa0
    BOOL m_hasStart; // +0xa8
    NSDate * m_startDate; // +0xb0
    BOOL m_isContinueToSearch; // +0xb8
    BOOL m_isStarted; // +0xb9
    BOOL m_isSsidExist; // +0xba
    BOOL _isInAlert; // +0xbb
    int m_procint; // +0xbc
    int m_dataint; // +0xc0
    id <AirKissViewControllerDelegate> m_delegate; // +0xc8
    NSData * m_key; // +0xd0
    WCDevice * m_targetDeviceInfo; // +0xd8
    unsigned long long m_source; // +0xe0
    MMUIScrollView * m_scrollView; // +0xe8
    NSString * m_ssid; // +0xf0
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

