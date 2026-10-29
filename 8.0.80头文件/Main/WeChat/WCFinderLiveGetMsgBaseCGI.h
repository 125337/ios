@interface WCFinderLiveGetMsgBaseCGI : WCFinderLiveBaseCgi
{
    BOOL _asyncTransferData; // +0x8
    BOOL _needExtraDirectDisplayMsgs; // +0x9
}
+ (id)tranferToLiveCommentDataItems:(id)arg1;
+ (id)transferToLiveOnlineContacts:(id)arg1;
+ (id)tranferToLiveCommentDataItemsFromFinderLiveAppMsgList:(id)arg1 forTaskId:(id)arg2;
+ (id)mergeFromInitCommentArr1:(id)arg1 initCommentArr2:(id)arg2;
+ (void)sortCommentArray:(id)arg1;
+ (id)filterUnSupportAsyncCreateAppMsgsFromSrc:(id)arg1;
+ (id)filterUnSupportAsyncCreateMsgsFromSrc:(id)arg1;
+ (id)filterDirectDisplayMsgsFromSrc:(id)arg1 liveTask:(id)arg2;
+ (BOOL)isAppMsgReplyToMySelfFromAnchorOrAssistant:(id)arg1;
+ (BOOL)isAppMsgToMySelf:(id)arg1;
+ (BOOL)needUpdateClientConfig:(id)arg1;
- (void)transferDataFromResp:(id)arg1 completion:(id /* block */)arg2;
- (void)transferDataFromResp:(id)arg1 msgList:(id)arg2 appMsgList:(id)arg3 withCreatedCommentArr:(id)arg4 taskId:(id)arg5 completion:(id /* block */)arg6;
- (BOOL)asyncTransferData;
- (void)setAsyncTransferData:(BOOL)arg1;
- (BOOL)needExtraDirectDisplayMsgs;
- (void)setNeedExtraDirectDisplayMsgs:(BOOL)arg1;
@end
