@interface ContactProfileRecommendLogic : MMObject <IDownloadImageExt, WeixinContactInfoAssistDelegate, IContactMgrExt>
{
    XSummary m_profileRecommendSummary; // +0x8
    BOOL m_profileRecommendSummaryInitSuccess; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    NSMutableArray * arrRecordDownloadImage; // +0x20
    NSMutableArray * m_arrNotDownloadImageMsg; // +0x28
    NSRecursiveLock * _dataLock; // +0x30
    WeixinContactInfoAssist * _assist; // +0x38
}
+ (BOOL)startDownloadProfileRecommendImageForce:(id)arg1 firstImageMsgLocalId:(unsigned int)arg2;
+ (id)genProfileRecommendInfoFromoMesWrap:(id)arg1;
+ (BOOL)checkIsRecommendSystemMsg:(id)arg1;
+ (void)reportExposureProfileRecommendSystemWithContact:(id)arg1 messageWrap:(id)arg2;
+ (void)fileReportProfileRecommendCandidateSourceSystemWithProfileRecommendInfo:(id)arg1 dicReportParams:(id)arg2;
- (id)init;
- (void)InitModel;
- (BOOL)checkModelFilesExist;
- (BOOL)checkContactRemarkSummaryInitSuccess;
- (void)dealloc;
- (id)getContactProfileRemarkRecommend:(id)arg1 isChatScene:(BOOL)arg2;
- (id)getFriendProfileRecommendInputInfo:(id)arg1 firstImageMessageLocalId:(unsigned int *)arg2 arrAnalyzeMsgLocalId:(id)arg3 setHelloToChatMsgLocalId:(id)arg4;
- (id)genProfileRecommendInputItemInfoWithmessageID:(unsigned int)arg1 nsContent:(id)arg2 role:(id)arg3;
- (id)getFriendProfileRecommendInputInfoInHello:(id)arg1;
- (void)removeProfileRecommendInfoEnxposureInfo:(id)arg1 recommendInfo:(id)arg2 recommEnxposureItem:(id)arg3;
- (void)removeProfileRecommendInfoIntrinsicInfo:(id)arg1 recommendInfo:(id)arg2;
- (void)startDownloadProfileRecommendImage:(id)arg1 firstImageMsgLocalId:(unsigned int)arg2;
- (BOOL)checkRecommendImageHadSetCardImage:(id)arg1 imageMsgLocalId:(unsigned int)arg2 cardImgList:(id)arg3;
- (void)insertIntoSystemMssageWithContact:(id)arg1 profileRecommendInfo:(id)arg2;
- (id)getProfileRecommendSystemMsgWrapSourceContent:(id)arg1;
- (unsigned int)getProfileRecommendSystemMsgMsgCreateWithContact:(id)arg1 profileRecommendInfo:(id)arg2;
- (id)getProfileRecommendSystemMsgWrapContent:(id)arg1;
- (id)getSystemMssageRemarkAndPhoneTitle:(id)arg1;
- (id)getProfileRecommendPhoneFromResults:(void *)arg1 arrPhoneMsgId:(id)arg2 dicPhoneMsgId:(id)arg3;
- (id)getProfileRecommendRemarksFromResults:(void *)arg1 arrRemarkMsgId:(id)arg2 isChatScene:(BOOL)arg3 dicRemarkType:(id)arg4 dicRemarkMsgId:(id)arg5;
- (BOOL)checkISNeedToUpdateSystemMessage:(id)arg1 recommendInfo:(id)arg2 systemRecommendInfo:(id)arg3;
- (void)fillUpProfileRecommendInfo:(id)arg1;
- (void)showEditRemarkNameInRecommendSystemMsgWithContact:(id)arg1 messageWrap:(id)arg2 viewController:(id)arg3;
- (id)genWeixinContactInfoAssistWithContact:(id)arg1;
- (void)onSocialInfomationViewWillPop;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)handleFailImageDownload:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)reportClickProfileRecommendSystemWithContact:(id)arg1 profileRecommendInfo:(id)arg2;
- (id)dataLock;
- (void)setDataLock:(id)arg1;
- (id)assist;
- (void)setAssist:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
