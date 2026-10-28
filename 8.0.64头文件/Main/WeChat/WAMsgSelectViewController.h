@interface WAMsgSelectViewController : MMUIViewController <MsgImgFullScreenWindowDelegate, MsgImgFullScreenViewControllerDelegate, MsgFastBrowseViewDelegate, MsgImgDataLogicDelegate, MsgNewImgDataLogicDelegate, ViewAppMsgControllerDelegate, WAAlertDialogDelegate, MsgDataDownloadDelegate>
{
    id <WAMsgSelectViewControllerDelegate> m_delegate; // +0x70
    MsgFastBrowseView * m_msgFastBrowseView; // +0x78
    MsgImgFullScreenWindow * m_imgFullScreenWnd; // +0x80
    MsgNewImgDataLogic * m_newDataLogic; // +0x88
    BOOL m_bHasLoadData; // +0x90
    ViewAppMsgController * m_viewAppMsgController; // +0x98
    NSMutableSet * m_arrMsgExpired; // +0xa0
    NSMutableDictionary * m_dicMsgSelectInfo; // +0xa8
    WAAlertDialog * m_alertDlg; // +0xb0
    BOOL m_bSelectEnableFilter; // +0xb8
    BOOL m_bHighlightCurrentImage; // +0xb9
    unsigned long long m_nSelectLimitCount; // +0xc0
    CMessageWrap * m_curMsgWrap; // +0xc8
    NSString * m_nsChatName; // +0xd0
    double m_scrollOffset; // +0xd8
    unsigned long long m_eFilterType; // +0xe0
    UIView * m_filterFooterView; // +0xe8
    UIButton * m_okButton; // +0xf0
    UIButton * m_filterButton; // +0xf8
    UILabel * m_filterLabel; // +0x100
    UIButton * m_originImageCheck; // +0x108
}
- (id)initWithMsgWrap:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)initNavBar;
- (void)initView;
- (void)updateFilterFooterView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (id)getViewController;
- (void)onClickOk;
- (void)onClickDownloadingAlertCancel;
- (void)onClickDownloadingAlertOk;
- (void)onClickOriginImage;
- (void)onClickFilter;
- (void)changeFilterTypeTo:(unsigned long long)arg1;
- (void)onClickFilterAll;
- (void)onClickFilterImage;
- (void)onClickFilterVideo;
- (void)onClickFilterFile;
- (void)stopAllDownloading;
- (void)onClickCancel;
- (void)onClickReturn;
- (void)onTimeShowProgress:(id)arg1;
- (BOOL)tryStartDownloadMsg:(id)arg1 hd:(BOOL)arg2;
- (void)onCancel;
- (void)onConfirm;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (BOOL)shouldHideForwardToFinderBtn:(id)arg1;
- (BOOL)onMsgImgDataMatch:(id)arg1;
- (BOOL)messageWrapMatchImage:(id)arg1;
- (BOOL)messageWrapMatchFile:(id)arg1;
- (BOOL)messageWrapMatchVideo:(id)arg1;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (id)getMsgFrom:(id)arg1;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (id)expiredMsgForMsgFastBrowseView:(id)arg1;
- (void)updateSquareImg:(id)arg1 downloadInfo:(id)arg2;
- (unsigned long long)calcSelectedCount;
- (void)onSquareImgCreated:(id)arg1 withInfo:(id)arg2;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (BOOL)m_bSelectEnableFilter;
- (void)setM_bSelectEnableFilter:(BOOL)arg1;
- (unsigned long long)m_nSelectLimitCount;
- (void)setM_nSelectLimitCount:(unsigned long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_curMsgWrap;
- (void)setM_curMsgWrap:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (double)m_scrollOffset;
- (void)setM_scrollOffset:(double)arg1;
- (BOOL)m_bHighlightCurrentImage;
- (void)setM_bHighlightCurrentImage:(BOOL)arg1;
- (unsigned long long)m_eFilterType;
- (void)setM_eFilterType:(unsigned long long)arg1;
- (id)m_filterFooterView;
- (void)setM_filterFooterView:(id)arg1;
- (id)m_okButton;
- (void)setM_okButton:(id)arg1;
- (id)m_filterButton;
- (void)setM_filterButton:(id)arg1;
- (id)m_filterLabel;
- (void)setM_filterLabel:(id)arg1;
- (id)m_originImageCheck;
- (void)setM_originImageCheck:(id)arg1;
- (void).cxx_destruct;
@end
