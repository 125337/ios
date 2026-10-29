@interface MMAuthorizeAddAvatarViewController : MMUIViewController <PBMessageObserverDelegate, MMImagePickerManagerDelegate, UITextFieldDelegate, AddAvatarUploadImageTaskDelegate>
{
    BOOL _isEdit; // +0x68
    BOOL _isBlockingToSave; // +0x69
    BOOL _addSuccess; // +0x6a
    unsigned int _fromScene; // +0x6c
    unsigned int _sessionId; // +0x70
    OauthAvatarInfo * _editedAvatarInfo; // +0x78
    NSString * _navTitle; // +0x80
    NSString * _appId; // +0x88
    NSString * _defaultAvatarUrl; // +0x90
    NSString * _defaultAvatarFileId; // +0x98
    id <MMAuthorizeAddAvatarViewControllerDelegate> _delegate; // +0xa0
    MMTableViewInfo * _tableViewInfo; // +0xa8
    WCTableViewNormalCellManager * _nickNameCellInfo; // +0xb0
    UIView * _headTitleView; // +0xb8
    UILabel * _headTitleLabel; // +0xc0
    WCUITextField * _nickNameTextField; // +0xc8
    UIBarButtonItem * _saveBtn; // +0xd0
    UIImage * _pickerImage; // +0xd8
    NSString * _randomAvatarUrl; // +0xe0
    NSString * _randomAvatarFileId; // +0xe8
    NSString * _imageCdnUrl; // +0xf0
    NSString * _imageCdnFileId; // +0xf8
    MMTipsViewController * _tipsVC; // +0x100
    AddAvatarUploadImageTask * _uploadTask; // +0x108
    unsigned long long _stepStartTime; // +0x110
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)initTitleView;
- (void)onCancelButtonClicked;
- (void)initTableView;
- (void)makeTableViewInfo;
- (void)makeHeaderCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNickNameCell:(id)arg1 cellInfo:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardHide:(id)arg1;
- (void)textFieldEditChange:(id)arg1;
- (void)onClickHeaderCell;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)showImagePicker:(long long)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)startUploadImage:(id)arg1;
- (void)onUploadImageCompleted:(id)arg1 task:(id)arg2;
- (void)onUploadImageFail:(unsigned int)arg1 errMsg:(id)arg2 task:(id)arg3;
- (void)onGetRandomAvatarBtnClicked;
- (void)onDoneBtnClick;
- (void)sendReq;
- (void)sendModAvatarReq;
- (void)sendAddAvatarReq;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetRandomAvatarResp:(id)arg1;
- (void)handleAddAvatarResp:(id)arg1;
- (void)handleModAvatarResp:(id)arg1;
- (void)onSaveAvatarFailAndStopLoading:(id)arg1;
- (void)showErrMsg:(id)arg1 title:(id)arg2;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (id)editedAvatarInfo;
- (void)setEditedAvatarInfo:(id)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)defaultAvatarUrl;
- (void)setDefaultAvatarUrl:(id)arg1;
- (id)defaultAvatarFileId;
- (void)setDefaultAvatarFileId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)nickNameCellInfo;
- (void)setNickNameCellInfo:(id)arg1;
- (id)headTitleView;
- (void)setHeadTitleView:(id)arg1;
- (id)headTitleLabel;
- (void)setHeadTitleLabel:(id)arg1;
- (id)nickNameTextField;
- (void)setNickNameTextField:(id)arg1;
- (id)saveBtn;
- (void)setSaveBtn:(id)arg1;
- (id)pickerImage;
- (void)setPickerImage:(id)arg1;
- (id)randomAvatarUrl;
- (void)setRandomAvatarUrl:(id)arg1;
- (id)randomAvatarFileId;
- (void)setRandomAvatarFileId:(id)arg1;
- (id)imageCdnUrl;
- (void)setImageCdnUrl:(id)arg1;
- (id)imageCdnFileId;
- (void)setImageCdnFileId:(id)arg1;
- (BOOL)isBlockingToSave;
- (void)setIsBlockingToSave:(BOOL)arg1;
- (id)tipsVC;
- (void)setTipsVC:(id)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (unsigned long long)stepStartTime;
- (void)setStepStartTime:(unsigned long long)arg1;
- (BOOL)addSuccess;
- (void)setAddSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

