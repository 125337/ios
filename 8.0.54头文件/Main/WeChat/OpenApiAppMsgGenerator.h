@interface OpenApiAppMsgGenerator : NSObject <PBMessageObserverDelegate>
{
    WAContactGetter * _contactGetter; // +0x8
    NSMutableDictionary * _cdnUploadQueue; // +0x10
}
- (void)generateAppMsgFromAppData:(id)arg1 toUserName:(id)arg2 fromAppId:(id)arg3 translateLinkExtraInfo:(id)arg4 callback:(id /* block */)arg5;
- (void)handleMsgWrap:(id)arg1 onSelectContact:(id)arg2 appData:(id)arg3 fromAppId:(id)arg4 callback:(id /* block */)arg5;
- (void)handleAppBrandObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(id /* block */)arg6;
- (void)handleImageObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 callback:(id /* block */)arg5;
- (void)handleVideoObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(id /* block */)arg6;
- (void)handleEnterpriseCardObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(id /* block */)arg6;
- (void)handleWeWorkRecordObjectType:(id)arg1 internalMediaMsg:(id)arg2 toUserName:(id)arg3 fromAppId:(id)arg4 translateLinkExtraInfo:(id)arg5 callback:(id /* block */)arg6;
- (void)doFetchShareInfoWithMsg:(id)arg1 onSelectContact:(id)arg2 mediaMessage:(id)arg3 withShareTicket:(BOOL)arg4 fromAppId:(id)arg5 callback:(id /* block */)arg6;
- (id)getShareActivityInfoStr:(id)arg1;
- (void)doUploadImage:(id)arg1 onSelectContact:(id)arg2 mediaMessage:(id)arg3 fromAppId:(id)arg4 callback:(id /* block */)arg5;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetShareInfoResp:(id)arg1;
- (void)handleDecryptWxWorkChatRecordResp:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (id)cdnUploadQueue;
- (void)setCdnUploadQueue:(id)arg1;
- (void).cxx_destruct;
@end

