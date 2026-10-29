@interface WCFinderImageUploadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>
{
    NSMutableDictionary * _uploadDict; // +0x8
    NSMutableArray * _uploadWaitingArray; // +0x10
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)startUploadImagePath:(id)arg1 complection:(id /* block */)arg2;
- (void)startEncryptUploadImagePath:(id)arg1 cdnHeaderParamType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_startUploadImagePath:(id)arg1 cdnHeaderParamType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)cancelUploadImagePath:(id)arg1;
- (void)checkQueue;
- (void)realUploadImageWithMeta:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)uploadDict;
- (void)setUploadDict:(id)arg1;
- (id)uploadWaitingArray;
- (void)setUploadWaitingArray:(id)arg1;
- (void).cxx_destruct;
@end
