@interface BizIamCppToNativeManagerImpl : NSObject <IamBizCppToNativeManagerBase>
{
    IamBizCppToNativeManagerCallback * m_callBack; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)sendMessageAsync:(unsigned long long)arg1 request:(id)arg2;
- (id)syncSendMessage:(id)arg1;
- (void)getMeTabOpenStateAsync:(unsigned long long)arg1;
- (void)getWebDraftAsync:(unsigned long long)arg1 draftType:(int)arg2 scene:(id)arg3 bizType:(int)arg4;
- (void)deleteWebDraftAsync:(unsigned long long)arg1 draftType:(int)arg2 scene:(id)arg3 bizType:(int)arg4;
- (id)getEditorWXFilePath:(id)arg1;
- (id)getEditorLocalPath:(id)arg1;
- (void)getDraftStateAsync:(unsigned long long)arg1;
- (void)notifyBizPublishResultAsync:(unsigned long long)arg1 result:(id)arg2;
- (void)fetchPhotoConsumerNotifyIncrementCountAsync:(unsigned long long)arg1 timestampMs:(unsigned long long)arg2;
- (void)fetchBrandFansMsgIncrementCountAsync:(unsigned long long)arg1 biz:(id)arg2 timestampMs:(unsigned long long)arg3 serviceType:(int)arg4;
- (void).cxx_destruct;
@end
