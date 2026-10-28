@interface WCFinderTrumpetEditorViewController : MMUIViewController <MMImagePickerManagerDelegate>
{
    BOOL _hideTakePhotoAction; // +0x70
    FinderLiveAliasInfo * _aliasInfo; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _descLabel; // +0x88
    UIButton * _certainButton; // +0x90
    UITextField * _nickNameTextField; // +0x98
    MMWebImageView * _headerImageView; // +0xa0
    NSString * _headerImageURL; // +0xa8
    NSString * _localUploadedHeadImageURL; // +0xb0
    UIView * _lastLineView; // +0xb8
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)listenKeyBoard;
- (void)setAliasInfo:(id)arg1;
- (void)setUpUI;
- (id)createLineView;
- (void)clickHeader;
- (void)clickNickNameAction;
- (void)textFieldChange:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)clickDoneAction;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)showImagePicker:(long long)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleImage:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)registerYReportSdk;
- (id)aliasInfo;
- (BOOL)hideTakePhotoAction;
- (void)setHideTakePhotoAction:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)certainButton;
- (void)setCertainButton:(id)arg1;
- (id)nickNameTextField;
- (void)setNickNameTextField:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)headerImageURL;
- (void)setHeaderImageURL:(id)arg1;
- (id)localUploadedHeadImageURL;
- (void)setLocalUploadedHeadImageURL:(id)arg1;
- (id)lastLineView;
- (void)setLastLineView:(id)arg1;
- (void).cxx_destruct;
@end
