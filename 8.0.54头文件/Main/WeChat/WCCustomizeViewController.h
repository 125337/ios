@interface WCCustomizeViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCFinderFeedPickerViewControllerDelegate, MMImageLoaderObserver, WCFinderFeedPickerPreviewViewControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    BOOL m_isUploading; // +0x68
    WCTableViewManager * m_tableViewMgr; // +0x70
    BOOL _canShowProfessionalCraft; // +0x78
    NSMutableArray * _m_rowsData; // +0x80
    MMTableView * _m_tableView; // +0x88
    NSString * _m_username; // +0x90
    WCFinderDataItem * _finderFeed; // +0x98
    WCCoverPostReporter * _coverPostReporter; // +0xa0
}
- (id)init;
- (void)reloadRowData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)popToMessageSessionView;
- (void)onFinishedSelectImage:(id)arg1;
- (id)getViewController;
- (id)getNavigationController;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onClickSelectFromAlbum;
- (void)onClickTakePhoto;
- (void)onClickProfessionalCraft;
- (void)showImagePicker:(long long)arg1;
- (void)onClickSelectFromFinder;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)arg1;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickDoneWithDataItem:(id)arg2;
- (void)onFinishedSelectFinderFeed:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)coverPostReporter;
- (long long)coverContentSourceFromFinderTabType:(int)arg1;
- (id)m_rowsData;
- (void)setM_rowsData:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_username;
- (void)setM_username:(id)arg1;
- (id)finderFeed;
- (void)setFinderFeed:(id)arg1;
- (void)setCoverPostReporter:(id)arg1;
- (BOOL)canShowProfessionalCraft;
- (void)setCanShowProfessionalCraft:(BOOL)arg1;
- (void).cxx_destruct;
@end

