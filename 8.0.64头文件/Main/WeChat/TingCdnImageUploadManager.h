@interface TingCdnImageUploadManager : NSObject <ICdnComMgrExt>
{
    NSMutableDictionary * _uploadingMetaDict; // +0x8
    NSMutableArray * _uploadWaitingArray; // +0x10
}
- (id)init;
- (void)registerExt;
- (void)startUploadImagePath:(id)arg1 complection:(id /* block */)arg2;
- (void)checkQueue;
- (void)doCdnImageUploadWithMeta:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)uploadingMetaDict;
- (void)setUploadingMetaDict:(id)arg1;
- (id)uploadWaitingArray;
- (void)setUploadWaitingArray:(id)arg1;
- (void).cxx_destruct;
@end
