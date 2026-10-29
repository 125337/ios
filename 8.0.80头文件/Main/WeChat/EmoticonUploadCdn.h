@interface EmoticonUploadCdn : MMObject <ICdnComMgrExt>
{
    id <EmoticonUploadCdnDelegate> _delegate; // +0x8
    CdnUploadEmojiInfo * _cdnInfo; // +0x10
}
- (id)initWithPassData:(id)arg1 uploadInfo:(id)arg2 delegate:(id)arg3;
- (void)startUpload;
- (void)stopUpload;
- (void)OnCdnUpload:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cdnInfo;
- (void)setCdnInfo:(id)arg1;
- (void).cxx_destruct;
@end
