@interface ChatBackgroundEntranceViewController : NewSettingBaseViewController <WCActionSheetDelegate, UITableViewDelegate, MMImagePickerManagerDelegate, MMChatBackgroundSettingViewControllerDelegate>
{
    NSString * m_username; // +0x80
}
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)popToMessageSessionView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFinishedSelectImage:(id)arg1 fromSource:(long long)arg2;
- (void)showImagePickerWithAlbum;
- (void)showImagePickerWithTakePhoto;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)goDefaultChatBackgroundPickViewController;
- (void)applyBackgroundImgToAllScene;
- (void)registerYReportSdk;
- (id)m_username;
- (void)setM_username:(id)arg1;
- (void).cxx_destruct;
@end
