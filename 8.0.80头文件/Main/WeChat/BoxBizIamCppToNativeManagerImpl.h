@interface BoxBizIamCppToNativeManagerImpl : NSObject <BoxIamBizCppToNativeManagerBase>
{
    BoxIamBizCppToNativeManagerCallback * m_callBack; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)sendMessageAsync:(unsigned long long)arg1 request:(id)arg2;
- (id)syncSendMessage:(id)arg1;
- (void)getMeTabOpenStateAsync:(unsigned long long)arg1;
- (void)getWebDraftAsync:(unsigned long long)arg1 draftType:(int)arg2 scene:(id)arg3;
- (void)deleteWebDraftAsync:(unsigned long long)arg1 draftType:(int)arg2 scene:(id)arg3;
- (id)getEditorWXFilePath:(id)arg1;
- (id)getEditorLocalPath:(id)arg1;
- (void)getDraftStateAsync:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
