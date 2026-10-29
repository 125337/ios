@interface WCAccountPhoneVerifyUpViewController : WCAccountBaseViewController <MFMessageComposeViewControllerDelegate>
{
    id <WCAccountPhoneVerifyUpViewControllerDelegate> m_delegate; // +0x78
    MMUILabel * _titleLabel; // +0x80
    MMUILabel * _subtitleLabel; // +0x88
    WCRedesignInfoItem * _editSmsInfoItem; // +0x90
    WCRedesignInfoItem * _sendToInfoItem; // +0x98
    UIButton * _sendSmsButton; // +0xa0
    UIButton * _sentAndNextButton; // +0xa8
    NSDictionary * _storedTitleTextAttributes; // +0xb0
    long long _storedBarStyle; // +0xb8
}
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)saveNavigationSetting;
- (void)recoverNavigationSetting;
- (void)onSend;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)editSmsInfoItem;
- (void)setEditSmsInfoItem:(id)arg1;
- (id)sendToInfoItem;
- (void)setSendToInfoItem:(id)arg1;
- (id)sendSmsButton;
- (void)setSendSmsButton:(id)arg1;
- (id)sentAndNextButton;
- (void)setSentAndNextButton:(id)arg1;
- (id)storedTitleTextAttributes;
- (void)setStoredTitleTextAttributes:(id)arg1;
- (long long)storedBarStyle;
- (void)setStoredBarStyle:(long long)arg1;
- (void).cxx_destruct;
@end

