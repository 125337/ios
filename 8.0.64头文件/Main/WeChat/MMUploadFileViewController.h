@interface MMUploadFileViewController : MMUIViewController <MMResourceMgrExt, ILogReportExt, MMPackageDownloadMgrExt>
{
    NSArray * _uploadFileNames; // +0x70
    NSString * _attachDataName; // +0x78
    MMProgressView * m_progressView; // +0x80
    UILabel * m_labelProgress; // +0x88
    UIImageView * m_recoverView; // +0x90
    UILabel * m_noneFile; // +0x98
    UILabel * m_tips; // +0xa0
    UILabel * m_uploadFileName; // +0xa8
    UIButton * m_uploadBtn; // +0xb0
    UILabel * m_warningLabel; // +0xb8
    UITapGestureRecognizer * _tap; // +0xc0
    unsigned long long m_scene; // +0xc8
    MMDeleteFileModel * m_model; // +0xd0
    NSString * m_zipPath; // +0xd8
    BOOL _isUploading; // +0xe0
    MMLoadingView * _loadingView; // +0xe8
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
