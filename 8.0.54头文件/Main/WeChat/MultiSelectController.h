@interface MultiSelectController : MMObject <WCActionSheetDelegate, EnterpriseSessionSelectViewControllerDelegate, EnterpriseBrandContactSelectViewControllerDelegate, MsgDataSaveLogicDelegate, MMPageSheetBottomViewDelegate, MMImageLoaderObserver, ForwardMessageLogicDelegate, MFMailComposeViewControllerDelegate>
{
    NSString * m_nsChatUserName; // +0x8
    NSMutableArray * m_arrSelectMsg; // +0x10
    NSMutableArray * m_arrMsgCanBeOprate; // +0x18
    NSMutableArray * supportContacts; // +0x20
    CContact * m_toContact; // +0x28
    BOOL hasAnyMsgCannotAddToFav; // +0x30
    BOOL hasAnyMsgDidnotDownload; // +0x31
    BOOL hasAnyMsgCannotSendtoBrand; // +0x32
    BOOL hasAnyMsgCannotSendtoEnterpriseChat; // +0x33
    BOOL hasAnyMsgCannotSendByMail; // +0x34
    BOOL attachTotalSizeTooLarge; // +0x35
    BOOL hasAnyMsgCannotSendToWeWork; // +0x36
    int invalidMsgCount; // +0x38
    BOOL hasNoUploadFileMsg; // +0x3c
    BOOL hasNoUploadVideoMsg; // +0x3d
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x40
    id <MultiSelectContollerDelegate> m_delegate; // +0x48
    BOOL packToSend; // +0x50
    MsgDataSaveLogic * m_msgDataSaveLogic; // +0x58
    BOOL _loadRecordImgFail; // +0x60
    MMPageSheetBaseView * _recordTipView; // +0x68
    id /* block */ _recordTipCompleteBlock; // +0x70
}
+ (unsigned int)getDownloadThumbStatus:(id)arg1;
+ (BOOL)didDownloadOK:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)sortMsgList:(id)arg1;
- (void)ResetDataWithMsgIDList:(id)arg1 AndUserName:(id)arg2;
- (void)Reset;
- (id)getMultiMsgWithMsgIDList:(id)arg1 AndUserName:(id)arg2;
- (void)EndMultiEdit;
- (BOOL)canBeAddToFav:(id)arg1 singleMsg:(BOOL)arg2;
- (void)CheckMsgForFavAdd;
- (void)addMsgListToFavInternal;
- (void)addMultiMsgToMyFav:(id)arg1 WithUserName:(id)arg2;
- (unsigned int)getDownloadThumbStatus:(id)arg1;
- (BOOL)didDownloadOK:(id)arg1;
- (BOOL)canBeSendToFriend:(id)arg1;
- (void)CheckMsgForSendToFriend;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)sendMultiMsgToFriend:(BOOL)arg1;
- (void)sendMultiMsgToFriend:(id)arg1 WithUserName:(id)arg2;
- (void)sendMultiMsgToFriend:(id)arg1 WithUserName:(id)arg2 packedToSend:(BOOL)arg3;
- (void)sendSingleBySingleMsgToFriend:(id)arg1 WithUserName:(id)arg2;
- (void)showChooseMultiOrSingleView;
- (void)CheckMsgForSendToBrand;
- (void)sendMsgListToBrandInternal;
- (void)sendMultiMsgToBrandContact:(id)arg1 WithUserName:(id)arg2 To:(id)arg3;
- (void)CheckMsgForSendToBrandWithAlert;
- (void)selectEnterpriseBrandContact;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)CheckMsgForSendToEnterpriseChat;
- (void)sendMultiMsgToEnterpriseChatBrand:(id)arg1 WithUserName:(id)arg2 To:(id)arg3;
- (void)CheckMsgForSendToEnterpriseChatWithAlert;
- (void)selectEnterpriseChatSession;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)sendMultiMsgToEnterpriseChat:(id)arg1;
- (BOOL)canBeSendByMailCorrect:(id)arg1;
- (void)CheckMsgForMail;
- (id)getContactNickName:(id)arg1;
- (id)convertMsg2MailContent:(id)arg1 videoCnt:(int)arg2;
- (id)getMailNodeList;
- (void)getSubject:(id)arg1 AndHeader:(id)arg2 IsNative:(BOOL)arg3;
- (void)sendMailByQQMail:(id)arg1 Content:(id)arg2 Subject:(id)arg3;
- (id)mimeOfFile:(id)arg1;
- (void)sendMailBySystemMail:(id)arg1 Content:(id)arg2 Subject:(id)arg3;
- (void)sendMultiMsgByMailInternal;
- (void)sendMultiMsgByMail:(id)arg1 WithUserName:(id)arg2;
- (void)downloadMultiMsg:(id)arg1 WithUserName:(id)arg2 saveToAlbum:(BOOL)arg3;
- (id)getViewController;
- (void)onMsgDataSaveLogicEnd:(BOOL)arg1 expiredMsgs:(id)arg2;
- (void)handAlertWithEAlertViewType:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_checkAndSendMsgToFriend;
- (BOOL)IsMsgExceedRecordSizeWithAlert:(id)arg1;
- (void)onSendComplete;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)changeString2HtmlContent:(id)arg1;
- (BOOL)checkDidDownLoadOKRecordDataFieldAr:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)recordTipView;
- (void)setRecordTipView:(id)arg1;
- (id /* block */)recordTipCompleteBlock;
- (void)setRecordTipCompleteBlock:(id /* block */)arg1;
- (BOOL)loadRecordImgFail;
- (void)setLoadRecordImgFail:(BOOL)arg1;
- (void).cxx_destruct;
@end

