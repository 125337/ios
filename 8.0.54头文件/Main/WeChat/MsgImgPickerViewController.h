@interface MsgImgPickerViewController : MMUIViewController <MsgFastBrowseViewDelegate, MultiSelectContollerDelegate, MsgImgDataLogicDelegate, IMsgExt, MsgDataSaveLogicDelegate, MsgImgFullScreenViewControllerDelegate, MsgImgWeakBrowseViewControllerDelegate, ViewAppMsgControllerDelegate, WCActionSheetDelegate, MsgNewImgDataLogicDelegate, MsgImgPickerPreviewViewControllerDelegate, MsgImgPickerPreviewViewControllerDataSource>
{
    MsgFastBrowseView * m_msgFastBrowseView; // +0x68
    UIView * m_filterFooterView; // +0x70
    UIButton * m_previewButton; // +0x78
    UIButton * m_confirmButton; // +0x80
    MultiSelectController * m_multiSelectController; // +0x88
    MsgNewImgDataLogic * m_newDataLogic; // +0x90
    MsgDataSaveLogic * m_MsgDataSaveLogic; // +0x98
    BOOL m_bHasLoadData; // +0xa0
    NSMutableSet * m_arrMsgExpired; // +0xa8
    NSMutableDictionary * m_dicEditeImage; // +0xb0
    BOOL _previewOriginSelectedImageOnly; // +0xb8
    NSString * m_nsChatName; // +0xc0
    unsigned long long m_eFilterType; // +0xc8
    id <MsgImgPickerViewControllerDelegate> _delegate; // +0xd0
    long long _maxSelectCount; // +0xd8
    NSArray * _selectedImages; // +0xe0
    NSArray * _originSelectedImgs; // +0xe8
    id /* block */ _downloadCompletion; // +0xf0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (id)getViewController;
- (BOOL)useBlackStatusbar;
- (void)initData;
- (BOOL)onMsgImgDataMatch:(id)arg1;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (BOOL)messageWrapMatchImageWithoutVideo:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (id)getMsgFrom:(id)arg1;
- (void)initNavBar;
- (void)initView;
- (void)addFilterFooterView:(id)arg1;
- (id)getSelectArray;
- (id)genUserNameLocalWithMsg:(id)arg1;
- (void)initFilterFooterView;
- (void)viewDidTransitionToNewSize;
- (void)onCancel;
- (void)onPreviewSelectedImage:(id)arg1;
- (void)onConfirmSelection:(id)arg1;
- (void)downloadSelectedImageIfNeedWithCompletion:(id /* block */)arg1;
- (void)startDownload;
- (void)onMsgDataSaveLogicEnd:(BOOL)arg1 expiredMsgs:(id)arg2;
- (void)realPreviewSelectedImageWithPreviewSelectedOnly:(BOOL)arg1 startIndex:(long long)arg2;
- (void)realConfirmSelection;
- (void)updateSelectedImages;
- (void)msgImgPickerPreviewViewControllerDidChangeSelectionForImageAtIndex:(long long)arg1;
- (void)msgImgPickerPreviewViewControllerDidConfirmSelection;
- (CGRect)msgImgViewFrameGlobal:(id)arg1;
- (long long)totalImageCount;
- (long long)selectedImageCount;
- (id)imageAtIndex:(long long)arg1;
- (BOOL)hasSelectedImageAtIndex:(long long)arg1;
- (id)simpleMsgArrayForPreview;
- (id)msgInfoAtIndex:(long long)arg1;
- (long long)previewIndexForMsgInfo:(id)arg1;
- (id)selectedMsgInfosForPreview;
- (void)updateEditeMsgImg:(id)arg1 editeReusltImage:(id)arg2;
- (id)getEditeImageForMsgInfo:(id)arg1;
- (id)getCurrentViewController;
- (void)onMultiOprationComplete;
- (void)onForwardMessageOK;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (id)expiredMsgForMsgFastBrowseView:(id)arg1;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgUpdate:(id)arg1 withInfo:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (unsigned long long)m_eFilterType;
- (void)setM_eFilterType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)maxSelectCount;
- (void)setMaxSelectCount:(long long)arg1;
- (id)selectedImages;
- (void)setSelectedImages:(id)arg1;
- (BOOL)previewOriginSelectedImageOnly;
- (void)setPreviewOriginSelectedImageOnly:(BOOL)arg1;
- (id)originSelectedImgs;
- (void)setOriginSelectedImgs:(id)arg1;
- (id /* block */)downloadCompletion;
- (void)setDownloadCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

