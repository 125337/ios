@interface AffExtDeviceNativeUtilImpl : NSObject <ExtDeviceNativeUtilBase>
{
    ExtDeviceNativeUtilCallback * _curCallBack; // +0x8
}
- (BOOL)isAllowPushWhenExtDeviceOnline;
- (void)setAllowPushWhenExtDeviceOnline:(BOOL)arg1;
- (void)handleCommonErrorMsg:(int)arg1 errorMsg:(id)arg2;
- (void)updateDeviceInfos;
- (id)getSessionList:(int)arg1;
- (void)onConfirmLoginDevice:(int)arg1 syncChat:(BOOL)arg2 clientVersion:(int)arg3 msgContextPubKey:(id)arg4 syncRecordCtx:(id)arg5;
- (void)getChatPackageAsync:(unsigned long long)arg1 conversationId:(id)arg2 fromTime:(unsigned long long)arg3 toTime:(unsigned long long)arg4 offset:(unsigned long long)arg5 limit:(int)arg6;
- (void)getAllConversationListAsync:(unsigned long long)arg1;
- (void)getAllConversationsListExceptWeClawAsync:(unsigned long long)arg1;
- (void)setCallback:(id)arg1;
- (id)getCurrentUserName;
- (unsigned long long)getCurrentTimeMs;
- (void)sendSyncStatusNotifyAsync:(unsigned long long)arg1 funcName:(id)arg2 args:(id)arg3;
- (id)curCallBack;
- (void)setCurCallBack:(id)arg1;
- (void).cxx_destruct;
@end
