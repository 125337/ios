@interface MMImageDetectUploader : NSObject <ICdnComMgrExt>
{
    id <MMImageDetectUploaderDelegate> _delegate; // +0x8
    NSMutableDictionary * _clientMsgID2ContextMap; // +0x10
    NSMutableDictionary * _clientMsgID2DetectMediaInfoMap; // +0x18
}
- (id)init;
- (void)startUploadImage:(id)arg1;
- (id)getValidImagePath:(id)arg1;
- (void)removeAllContexts;
- (void)notifyUplodFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)cdnMgrUploadContext:(id)arg1 detectMediaInfo:(id)arg2;
- (void)OnCdnUpload:(id)arg1;
- (id)genCdnMediaInfoWithDetectMediaInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)clientMsgID2ContextMap;
- (void)setClientMsgID2ContextMap:(id)arg1;
- (id)clientMsgID2DetectMediaInfoMap;
- (void)setClientMsgID2DetectMediaInfoMap:(id)arg1;
- (void).cxx_destruct;
@end
