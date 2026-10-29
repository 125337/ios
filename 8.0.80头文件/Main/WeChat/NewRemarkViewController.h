@interface NewRemarkViewController : MMUIViewController <ContactRemarkExtendLogicDelegate, ContactProfileRecommendSelectViewDelegate, AddRecommendCardImageViewDelegate, NewContactTagViewPageSheetControllerDelegate, IOplogExt, IOpenImOplogExt, IContactTagViewControllerExt, ILinkEventExt, MsgImgPickerViewControllerDelegate, CardImageBrowseViewControllerDelegate, ContactProfileRecommendSelectViewDelegate, AddRecommendCardImageViewDelegate, MMGrowTextViewWithExtrasDelegate, IContactLabelMgrExt, NewContactTagViewControllerDelegate, ContactTagEditLogicDelegate, ContactRemarkImgExt, UITextViewDelegate, UITextFieldDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, CommonImageBrowserDelegate, MMTableViewInfoDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    WCTableViewSectionManager * m_phoneSection; // +0x78
    WCTableViewSectionManager * m_descSection; // +0x80
    NSMutableArray * m_arrPhoneItem; // +0x88
    MMGrowTextViewWithExtras * m_nameView; // +0x90
    ContactRemarkLogic * m_logic; // +0x98
    CContact * m_contact; // +0xa0
    MMGrowTextViewWithExtras * m_descView; // +0xa8
    UILabel * m_descHint; // +0xb0
    UIView * m_tagView; // +0xb8
    NSMutableDictionary * m_phoneEdit; // +0xc0
    long long m_firstResponderIndex; // +0xc8
    BOOL m_downloadingImg; // +0xd0
    BOOL m_isDownloadFail; // +0xd1
    BOOL m_hasEditImg; // +0xd2
    BOOL m_needEditState; // +0xd3
    NSString * m_recommandRemark; // +0xd8
    ContactProfileRecommendInfo * m_profileRecommendInfo; // +0xe0
    AddRecommendCardImageView * m_addRecommendCardImageView; // +0xe8
    BOOL m_isOpenFromSystemMsg; // +0xf0
    NSString * m_nsOriginalRemark; // +0xf8
    BOOL m_isHadSelectRecommendImage; // +0x100
    BOOL m_isWaitDownlaodRecommendImage; // +0x101
    NSString * m_recommendReeditRemark; // +0x108
    NSString * m_recommendReeditPhone; // +0x110
    NSString * m_recommendReeditCardImage; // +0x118
    BOOL m_textCanNotOutOfBounds; // +0x120
    BOOL m_bNeedReloadSubviews; // +0x121
    BOOL m_bIsRemarkEdit; // +0x122
    NSMutableArray * m_tagItemList; // +0x128
    NSArray * m_originalArrSelectedTagId; // +0x130
    NSArray * m_handleOriginalArrSelectedTagId; // +0x138
    unsigned int m_startTime; // +0x140
    NSArray * m_originalArrTotalTag; // +0x148
    MMUILabel * m_tagNameLabel; // +0x150
    MMTableView * m_tableView; // +0x158
    UITableViewCell * m_descTableViewCell; // +0x160
    UITableViewCell * m_remarkTableViewCell; // +0x168
    long long m_currentSessionNumber; // +0x170
    RichTextView * m_richTextView; // +0x178
    BOOL m_scrollFirstShowSectionNeedScroll; // +0x180
    NSMutableDictionary * m_dicInitPhoneItem; // +0x188
    NSArray * m_initCardImgList; // +0x190
    NSString * m_initNSDescription; // +0x198
    NSMutableArray * m_arrAddPhone; // +0x1a0
    NSMutableArray * m_arrDeletePhone; // +0x1a8
    ContactRemarkExtendLogic * m_contactRemarkExtendLogic; // +0x1b0
    BOOL _contactRemarkVoiceInputEnabled; // +0x1b8
    BOOL _isHadModifyTag; // +0x1b9
    BOOL _isHadTriggerFirstResponder; // +0x1ba
    BOOL _isHadClickEditeRemarkInput; // +0x1bb
    BOOL _hadSetRemarkValueOpenFromMsg; // +0x1bc
    BOOL _hadSetPhoneValueOpenFromMsg; // +0x1bd
    BOOL _hadSetCardImageValueOpenFromMsg; // +0x1be
    BOOL _hadShowToastTipOpenFromMsg; // +0x1bf
    BOOL _containSetRemarkValueOpenFromMsg; // +0x1c0
    BOOL _containSetPhoneValueOpenFromMsg; // +0x1c1
    BOOL _containSetCardImageValueOpenFromMsg; // +0x1c2
    BOOL _hadReportImage; // +0x1c3
    unsigned int _firstShowSection; // +0x1c4
    unsigned int _logpressDeleteDescPicCnt; // +0x1c8
    unsigned int _detailpageDeleteDescPicCnt; // +0x1cc
    unsigned int _showSelectedShowSection; // +0x1d0
    NSString * _m_chatRoomUsrname; // +0x1d8
    long long _contactInfoViewSource; // +0x1e0
    NSString * _reportSessionId; // +0x1e8
    NSString * _remarkReportSessionId; // +0x1f0
    NSMutableArray * _cardImgList; // +0x1f8
    NSArray * _imageViewList; // +0x200
    long long _longPressedImageIndex; // +0x208
    unsigned long long _cardImgAddSource; // +0x210
    NSString * _descPicSourceReportString; // +0x218
    NSMutableSet * _editViewNewlyCreatedTags; // +0x220
    NSMutableSet * _editViewAddedTags; // +0x228
    NSMutableSet * _tableViewNewlyCreatedTags; // +0x230
    NSMutableSet * _tableViewAddedTags; // +0x238
    UITableViewCell * _phoneCell; // +0x240
    ContactProfileRecommendSelectView * _m_oRecommTagView; // +0x248
    NSMutableArray * _arrSelectRecommTagName; // +0x250
    ContactTagEditLogic * _tagEditLogic; // +0x258
    NSMutableArray * _arrRecommendTagName; // +0x260
    ContactProfileRecommendInfo * _reportProfileRecommendInfo; // +0x268
    NSMutableSet * _reportSetSelectedRecommTagId; // +0x270
    NSMutableSet * _reportNicknameInputMethodSet; // +0x278
    NSMutableSet * _reportMemoInputMethodSet; // +0x280
    NewContactTagViewPageSheetController * _tagViewPageSheetController; // +0x288
    MMUIView * _backgroundView; // +0x290
    NSMutableArray * _arrExtraRecommRemark; // +0x298
    ContactProfileRecommendSelectView * _recommRemarkView; // +0x2a0
    ContactProfileRecommendSelectView * _recommPhoneView; // +0x2a8
}
- (id)getContactRemarkExtendLogic;
- (void)saveExecuteOpLogInStrangerContact;
- (void)onSetContactPropertyRemark:(id)arg1 newRemark:(id)arg2 isSuccess:(BOOL)arg3 failMessage:(id)arg4;
- (id)reportInputMethodSetForTextViewWithExtras:(id)arg1;
- (void)recordContactRemarkInputMethod:(unsigned int)arg1 forTextViewWithExtras:(id)arg2;
- (id)reportStringForContactRemarkInputMethodSet:(id)arg1;
- (void)recordContactRemarkKeyboardInputForTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)recordContactRemarkDictationInputForTextViewWithExtras:(id)arg1;
- (void)recordContactRemarkQuickFillInputForTextViewWithExtras:(id)arg1;
- (void)reportClickContactRemarkVoiceInputForTextViewWithExtras:(id)arg1;
- (void)setupReportData;
- (void)reportProfileRecommendInFinisDone;
- (void)reportClickContactAddTag;
- (void)reportExposureProfileRecommendSelectViewItem:(id)arg1 commonDicReportParams:(id)arg2 recommendSelectType:(unsigned int)arg3;
- (void)reportClickProfileRecommendSelectViewItem:(id)arg1 commonDicReportParams:(id)arg2 recommendSelectType:(unsigned int)arg3 recommendIndex:(unsigned int)arg4;
- (void)reportExposureTagViewPageSheet;
- (unsigned int)getReportContactEnterScene;
- (id)getReportDictionary;
- (unsigned int)getReportSetSelectedRecommTagIdCount;
- (id)getDicPageInfoReprot;
- (void)initReportContactRelationInfo;
- (void)recordDeletePhone:(id)arg1;
- (void)reportContactRelationUpateCardImg:(BOOL)arg1 returnCode:(int)arg2;
- (void)reportContactRelationUpdateContactTagAction:(BOOL)arg1 actionType:(unsigned int)arg2 extraInfo:(id)arg3 isSuccess:(BOOL)arg4 returnCode:(int)arg5;
- (void)reportContactRelationUpateContctTag:(BOOL)arg1 isAddTag:(BOOL)arg2 isSuccess:(BOOL)arg3 returnCode:(int)arg4;
- (void)reportContactRelationUpateRemarkPhoneDesc:(BOOL)arg1 returnCode:(int)arg2;
- (void)reportContactRelationUpateContactRemark:(BOOL)arg1 returnCode:(int)arg2;
- (void)reportContactRelationUpateContactPhone:(BOOL)arg1 returnCode:(int)arg2;
- (void)reportContactRelationUpateContactDesc:(BOOL)arg1 returnCode:(int)arg2;
- (void)reportContactRelationUpdateDoActionWithRequestContent:(unsigned int)arg1;
- (void)reportContactRelationUpdateResultActionWithRequestContent:(unsigned int)arg1 returnCode:(int)arg2;
- (unsigned int)getExtraRecommRemarkCandidateSourceType:(id)arg1;
- (BOOL)needLocalRecommRemark;
- (id)makeLocalRecommRemarkView;
- (BOOL)needLocalRecommPhone;
- (id)makeLocalRecommPhoneView;
- (BOOL)needLocalRecommImage;
- (id)makeLocalAddRecommendCardImageView:(double)arg1;
- (BOOL)needTolerateRemarkInputOptimizate;
- (void)initExtraRecommRemark;
- (void)setRemarkValueInRecommendSystemMsg;
- (void)setPhoneValueInRecommendSystemMsg;
- (void)setCardImageValueInRecommendSystemMsg:(id)arg1;
- (void)showToastForSetValueFromRecommendSystemMsg;
- (void)onSelectedProfileRecommendText:(id)arg1 recommendSelectType:(unsigned int)arg2;
- (void)reportExposureContactProfileRecommendSelectView:(id)arg1 arrRecommendText:(id)arg2 recommendSelectType:(unsigned int)arg3;
- (void)reportClieckContactProfileRecommendSelectView:(id)arg1 recommendText:(id)arg2 recommendSelectType:(unsigned int)arg3;
- (void)setIsOpenFromSystemMsg:(BOOL)arg1;
- (void)useProfileRecommendRemark:(id)arg1;
- (void)useProfileRecommendPhone:(id)arg1;
- (void)updateRecommendCardImageViewImage:(id)arg1 imageMsgLocalId:(unsigned int)arg2;
- (double)getRecommendCardImageCellHeight;
- (id)getAllPhoneNumberString;
- (id)getAllCardImageAddressString;
- (void)openTagEditHalfScreenView;
- (id)makeLocalRecommTagView;
- (void)handleClickSelectedProfileTagRecommendText:(id)arg1;
- (void)saveArrSelectRecommTagForStrangerContact;
- (void)submitArrSelectRecommTag;
- (id)getArrSelectTagName;
- (id)getArrSelectTagID;
- (Class)getContactProfileRecommendSelectViewClass;
- (void)asyncGetRecommendTag;
- (BOOL)checkIsGetRecommendTag;
- (void)onJobForTagEditRet:(int)arg1;
- (void)onClickAddRecommendCardImageViewInTapGesture;
- (void)onClickSelectRecommendCardImageViewnTapGesture;
- (void)onNewContactTagViewPageSheetWillDisappear;
- (void)onClickNewContactTagViewPageSheetDone;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)initBackgroundView;
- (void)triggerFirstResponder:(BOOL)arg1;
- (void)triggerFirstResponderCore:(BOOL)arg1;
- (void)resetSectionBackgroundViewCompletion:(BOOL)arg1;
- (void)resetSectionBackgroundViewAtIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)getSectionWithSectionType:(long long)arg1;
- (void)recordSetRemarkSectionBackgroundType:(unsigned int)arg1;
- (BOOL)checkSectionTypeHadSetRemarkSectionBackground:(unsigned int)arg1;
- (id)init;
- (void)startDownCardImg;
- (void)initData;
- (void)initProfileRecommendInfo;
- (void)initCardImgList;
- (void)viewDidLoad;
- (void)stopContactRemarkDictation;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)shouldInteractivePop;
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
- (double)getDescImageCellSize;
- (void)makeImageCell:(id)arg1;
- (id)getDescView;
- (id)getTableView;
- (long long)getDescTextMaxLength;
- (void)reloadContactsViewTagListViewData;
- (void)makeTagsCell:(id)arg1;
- (void)configureContactRemarkVoiceInputWithConfig:(id)arg1;
- (void)makeRemarkCell:(id)arg1;
- (void)makeDescriptionCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)getRemarkText;
- (void)onModifyContact:(id)arg1;
- (BOOL)needRecommBtn;
- (id)makeRecommBtnView;
- (BOOL)needSlideTextDescriptionBtn;
- (id)makeSlideTextDescriptionBtnView;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)reflashImageCell;
- (void)onDismissRemarkView:(id)arg1;
- (void)DismissRemarkViewControllerAnimated;
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
- (void)scrollFirstShowSection;
- (void)addRecommendCardImageToImage;
- (unsigned int)getCardImgListCount;
- (id)getLastCardImageView;
- (id)getContactCardImageList;
- (id)getLastCardImageViewOneLine;
- (id)getLastContactCardImage;
- (id)genSectionCardImageToMoreFootView;
- (void)addCardImg:(id)arg1;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (id)getRightBarButtonItem;
- (id)getHandleOriginalArrSelectedTagId;
- (id)getContactProfileRecommendInfo;
- (double)getTipLeftMargin;
- (double)getDescViewHeight;
- (double)getDescViewOriginHeight;
- (void)resetRightBarButtonEnabled;
- (void)recordExposureWithArrProfilePhone:(id)arg1;
- (void)startLoadingEditNonBlock;
- (void)onClickAddPhone;
- (void)onClickDeletePhone:(id)arg1;
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
- (void)onUploadCardImgFailFinish:(id)arg1 resultCode:(int)arg2;
- (void)onDownloadCardImg:(id)arg1 success:(BOOL)arg2;
- (void)executeContactTagOperate;
- (void)executeOpLog;
- (void)handleModifyContactResult:(BOOL)arg1 ret:(int)arg2 isChangeRemarkSucess:(BOOL)arg3 isChangePhoneSucess:(BOOL)arg4 isChangecontactDescSucess:(BOOL)arg5;
- (void)saveExecuteOpLogInLocal;
- (void)saveExecuteOpLogInLocalWithIsChangeRemarkSucess:(BOOL)arg1 isChangePhoneSucess:(BOOL)arg2 isChangecontactDescSucess:(BOOL)arg3;
- (BOOL)checkNameAndDescCanSave;
- (BOOL)checkFinishButtonEnable;
- (id)getAllTagNameList;
- (id)getContactTagNameList;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)scrollRectToVisibleForView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reportRemarkContactTagWithOpResult:(BOOL)arg1;
- (void)onTagVCDismissWithEditViewNewlyCreatedTags:(id)arg1 addedTags:(id)arg2 tableViewNewlyCreatedTags:(id)arg3 addedTags:(id)arg4;
- (id)navigationBarBackgroundColor;
- (void)onModifyContactTagList:(id)arg1 reResult:(BOOL)arg2;
- (void)reportContactRelationUpdateDoAction:(unsigned int)arg1 extraInfo:(id)arg2;
- (void)reportContactRelationUpdateDoResultAction:(unsigned int)arg1 extraInfo:(id)arg2 isSuccess:(BOOL)arg3 returnCode:(int)arg4;
- (void)TextViewWithExtrasDidUpdateSubViewLayout:(id)arg1;
- (void)TextViewWithExtrasHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewWithExtrasBeginEditing:(id)arg1;
- (void)onMMGrowTextViewWithExtrasTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewDidChanged:(id)arg1;
- (void)MMGrowTextViewWithExtrasDidClickDictationStartIntent:(id)arg1;
- (void)MMGrowTextViewWithExtrasDidApplyDictationTextChange:(id)arg1;
- (void)handleTextViewDidChangedRightBarButton;
- (BOOL)needEditState;
- (void)setNeedEditState:(BOOL)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)recommandRemark;
- (void)setRecommandRemark:(id)arg1;
- (id)profileRecommendInfo;
- (void)setProfileRecommendInfo:(id)arg1;
- (id)m_chatRoomUsrname;
- (void)setM_chatRoomUsrname:(id)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (unsigned int)firstShowSection;
- (void)setFirstShowSection:(unsigned int)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
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
- (id)phoneCell;
- (void)setPhoneCell:(id)arg1;
- (BOOL)contactRemarkVoiceInputEnabled;
- (void)setContactRemarkVoiceInputEnabled:(BOOL)arg1;
- (id)m_oRecommTagView;
- (void)setM_oRecommTagView:(id)arg1;
- (id)arrSelectRecommTagName;
- (void)setArrSelectRecommTagName:(id)arg1;
- (id)tagEditLogic;
- (void)setTagEditLogic:(id)arg1;
- (id)arrRecommendTagName;
- (void)setArrRecommendTagName:(id)arg1;
- (id)reportProfileRecommendInfo;
- (void)setReportProfileRecommendInfo:(id)arg1;
- (id)reportSetSelectedRecommTagId;
- (void)setReportSetSelectedRecommTagId:(id)arg1;
- (id)reportNicknameInputMethodSet;
- (void)setReportNicknameInputMethodSet:(id)arg1;
- (id)reportMemoInputMethodSet;
- (void)setReportMemoInputMethodSet:(id)arg1;
- (id)tagViewPageSheetController;
- (void)setTagViewPageSheetController:(id)arg1;
- (BOOL)isHadModifyTag;
- (void)setIsHadModifyTag:(BOOL)arg1;
- (unsigned int)showSelectedShowSection;
- (void)setShowSelectedShowSection:(unsigned int)arg1;
- (BOOL)isHadTriggerFirstResponder;
- (void)setIsHadTriggerFirstResponder:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isHadClickEditeRemarkInput;
- (void)setIsHadClickEditeRemarkInput:(BOOL)arg1;
- (id)arrExtraRecommRemark;
- (void)setArrExtraRecommRemark:(id)arg1;
- (BOOL)hadSetRemarkValueOpenFromMsg;
- (void)setHadSetRemarkValueOpenFromMsg:(BOOL)arg1;
- (BOOL)hadSetPhoneValueOpenFromMsg;
- (void)setHadSetPhoneValueOpenFromMsg:(BOOL)arg1;
- (BOOL)hadSetCardImageValueOpenFromMsg;
- (void)setHadSetCardImageValueOpenFromMsg:(BOOL)arg1;
- (BOOL)hadShowToastTipOpenFromMsg;
- (void)setHadShowToastTipOpenFromMsg:(BOOL)arg1;
- (BOOL)containSetRemarkValueOpenFromMsg;
- (void)setContainSetRemarkValueOpenFromMsg:(BOOL)arg1;
- (BOOL)containSetPhoneValueOpenFromMsg;
- (void)setContainSetPhoneValueOpenFromMsg:(BOOL)arg1;
- (BOOL)containSetCardImageValueOpenFromMsg;
- (void)setContainSetCardImageValueOpenFromMsg:(BOOL)arg1;
- (id)recommRemarkView;
- (void)setRecommRemarkView:(id)arg1;
- (id)recommPhoneView;
- (void)setRecommPhoneView:(id)arg1;
- (BOOL)hadReportImage;
- (void)setHadReportImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
