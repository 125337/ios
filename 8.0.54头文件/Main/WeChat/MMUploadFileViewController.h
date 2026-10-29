@interface MMUploadFileViewController : MMUIViewController <MMResourceMgrExt, ILogReportExt, MMPackageDownloadMgrExt>
{
    NSArray * _uploadFileNames; // +0x68
    NSString * _attachDataName; // +0x70
    MMProgressView * m_progressView; // +0x78
    UILabel * m_labelProgress; // +0x80
    UIImageView * m_recoverView; // +0x88
    UILabel * m_noneFile; // +0x90
    UILabel * m_tips; // +0x98
    UILabel * m_uploadFileName; // +0xa0
    UIButton * m_uploadBtn; // +0xa8
    UILabel * m_warningLabel; // +0xb0
    UITapGestureRecognizer * _tap; // +0xb8
    unsigned long long m_scene; // +0xc0
    MMDeleteFileModel * m_model; // +0xc8
    NSString * m_zipPath; // +0xd0
    BOOL _isUploading; // +0xd8
    MMLoadingView * _loadingView; // +0xe0
}
- (id)initWithScene:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)layoutSubViews;
- (void)initView;
- (void)adjustTableViewRect;
- (id)loadingView;
- (void)onBtnClick:(id)arg1;
- (void)sendMail:(id)arg1 andRtxName:(id)arg2;
- (void)clearFile;
- (void)hiddenUpView;
- (void)setProgress:(id)arg1;
- (void)setUploadFail;
- (void)setUploadSuc;
- (void)onFinish;
- (void)OnResponse:(id)arg1;
- (void)UploadFail;
- (void)UploadSuccess;
- (void)removeZipFile;
- (void)didTap;
- (void)onPackageListUpdated:(id)arg1;
- (void)downloadPackage:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)setLoadingView:(id)arg1;
- (BOOL)isUploading;
- (void)setIsUploading:(BOOL)arg1;
- (void).cxx_destruct;
@end

