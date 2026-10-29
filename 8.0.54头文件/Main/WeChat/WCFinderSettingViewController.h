@interface WCFinderSettingViewController : MMUIViewController <WCFinderContactExt, WCFinderNameEditorViewControllerDelegate, WCFinderUserPrepareCgiDelegate, MMRegionPickerViewControllerDelegate, MMImageCropperDelegate>
{
    FinderNewUserPrepareResponse * _userPrepareResponse; // +0x68
    WCTableViewManager * _tableViewManager; // +0x70
    WCFinderHeadImageView * _imageView; // +0x78
    WCFinderGetWechatHDHeadFetcher * _wechatHDHeadFetcher; // +0x80
    WCFinderContact * _contact; // +0x88
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setContact:(id)arg1;
- (void)configureTableView;
- (void)reloadTableView;
- (void)makeEditHeadImageCell:(id)arg1 cellInfo:(id)arg2;
- (void)requestData;
- (id)makeSectionSeparator;
- (void)clickEditHeadImageCell;
- (void)clickNameCell;
- (void)longPressFinderIdCell;
- (void)clickOldVersionEditLocationCell;
- (void)clickEditBirthCell;
- (void)clickEditSexCell;
- (void)clickSignature;
- (void)clickCoverSetting;
- (void)continueCleanCover;
- (void)continueModCover:(id)arg1 userCancel:(BOOL)arg2 error:(id)arg3;
- (void)onModCoverSuccess;
- (BOOL)enableEditPersonalInfo;
- (void)pickLocation:(id)arg1;
- (void)NSStringSelectViewControllerOnModifySex:(id)arg1;
- (void)onCamera;
- (void)onPhotoLibrary;
- (id)createImagePickerObj:(long long)arg1 isAvatar:(BOOL)arg2;
- (void)onSelectAvatarFromWechat;
- (void)loadImageToEditor:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)handleImage:(id)arg1;
- (id)generateCGImageFromImage:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (id)userPrepareResponse;
- (void)setUserPrepareResponse:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)wechatHDHeadFetcher;
- (void)setWechatHDHeadFetcher:(id)arg1;
- (id)contact;
- (void).cxx_destruct;
@end

