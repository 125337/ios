@interface SocialInfomationViewController : MMUIViewController <IOplogExt, IOpenImOplogExt, NewRemarkViewPageSheetModeViewDelegate, WCActionSheetDelegate, QZoneLoginStatusDelegate, PBMessageObserverDelegate, IContactRelatedGroupDataExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    QZoneLoginStatus * m_qzone; // +0x78
    NSString * m_cpKeyForSignature; // +0x80
    BOOL m_isSignatureUnsafe; // +0x88
    WCTableViewSectionManager * m_moreSection; // +0x90
    NewRemarkViewController * m_remarkViewController; // +0x98
    BOOL _m_isShowRemark; // +0xa0
    BOOL _m_bDisableAllOperation; // +0xa1
    BOOL _bLodingPullPermissions; // +0xa2
    BOOL _bLodingPullRemark; // +0xa3
    BOOL _m_downloadingImg; // +0xa4
    BOOL _m_isDownloadFail; // +0xa5
    BOOL _isOpenFromSystemMsg; // +0xa6
    BOOL _isWaitDownlaodRecommendImage; // +0xa7
    BOOL _hadSetRemarkValueOpenFromMsg; // +0xa8
    BOOL _hadSetPhoneValueOpenFromMsg; // +0xa9
    BOOL _hadSetCardImageValueOpenFromMsg; // +0xaa
    BOOL _hadShowToastTipOpenFromMsg; // +0xab
    BOOL _containSetRemarkValueOpenFromMsg; // +0xac
    BOOL _containSetPhoneValueOpenFromMsg; // +0xad
    BOOL _containSetCardImageValueOpenFromMsg; // +0xae
    BOOL _isPerformEditForAtuoSumbitIng; // +0xaf
    BOOL _hadFirstLoadForOpenFromMsg; // +0xb0
    CContact * m_contact; // +0xb8
    ContactRelatedGroupLogic * m_relatedGroupLogic; // +0xc0
    long long _contactInfoViewSource; // +0xc8
    ContactProfileRecommendInfo * _profileRecommendInfo; // +0xd0
    CMessageWrap * _m_sourceMsg; // +0xd8
    id <SocialInfomationViewControllerDelegate> _m_delegate; // +0xe0
    NSMutableArray * _cardImgList; // +0xe8
    ContactRemarkLogic * _m_logic; // +0xf0
    ContactProfileRecommendInfo * _reportProfileRecommendInfo; // +0xf8
    NSMutableArray * _arrPhoneItem; // +0x100
    NSMutableArray * _arrRecommendTagName; // +0x108
    NSString * _needAutoAddRemark; // +0x110
    PhoneItemInfo * _needAutoAddPhone; // +0x118
    ContactCardImage * _needAutoAddCardImage; // +0x120
}
+ (id)getRegionForContact:(id)arg1;
+ (id)getSourceForContact:(id)arg1 sourceMsg:(id)arg2;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1 andActionResultCode:(long long)arg2;
- (void)reportContactInfoItemClickWithSectionType:(unsigned int)arg1;
- (void)initRecommendData;
- (void)initProfileRecommendInfo;
- (void)recordExposureWithArrProfilePhone:(id)arg1;
- (void)initDownloadFirstImageMsg;
- (void)handleViewDidAppearInHadRecommend;
- (id)genTitleLabel:(id)arg1;
- (BOOL)checkIsRemarkHadRecommend;
- (BOOL)checkIsPhoneHadRecommend;
- (BOOL)checkIsTagHadRecommend;
- (BOOL)checkIsDescImageHadRecommend;
- (void)handleCardImgListInHadRecommend:(id)arg1;
- (void)handleReloadTableViewInHadRecommend;
- (void)handleOpenEditRemarkPageSheetInHadRecommendWithSectionType:(unsigned int)arg1 pageSheetModeViewController:(id)arg2;
- (BOOL)checkArrPhoneItemHadPhoneNum:(id)arg1;
- (void)makeEditeRemarkHadRecommendCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeEditePhoneHadRecommendCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeEditeTagHadRecommendCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeEditeDesImageHadRecommendCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeEditeInfoHadRecommendCell:(id)arg1 CellInfo:(id)arg2 leftTitle:(id)arg3 rightTitle:(id)arg4 rightColor:(id)arg5 detailTitle:(id)arg6;
- (void)performEditForAtuoSumbit;
- (void)uploadCardImg;
- (void)executeOpLogForAtuoSumbit;
- (void)doExecuteOpLogForAtuoSumbit;
- (void)handleAutoSumitFail;
- (void)onUploadCardImgFinish:(id)arg1 success:(BOOL)arg2;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)setRemarkValueInRecommendSystemMsg;
- (void)setPhoneValueInRecommendSystemMsg;
- (void)setCardImageValueInRecommendSystemMsg:(id)arg1;
- (void)showToastForSetValueFromRecommendSystemMsg;
- (void)clearAutoSetFromRecommendSystemMsg;
- (void)asyncGetRecommendTag;
- (id)getArrSelectTagName;
- (BOOL)checkIsGetRecommendTag;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)relatedGroupTitle;
- (BOOL)shouldRestrictContentViewSize;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)addRemarkSection;
- (void)addThridAccountSection;
- (void)relatedGroupSection;
- (void)addInviterCellAtSection:(id)arg1;
- (void)addFriendInfoSection;
- (void)addRegionCellAtSection:(id)arg1;
- (void)addSignatureCellAtSection:(id)arg1;
- (void)addSourceCellAtSection:(id)arg1;
- (void)addContactAddCreateTimeCellAtSection:(id)arg1;
- (void)addPermissionInfoSection;
- (void)addPermissionInfoCellAtSection:(id)arg1;
- (void)makeAddCreateTimeInfoCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableView;
- (void)OnQQAction;
- (void)onPushRelatedGroupViewController;
- (void)startDownCardImg;
- (id)getContactRemarkLogic;
- (BOOL)getIsDownloadingImg;
- (id)getCardImgList;
- (id)getTagNameListStr;
- (id)getTagListView;
- (void)opEditRemarkNameRemarkSectionType;
- (void)opEditRemarkName:(id)arg1;
- (void)opEditRemarkNameWithSectionType:(unsigned int)arg1;
- (id)getProfileDesView;
- (id)getProfileDesImageView;
- (id)getProfileDesImageViewWithCardImgList:(id)arg1;
- (void)addCardImgInProfileDesView:(id)arg1 cardImgList:(id)arg2 startTop:(double)arg3;
- (id)getRemarkSessionRightValueView:(id)arg1;
- (void)opEditSetPermission:(id)arg1;
- (void)didOpEditSetPermission;
- (void)resetCardImgList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onQZoneUrl:(id)arg1;
- (void)DismissNewRemarkViewPageSheetModeView;
- (void)updateCPState;
- (void)onCRGDataUpdated;
- (void)onDownloadCardImg:(id)arg1 success:(BOOL)arg2;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_relatedGroupLogic;
- (void)setM_relatedGroupLogic:(id)arg1;
- (BOOL)m_isShowRemark;
- (void)setM_isShowRemark:(BOOL)arg1;
- (BOOL)m_bDisableAllOperation;
- (void)setM_bDisableAllOperation:(BOOL)arg1;
- (BOOL)bLodingPullPermissions;
- (void)setBLodingPullPermissions:(BOOL)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (id)profileRecommendInfo;
- (void)setProfileRecommendInfo:(id)arg1;
- (BOOL)bLodingPullRemark;
- (void)setBLodingPullRemark:(BOOL)arg1;
- (id)m_sourceMsg;
- (void)setM_sourceMsg:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)cardImgList;
- (void)setCardImgList:(id)arg1;
- (id)m_logic;
- (void)setM_logic:(id)arg1;
- (BOOL)m_downloadingImg;
- (void)setM_downloadingImg:(BOOL)arg1;
- (BOOL)m_isDownloadFail;
- (void)setM_isDownloadFail:(BOOL)arg1;
- (id)reportProfileRecommendInfo;
- (void)setReportProfileRecommendInfo:(id)arg1;
- (id)arrPhoneItem;
- (void)setArrPhoneItem:(id)arg1;
- (id)arrRecommendTagName;
- (void)setArrRecommendTagName:(id)arg1;
- (id)needAutoAddRemark;
- (void)setNeedAutoAddRemark:(id)arg1;
- (id)needAutoAddPhone;
- (void)setNeedAutoAddPhone:(id)arg1;
- (id)needAutoAddCardImage;
- (void)setNeedAutoAddCardImage:(id)arg1;
- (BOOL)isOpenFromSystemMsg;
- (void)setIsOpenFromSystemMsg:(BOOL)arg1;
- (BOOL)isWaitDownlaodRecommendImage;
- (void)setIsWaitDownlaodRecommendImage:(BOOL)arg1;
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
- (BOOL)isPerformEditForAtuoSumbitIng;
- (void)setIsPerformEditForAtuoSumbitIng:(BOOL)arg1;
- (BOOL)hadFirstLoadForOpenFromMsg;
- (void)setHadFirstLoadForOpenFromMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
