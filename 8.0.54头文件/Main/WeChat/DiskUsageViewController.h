@interface DiskUsageViewController : MMUIViewController <MFMailComposeViewControllerDelegate, WCActionSheetDelegate>
{
    BOOL _bPro; // +0x68
    BOOL _isChecking; // +0x69
    NSString * _rootPath; // +0x70
    UIButton * _btnAnalyze; // +0x78
    UIButton * _btnMail; // +0x80
    UIButton * _btnDelete; // +0x88
    MMUIActivityIndicatorView * _m_actView; // +0x90
    MMFolder * _gFolder; // +0x98
}
- (id)getDataPath;
- (void)initView;
- (void)OnFinish;
- (void)viewDidLoad;
- (void)OnShowDetail;
- (void)OnReAnalyze;
- (void)OnDiskUsage;
- (void)onForwarResult;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)wechatToFriend;
- (id)mimeOfFile:(id)arg1;
- (void)writeMailWithAttachFile:(id)arg1 filePath:(id)arg2 zipName:(id)arg3 zipPath:(id)arg4;
- (void)onMail;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (BOOL)bPro;
- (void)setBPro:(BOOL)arg1;
- (id)rootPath;
- (void)setRootPath:(id)arg1;
- (id)btnAnalyze;
- (void)setBtnAnalyze:(id)arg1;
- (id)btnMail;
- (void)setBtnMail:(id)arg1;
- (id)btnDelete;
- (void)setBtnDelete:(id)arg1;
- (id)m_actView;
- (void)setM_actView:(id)arg1;
- (BOOL)isChecking;
- (void)setIsChecking:(BOOL)arg1;
- (id)gFolder;
- (void)setGFolder:(id)arg1;
- (void).cxx_destruct;
@end

