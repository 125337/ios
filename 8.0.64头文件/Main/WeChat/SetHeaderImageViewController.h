@interface SetHeaderImageViewController : MMUIViewController <MMSightCameraViewControllerDelegate, IContactMgrExt, UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, MessageObserverDelegate>
{
    MMTableView * m_tableView; // +0x70
    MMHeadImageView * m_headView; // +0x78
    UILabel * m_userNameLabel; // +0x80
    UILabel * m_nickNameLabel; // +0x88
    UILabel * m_remarkLabel; // +0x90
    UILabel * m_dddedLabel; // +0x98
    UIButton * m_opBtn; // +0xa0
    UIButton * m_RemarkBtn; // +0xa8
    UIButton * m_BlockBtn; // +0xb0
    UIView * m_headerView; // +0xb8
    UIView * m_footerView; // +0xc0
    CContact * m_contact; // +0xc8
    BOOL m_bInContactsInit; // +0xd0
    BOOL m_bInContactsAfter; // +0xd1
    id <SetHeaderImageViewDelegate> m_delegate; // +0xd8
    unsigned int m_uEventId; // +0xe0
    unsigned int m_uiUploadHeadEventID; // +0xe4
}
- (void)tryGetContactUsrImg;
- (id)getSettingHeadImage;
- (void)updateHeadImage;
- (void)initMessageIdToListen;
- (void)initHeadImage;
- (void)updateNickNameLabel;
- (void)initNickNameLabel;
- (void)initUserNameLabel;
- (void)updateRemarkLabel;
- (void)initRemarkLabel;
- (void)updateRemarkBtn;
- (void)updateBlockBtn;
- (id)init;
- (void)initData;
- (void)initTableView;
- (void)initHeaderView;
- (void)initFooterView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateHead:(id)arg1;
- (void)handleImage:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (void)showChangeImg:(id)arg1;
- (void)onChangeImg:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onIKnowItBtnClick:(id)arg1;
- (id)getViewController;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)modifyContactRemark:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
