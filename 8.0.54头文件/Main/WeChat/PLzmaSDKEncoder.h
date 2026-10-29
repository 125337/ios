@interface PLzmaSDKEncoder : NSObject <PLzmaSDKProgressDelegatePrivate>
{
    SharedPtr<plzma::Encoder> _encoder; // +0x8
    shared_ptr<PLzmaSDKProgressDelegate> _progressDelegate; // +0x10
    id <PLzmaSDKEncoderDelegate> _delegate; // +0x20
}
- (void)onCPath:(const char *)arg1 progress:(double)arg2;
- (BOOL)shouldCreateSolidArchive;
- (void)setShouldCreateSolidArchive:(BOOL)arg1;
- (unsigned char)compressionLevel;
- (void)setCompressionLevel:(unsigned char)arg1;
- (BOOL)shouldCompressHeader;
- (void)setShouldCompressHeader:(BOOL)arg1;
- (BOOL)shouldCompressHeaderFull;
- (void)setShouldCompressHeaderFull:(BOOL)arg1;
- (BOOL)shouldEncryptContent;
- (void)setShouldEncryptContent:(BOOL)arg1;
- (BOOL)shouldEncryptHeader;
- (void)setShouldEncryptHeader:(BOOL)arg1;
- (BOOL)shouldStoreCreationTime;
- (void)setShouldStoreCreationTime:(BOOL)arg1;
- (BOOL)shouldStoreAccessTime;
- (void)setShouldStoreAccessTime:(BOOL)arg1;
- (BOOL)shouldStoreModificationTime;
- (void)setShouldStoreModificationTime:(BOOL)arg1;
- (BOOL)open;
- (void)abort;
- (BOOL)compress;
- (void)addPath:(id)arg1 withMode:(unsigned char)arg2;
- (void)addPath:(id)arg1 withMode:(unsigned char)arg2 andArchivePath:(id)arg3;
- (void)addStream:(id)arg1 withArchivePath:(id)arg2;
- (void)setPassword:(id)arg1;
- (id)initWithStream:(id)arg1 fileType:(unsigned char)arg2 method:(unsigned char)arg3 andDelegate:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

