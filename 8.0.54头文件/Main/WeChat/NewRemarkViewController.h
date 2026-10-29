@interface NewRemarkViewController : MMUIViewController <IOplogExt, IOpenImOplogExt, UITableViewDataSource, IContactTagViewControllerExt, ILinkEventExt, NewContactTagViewControllerDelegate, MsgImgPickerViewControllerDelegate, CardImageBrowseViewControllerDelegate, ContactRemarkImgExt, UITextViewDelegate, UITextFieldDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, CommonImageBrowserDelegate, MMTableViewInfoDelegate, UITableViewDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WCTableViewSectionManager * m_phoneSection; // +0x70
    WCTableViewSectionManager * m_descSection; // +0x78
    NSMutableArray * m_arrPhoneItem; // +0x80
    ContactRemarkLogic * m_logic; // +0x88
    CContact * m_contact; // +0x90
    MMTextView * m_descView; // +0x98
    UILabel * m_descHint; // +0xa0
    UIView * m_tagView; // +0xa8
    NSMutableDictionary * m_phoneEdit; // +0xb0
    long long m_firstResponderIndex; // +0xb8
    BOOL m_downloadingImg; // +0xc0
    BOOL m_isDownloadFail; // +0xc1
    BOOL m_hasEditImg; // +0xc2
    BOOL m_needEditState; // +0xc3
    NSString * m_recommandRemark; // +0xc8
    BOOL m_bNeedReloadSubviews; // +0xd0
    BOOL m_bIsRemarkEdit; // +0xd1
    NSMutableArray * m_tagItemList; // +0xd8
    NSArray * m_originalArrSelectedTagId; // +0xe0
    NSArray * m_handleOriginalArrSelectedTagId; // +0xe8
    unsigned int m_startTime; // +0xf0
    NSArray * m_originalArrTotalTag; // +0xf8
    MMUILabel * m_tagNameLabel; // +0x100
    MMTableView * m_tableView; // +0x108
    CustomDescTableViewCell * m_descTableViewCell; // +0x110
    long long m_currentSessionNumber; // +0x118
    RichTextView * m_richTextView; // +0x120
    MMUITextField * m_nameView; // +0x128
    ContactProfileRecommendInfo * m_profileRecommendInfo; // +0x130
    unsigned int _logpressDeleteDescPicCnt; // +0x138
    unsigned int _detailpageDeleteDescPicCnt; // +0x13c
    long long _contactInfoViewSource; // +0x140
    NSString * _remarkReportSessionId; // +0x148
    NSMutableArray * _cardImgList; // +0x150
    NSArray * _imageViewList; // +0x158
    long long _longPressedImageIndex; // +0x160
    unsigned long long _cardImgAddSource; // +0x168
    NSString * _descPicSourceReportString; // +0x170
    NSMutableSet * _editViewNewlyCreatedTags; // +0x178
    NSMutableSet * _editViewAddedTags; // +0x180
    NSMutableSet * _tableViewNewlyCreatedTags; // +0x188
    NSMutableSet * _tableViewAddedTags; // +0x190
}
- (id)init;
- (void)startDownCardImg;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initTableView;
- (id)getTableHeaderView;
- (void)reloadTableView;
- (id)getPhoneItemInfoAt:(unsigned long long)arg1;
- (long long)phoneIndexForRow:(long long)arg1;
- (id)getPhoneTextFieldAt:(long long)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)onAddPhone;
- (void)showPhoneTip;
- (void)makePhoneCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)makeImageView;
- (double)getImageViewSize;
- (void)makeImageCell:(id)arg1;
- (void)fixDescViewHeight;
- (double)getDescHeight;
- (void)makeDescView;
- (id)getDescView;
- (id)getTableView;
- (long long)getDescTextMaxLength;
- (void)makeDescriptionCell:(id)arg1;
- (void)reloadContactsViewTagListViewData;
- (void)makeTagsCell:(id)arg1;
- (void)makeRemarkCell:(id)arg1;
- (void)onRemarkShowKeyBoard;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)getRemarkText;
- (void)onModifyContact:(id)arg1;
- (BOOL)needRecommBtn;
- (id)makeRecommBtnView;
- (BOOL)needLocalRecommRemark;
- (id)makeLocalRecommRemarkView;
- (BOOL)needLocalRecommPhone;
- (id)makeLocalRecommPhoneView;
- (BOOL)needSlideTextDescriptionBtn;
- (id)makeSlideTextDescriptionBtnView;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)reflashImageCell;
- (void)onDismissRemarkView:(id)arg1;
- (void)reloadTagListData;
- (unsigned int)getSectionType:(long long)arg1;
- (void)setCellCornerPath:(id)arg1 cornerPath:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)getNumberSections;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onClickAddPhone;
- (void)onClickDeletePhone:(id)arg1;
- (void)useProfileRecommendRemark;
- (void)useProfileRecommendPhone;
- (void)textFieldTextDidChange:(id)arg1;
- (void)handleTextFieldText:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)hideKeyboard;
- (void)useRecommandRemark;
- (void)showTagEdit;
- (void)onTapCardImg:(id)arg1;
- (void)onTapAddImage;
- (void)onLongPressCardImg:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (CGRect)cardImgViewFrameAtIndex:(unsigned int)arg1;
- (void)deleteImageAtIndex:(long long)arg1;
- (void)deleteImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onMsgImgPickerViewControllerDidFinishSelectWithImageList:(id)arg1;
- (id)checkEditPhone;
- (BOOL)checkEdit;
- (void)onPerformEdit;
- (void)uploadCardImg;
- (void)onUploadCardImgFinish:(id)arg1 success:(BOOL)arg2;
- (void)onDownloadCardImg:(id)arg1 success:(BOOL)arg2;
- (void)executeOpLog;
- (void)doExecuteOpLog;
- (id)getAllTagNameList;
- (id)getContactTagNameList;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)adjustDescTextView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)scrollRectToVisibleForView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reportRemarkContactTagWithOpResult:(BOOL)arg1;
- (void)onTagVCDismissWithEditViewNewlyCreatedTags:(id)arg1 addedTags:(id)arg2 tableViewNewlyCreatedTags:(id)arg3 addedTags:(id)arg4;
- (id)navigationBarBackgroundColor;
- (void)onModifyContactTagList:(id)arg1 reResult:(BOOL)arg2;
- (BOOL)needEditState;
- (void)setNeedEditState:(BOOL)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)recommandRemark;
- (void)setRecommandRemark:(id)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (id)remarkReportSessionId;
- (void)setRemarkReportSessionId:(id)arg1;
- (id)cardImgList;
- (void)setCardImgList:(id)arg1;
- (id)imageViewList;
- (void)setImageViewList:(id)arg1;
- (long long)longPressedImageIndex;
- (void)setLongPressedImageIndex:(long long)arg1;
- (unsigned long long)cardImgAddSource;
- (void)setCardImgAddSource:(unsigned long long)arg1;
- (id)descPicSourceReportString;
- (void)setDescPicSourceReportString:(id)arg1;
- (unsigned int)logpressDeleteDescPicCnt;
- (void)setLogpressDeleteDescPicCnt:(unsigned int)arg1;
- (unsigned int)detailpageDeleteDescPicCnt;
- (void)setDetailpageDeleteDescPicCnt:(unsigned int)arg1;
- (id)editViewNewlyCreatedTags;
- (void)setEditViewNewlyCreatedTags:(id)arg1;
- (id)editViewAddedTags;
- (void)setEditViewAddedTags:(id)arg1;
- (id)tableViewNewlyCreatedTags;
- (void)setTableViewNewlyCreatedTags:(id)arg1;
- (id)tableViewAddedTags;
- (void)setTableViewAddedTags:(id)arg1;
- (void).cxx_destruct;
@end

