@interface WCForwardViewController : WCNewCommitViewController <WCFinderShareLiveViewDelegate, MMLiveMorphDismissTarget, WCContentItemBaseViewDelegate>
{
    WCDataItem * _forwardDataItem; // +0x150
    UIView * _mediaViewBkgView; // +0x158
    BOOL _enableEmptyText; // +0x160
    BOOL _uploadFinished; // +0x161
    long long _iPostSource; // +0x168
    NSString * _preSourceId; // +0x170
    NSObject * _userData; // +0x178
    NSString * _extensionKey; // +0x180
    id <WCCommitViewResultDelegate> _resultDelegate; // +0x188
    NSData * _hdImageAlbumData; // +0x190
    OpenApiImageCdnUploader * _uploader; // +0x198
    WCContentItemBaseView * _mediaCellView; // +0x1a0
    WCMomentsPageContext * _pageContext; // +0x1a8
}
- (void)commonInit;
- (id)initWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 uniqueExtensionKey:(id)arg2;
- (id)initWithDataItem:(id)arg1 sessionID:(id)arg2;
- (void)viewDidLoad;
- (void)initTextViewContent;
- (id)pageContext;
- (void)addMediaView;
- (void)_addMediaViewAsNormal;
- (void)reloadShareButtons;
- (void)reloadData;
- (void)reloadType;
- (void)reloadHeadViewSubviewsY;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadMediaViewBkgView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)OnReturn;
- (void)OnDone;
- (void)sendToTimeLine:(id)arg1;
- (void)tryUploadMVImageData:(id)arg1;
- (void)showLoadingView;
- (void)setupEnhanceDraftSaveController;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)didFinishCommiting;
- (void)didCancelCommiting;
- (void)prepareDataForMiaoJianAppIfNeeded;
- (void)onForwardDataItemUploaded:(id)arg1;
- (void)bind3rdShareReporterIfNeeed:(id)arg1;
- (id)postReportSession;
- (long long)postReportSessionEntrance;
- (void)postReportSessionWillStart;
- (void)postReportSessionWillFinishWithUploadTask:(id)arg1;
- (void)postReportSessionWillFinish;
- (long long)mediaCountForMediaList:(id)arg1;
- (id)getCurrentViewControllerForContentItemView:(id)arg1;
- (id)getFinderLiveDismissTarget;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)liveShareViewViewWithTid:(id)arg1;
- (void)printSpringInfoWithDataItem:(id)arg1;
- (long long)iPostSource;
- (void)setIPostSource:(long long)arg1;
- (id)preSourceId;
- (void)setPreSourceId:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)extensionKey;
- (void)setExtensionKey:(id)arg1;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)hdImageAlbumData;
- (void)setHdImageAlbumData:(id)arg1;
- (BOOL)enableEmptyText;
- (void)setEnableEmptyText:(BOOL)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (BOOL)uploadFinished;
- (void)setUploadFinished:(BOOL)arg1;
- (id)mediaCellView;
- (void)setMediaCellView:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void).cxx_destruct;
@end

