@interface SendVerifyMsgViewController : MMUIViewController <ContactProfileRecommendSelectViewDelegate, NewContactTagViewControllerDelegate, ContactTagEditLogicDelegate, NewContactTagViewPageSheetControllerDelegate, WCActionSheetDelegate, CardImageBrowseViewControllerDelegate, SendVerifyMsgBusinessCardImageDelegate, MMTableViewInfoDelegate, ILinkEventExt, UITextViewDelegate, IContactTagViewControllerExt, NewContactTagViewControllerDelegate, MMUIViewControllerExt, ContactProfileRecommendSelectViewDelegate, MMGrowTextViewWithExtrasDelegate, ContactAddDescriptionViewDelegate, UITextFieldDelegate, contactVerifyLogicDelegate>
{
    CContact * m_oVerifyContact; // +0x70
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x78
    NSString * m_recommandRemark; // +0x80
    BOOL m_bSetRemark; // +0x88
    BOOL m_bNeedReloadSubviews; // +0x89
    BOOL m_bNotCancel; // +0x8a
    BOOL m_bHasRemark; // +0x8b
    BOOL m_bHasTag; // +0x8c
    unsigned int m_uiRecomandRemarkScene; // +0x90
    NSString * m_placeholder; // +0x98
    BOOL m_isHadShowSocialBlackSwitchTip; // +0xa0
    MMGrowTextViewWithExtras * m_tfVerifyMsg; // +0xa8
    MMGrowTextViewWithExtras * m_tfRemark; // +0xb0
    MMTableViewInfo * m_tableViewInfo; // +0xb8
    BOOL m_bIsDisableAllPermissionContact; // +0xc0
    NSString * m_moreLimitFootTitle; // +0xc8
    BOOL m_isSocialBlackValue; // +0xd0
    BOOL m_isOutsiderValue; // +0xd1
    BOOL m_isWCBlackValue; // +0xd2
    BOOL m_clicfgSetDefaultChatonlyTwoHadSet; // +0xd3
    UIView * m_defaultChatonlyTwoSectionHeadView; // +0xd8
    UIButton * m_sendButton; // +0xe0
    UIButton * m_disableButton; // +0xe8
    BOOL m_hadClickDiableButton; // +0xf0
    WCTableViewNormalCellManager * m_socialPermissionCellInfo; // +0xf8
    WCTableViewNormalCellManager * m_snsPermissionCellInfo; // +0x100
    WCTableViewNormalCellManager * m_renameCellInfo; // +0x108
    WCTableViewNormalCellManager * m_tfVerifyMsgCellInfo; // +0x110
    NSMutableArray * m_tagItemList; // +0x118
    NSMutableArray * m_originTagItemList; // +0x120
    NSArray * m_originalArrSelectedTagId; // +0x128
    NSArray * m_handleOriginalArrSelectedTagId; // +0x130
    MMUILabel * m_tagNameLabel; // +0x138
    NSDate * m_pushInDate; // +0x140
    BOOL m_changeWCBlacklist; // +0x148
    BOOL m_changeWCOutsider; // +0x149
    BOOL m_changeWCOnlyChat; // +0x14a
    BOOL m_hadSendOrVerifyDone; // +0x14b
    unsigned int m_notionVibrateNumber; // +0x14c
    unsigned int m_startTime; // +0x150
    ContactProfileRecommendInfo * m_profileRecommendInfo; // +0x158
    ContactProfileRecommendInfo * m_reportProfileRecommendInfo; // +0x160
    NSMutableArray * m_arrPhoneItem; // +0x168
    NSMutableDictionary * m_phoneEdit; // +0x170
    long long m_firstResponderIndex; // +0x178
    NSString * m_recommendReeditRemark; // +0x180
    NSString * m_recommendReeditPhone; // +0x188
    ContactProfileRecommendSelectView * m_oRecommRemarkView; // +0x190
    ContactProfileRecommendSelectView * m_oRecommPhoneView; // +0x198
    BOOL m_hasReportExposureVerifyDoneButton; // +0x1a0
    BOOL m_isShowRighImage; // +0x1a1
    BOOL _hasEditHelloMsg; // +0x1a2
    BOOL _m_bVerifyToMe; // +0x1a3
    BOOL _hasFilledRemark; // +0x1a4
    BOOL _recomRemarkIsClick; // +0x1a5
    BOOL _recomRemarkClickStatus; // +0x1a6
    BOOL _remarkSelectorUsed; // +0x1a7
    BOOL _descSelectorIconExpo; // +0x1a8
    BOOL _descSelectorIconClick; // +0x1a9
    BOOL _descSelectorIconUsed; // +0x1aa
    BOOL _hasFilledOrSavedHelloMsg; // +0x1ab
    BOOL _isHadDownloadHelloMsgImage; // +0x1ac
    unsigned int _m_uiOpCode; // +0x1b0
    CContact * m_oChatContact; // +0x1b8
    CMessageWrap * m_oSourceMsg; // +0x1c0
    NSString * recommandRemark; // +0x1c8
    SendVerifyMsgLogicController * m_logicVC; // +0x1d0
    id <SendVerifyMsgViewControllerDelegate> _m_delegate; // +0x1d8
    unsigned long long _m_qrCodeAddFriendScene; // +0x1e0
    NSString * _verifyContent; // +0x1e8
    long long _contactInfoViewSource; // +0x1f0
    NSString * _reportSessionId; // +0x1f8
    WCTableViewNormalCellManager * _m_sectionInfoTagCellInfo; // +0x200
    long long _addRemarkCode; // +0x208
    long long _recomRemarkType; // +0x210
    long long _cardImgCount; // +0x218
    long long _descriptionCharLength; // +0x220
    NSMutableSet * _editViewNewlyCreatedTags; // +0x228
    NSMutableSet * _editViewAddedTags; // +0x230
    NSMutableSet * _tableViewNewlyCreatedTags; // +0x238
    NSMutableSet * _tableViewAddedTags; // +0x240
    NSString * _remarkReportSessionId; // +0x248
    MMUIView * _verifyMsgEditView; // +0x250
    MMUIImageView * _verifyMsgImgView; // +0x258
    UIImage * _verifyMsgImage; // +0x260
    MMUIButton * _verifyCoverBtn; // +0x268
    MMUIButton * _addVerifyImgBtn; // +0x270
    MMUIButton * _showVerifyImgBtn; // +0x278
    UIView * _sepLine; // +0x280
    SendVerifyMsgBusinessCardImageLogic * _businessCardImageLogic; // +0x288
    UIImage * _helloMsgImage; // +0x290
    NSString * _friendRequestId; // +0x298
    CardImgItemInfo * _businessCardItem; // +0x2a0
    ContactProfileRecommendSelectView * _m_oRecommTagView; // +0x2a8
    NSMutableArray * _arrSelectRecommTagName; // +0x2b0
    ContactTagEditLogic * _tagEditLogic; // +0x2b8
    NSMutableArray * _arrRecommendTagName; // +0x2c0
    NSMutableSet * _reportSetSelectedRecommTagId; // +0x2c8
    NewContactTagViewPageSheetController * _tagViewPageSheetController; // +0x2d0
}
+ (unsigned int)getSendVerifySourceSceneWithFriendScene:(unsigned int)arg1;
- (Class)getContactProfileRecommendSelectViewClass;
- (id)makeLocalRecommTagView;
- (void)addTagSectionInOptimize;
- (void)addDescSectionInOptimize;
- (void)addImageDescSectionInOptimize;
- (void)handleClickSelectedProfileTagRecommendText:(id)arg1;
- (void)openDescEditePageSheet:(id)arg1;
- (void)openTagEditHalfScreenView;
- (id)defaultTagAndDescTitleColor;
- (id)defaultTagAndDescValueColor;
- (void)modifyDescCellTitleLabel:(id)arg1 descLabel:(id)arg2;
- (void)modifyTagCellTitleLabel:(id)arg1 descLabel:(id)arg2;
- (void)saveArrSelectRecommTagForStrangerContact;
- (void)submitArrSelectRecommTag;
- (id)getArrSelectTagName;
- (id)getArrSelectTagID;
- (void)asyncGetRecommendTag;
- (id)genLeftSubSymbolView;
- (void)onJobForTagEditRet:(int)arg1;
- (void)onNewContactTagViewPageSheetWillDisappear;
- (void)onClickNewContactTagViewPageSheetDone;
- (id)getContactVerifySendVerifyTip;
- (id)getContactVerifyVerifyToMeTip;
- (id)getContactsSettingWCSocialBlackHeaderTip;
- (id)getContactVerifyContactsTagCellTitle;
- (id)getContactVerifyInputRemarkDescCellTitle;
- (void)setupVerifyMsgEditView;
- (void)updateVerifyMsgEditViewWithExtrasHeightDidChanged;
- (id)getBusinessCardImageLogic;
- (BOOL)isSendVerifyAddImageOpenSwitch;
- (void)onClickVerifyAddBtnClick;
- (void)onClickVerifyImageCoverBtnClick;
- (void)onShowVerifyImageBtnClick;
- (void)showVerifyImageView:(id)arg1 originFrame:(CGRect)arg2 isHiddenDeleteButton:(BOOL)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onMsgImgPickerViewControllerDidFinishSelectWithImageList:(id)arg1;
- (void)onUploadBusinessCardImgFailFinish:(id)arg1 scene:(unsigned int)arg2;
- (void)onUploadBusinessCardImgSuccessFinish:(id)arg1 cardImgItemInfo:(id)arg2 scene:(unsigned int)arg3;
- (void)onDownloadBusinessCardImg:(id)arg1 success:(BOOL)arg2 scene:(unsigned int)arg3;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (void)onClickRichTextViewImageIcon:(id)arg1 imageIconSrc:(id)arg2 imageIconFrame:(CGRect)arg3 richTextView:(id)arg4;
- (void)reportExposureSendVerifyAddImageButton;
- (void)reportClickSendVerifyAddImageButton;
- (void)reportClickSendVerifyDoneButton;
- (void)reportClickToSaveHelloMsg:(BOOL)arg1;
- (void)setupReportData;
- (void)reportClickContactAddTag;
- (void)reportInFinishDone;
- (void)reportDidSendVerifyMsg;
- (void)reportExposureVerifyDoneButton;
- (void)reportExposureProfileRecommendSelectViewItem:(id)arg1 commonDicReportParams:(id)arg2 recommendSelectType:(unsigned int)arg3;
- (void)reportClickProfileRecommendSelectViewItem:(id)arg1 commonDicReportParams:(id)arg2 recommendSelectType:(unsigned int)arg3 recommendIndex:(unsigned int)arg4;
- (void)reportExposureTagViewPageSheet;
- (void)reportExposureDescViewPageSheet;
- (id)getReportDictionary;
- (unsigned int)getReportSetSelectedRecommTagIdCount;
- (unsigned int)getReportContactEnterScene;
- (id)getDicPageInfoReprot;
- (id)init;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)makeBottomView;
- (void)setRightButtonType:(BOOL)arg1;
- (void)reloadTableViewInfo;
- (BOOL)isShowSendVerifySession;
- (id)getContactVerifyVerifyToMeTipHeader;
- (void)reloadPermissionTableViewCellInfo;
- (void)reloadPermissionTableViewCellInfoWithClicfgSetDefaultChatonlyTwo;
- (id)genDefaultChatonlyTwoSectionHeadView;
- (void)shakeDefaultChatonlyTwoSectionHeadView;
- (void)reloadOpenIMPermissionTableViewCellInfo;
- (void)reloadContactsViewTagListViewData;
- (BOOL)needRecommBtn;
- (BOOL)needSlideTextBtn;
- (BOOL)needLocalRecommRemark;
- (BOOL)needLocalRecommPhone;
- (id)makeRecommBtnView;
- (id)makeSelectTextAsRemarkView;
- (id)makeLocalRecommRemarkView;
- (id)makeLocalRecommPhoneView;
- (void)updateSavedHelloMsgView;
- (void)makeSavedHelloMsgView:(id)arg1;
- (void)onLongPressSavedHelloMsg;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)clickToSaveHelloMsg;
- (void)clickToSaveHelloMsgWithBusinessCardItem:(id)arg1;
- (void)onClearSavedHello;
- (void)useRecommandRemark;
- (void)useProfileRecommendRemark:(id)arg1;
- (void)showSelectRemarkHalfScreen;
- (id)getLastReceivedHelloMsg;
- (id)getTableView;
- (id)getTableViewInfo;
- (id)getTfVerifyMsg;
- (void)initData;
- (void)reloadData;
- (void)saveDataToStrangerCache;
- (void)reloadTagListData;
- (BOOL)checkIsHasSessionAddContactNotMMContact;
- (BOOL)checkIsHasSessionSendRuestNotMMContact;
- (id)getContactProfileRecommendInfo;
- (id)getContactReportProfileRecommendInfo;
- (id)getRecommendReeditPhone;
- (id)getRecommendReeditRemark;
- (id)getTfRemark;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeDescCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeImageDescCell:(id)arg1 CellInfo:(id)arg2;
- (void)onCancel;
- (void)onBackButtonClicked;
- (void)onReturn;
- (void)viewDidBeInteractivePoped;
- (void)onHideKeyBoard;
- (void)onSendVerifyMsg;
- (void)executeContactTagOperate;
- (void)doSendVerifyMsg;
- (void)onVerifyOK;
- (void)showContactVerifyLimitFail:(id)arg1;
- (void)onClickDefaultChatonlyTwoDisableButton;
- (void)setSendButtonUserInteractionEnabled:(BOOL)arg1;
- (void)onClickAddPhone;
- (void)onClickDeletePhone:(id)arg1;
- (void)onAddPhone;
- (void)opSocialBlackPermission;
- (void)opAllPermission;
- (void)onPermissionClicfgSetDefaultChatonlyTwo;
- (void)doOpSocialBlackPermission:(BOOL)arg1;
- (void)changeSocialBlackPermissionTwo:(BOOL)arg1;
- (void)opOutsider:(id)arg1;
- (void)opWCBlacklist:(id)arg1;
- (BOOL)hasCardImage;
- (void)onContactVerifyFail;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)makeEdit:(id)arg1 CellInfo:(id)arg2;
- (void)initRemarkEdit;
- (void)makeRemarkEdit:(id)arg1;
- (id)makeSendButton;
- (id)makeDisableButtonFromSendButton:(id)arg1;
- (void)showTagEdit;
- (id)getHandleOriginalArrSelectedTagId;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)addPhoneSection;
- (id)getPhoneTextFieldAt:(long long)arg1;
- (void)hideKeyboard;
- (id)getPhoneItemInfoAt:(unsigned long long)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)useProfileRecommendPhone:(id)arg1;
- (id)getAllPhoneNumberString;
- (void)onSelectedProfileRecommendText:(id)arg1 recommendSelectType:(unsigned int)arg2;
- (void)reportExposureContactProfileRecommendSelectView:(id)arg1 arrRecommendText:(id)arg2 recommendSelectType:(unsigned int)arg3;
- (void)reportClieckContactProfileRecommendSelectView:(id)arg1 recommendText:(id)arg2 recommendSelectType:(unsigned int)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)handleTextFieldText:(id)arg1;
- (void)showDescEdit:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onMMGrowTextViewWithExtrasTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewWithExtrasHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewWithExtrasBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onDidPerformEdit;
- (void)DismissAddDescriptionViewController;
- (void)onModifyContactTagList:(id)arg1 reResult:(BOOL)arg2;
- (id)navigationBarBackgroundColor;
- (void)reportSendVerifyMsg;
- (id)getSelectTagNameListStr;
- (id)getNewCreateSelectTagNameListStr;
- (void)reportRemarkContactTagWithOpResult:(BOOL)arg1;
- (void)onTagVCDismissWithEditViewNewlyCreatedTags:(id)arg1 addedTags:(id)arg2 tableViewNewlyCreatedTags:(id)arg3 addedTags:(id)arg4;
- (void)reportSavedHelloMsg:(long long)arg1;
- (id)getSendRequestDelegate;
- (id)m_oVerifyContact;
- (void)setM_oVerifyContact:(id)arg1;
- (id)m_oChatContact;
- (void)setM_oChatContact:(id)arg1;
- (id)m_oSourceMsg;
- (void)setM_oSourceMsg:(id)arg1;
- (id)recommandRemark;
- (void)setRecommandRemark:(id)arg1;
- (id)m_logicVC;
- (void)setM_logicVC:(id)arg1;
- (BOOL)m_isShowRighImage;
- (void)setM_isShowRighImage:(BOOL)arg1;
- (BOOL)hasEditHelloMsg;
- (void)setHasEditHelloMsg:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)m_qrCodeAddFriendScene;
- (void)setM_qrCodeAddFriendScene:(unsigned long long)arg1;
- (BOOL)m_bVerifyToMe;
- (void)setM_bVerifyToMe:(BOOL)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (unsigned int)m_uiOpCode;
- (void)setM_uiOpCode:(unsigned int)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)m_sectionInfoTagCellInfo;
- (void)setM_sectionInfoTagCellInfo:(id)arg1;
- (BOOL)hasFilledRemark;
- (void)setHasFilledRemark:(BOOL)arg1;
- (long long)addRemarkCode;
- (void)setAddRemarkCode:(long long)arg1;
- (long long)recomRemarkType;
- (void)setRecomRemarkType:(long long)arg1;
- (BOOL)recomRemarkIsClick;
- (void)setRecomRemarkIsClick:(BOOL)arg1;
- (BOOL)recomRemarkClickStatus;
- (void)setRecomRemarkClickStatus:(BOOL)arg1;
- (BOOL)remarkSelectorUsed;
- (void)setRemarkSelectorUsed:(BOOL)arg1;
- (long long)cardImgCount;
- (void)setCardImgCount:(long long)arg1;
- (long long)descriptionCharLength;
- (void)setDescriptionCharLength:(long long)arg1;
- (id)editViewNewlyCreatedTags;
- (void)setEditViewNewlyCreatedTags:(id)arg1;
- (id)editViewAddedTags;
- (void)setEditViewAddedTags:(id)arg1;
- (id)tableViewNewlyCreatedTags;
- (void)setTableViewNewlyCreatedTags:(id)arg1;
- (id)tableViewAddedTags;
- (void)setTableViewAddedTags:(id)arg1;
- (id)remarkReportSessionId;
- (void)setRemarkReportSessionId:(id)arg1;
- (BOOL)descSelectorIconExpo;
- (void)setDescSelectorIconExpo:(BOOL)arg1;
- (BOOL)descSelectorIconClick;
- (void)setDescSelectorIconClick:(BOOL)arg1;
- (BOOL)descSelectorIconUsed;
- (void)setDescSelectorIconUsed:(BOOL)arg1;
- (BOOL)hasFilledOrSavedHelloMsg;
- (void)setHasFilledOrSavedHelloMsg:(BOOL)arg1;
- (id)verifyMsgEditView;
- (void)setVerifyMsgEditView:(id)arg1;
- (id)verifyMsgImgView;
- (void)setVerifyMsgImgView:(id)arg1;
- (id)verifyMsgImage;
- (void)setVerifyMsgImage:(id)arg1;
- (id)verifyCoverBtn;
- (void)setVerifyCoverBtn:(id)arg1;
- (id)addVerifyImgBtn;
- (void)setAddVerifyImgBtn:(id)arg1;
- (id)showVerifyImgBtn;
- (void)setShowVerifyImgBtn:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)businessCardImageLogic;
- (void)setBusinessCardImageLogic:(id)arg1;
- (id)helloMsgImage;
- (void)setHelloMsgImage:(id)arg1;
- (BOOL)isHadDownloadHelloMsgImage;
- (void)setIsHadDownloadHelloMsgImage:(BOOL)arg1;
- (id)friendRequestId;
- (void)setFriendRequestId:(id)arg1;
- (id)businessCardItem;
- (void)setBusinessCardItem:(id)arg1;
- (id)m_oRecommTagView;
- (void)setM_oRecommTagView:(id)arg1;
- (id)arrSelectRecommTagName;
- (void)setArrSelectRecommTagName:(id)arg1;
- (id)tagEditLogic;
- (void)setTagEditLogic:(id)arg1;
- (id)arrRecommendTagName;
- (void)setArrRecommendTagName:(id)arg1;
- (id)reportSetSelectedRecommTagId;
- (void)setReportSetSelectedRecommTagId:(id)arg1;
- (id)tagViewPageSheetController;
- (void)setTagViewPageSheetController:(id)arg1;
- (void).cxx_destruct;
@end
