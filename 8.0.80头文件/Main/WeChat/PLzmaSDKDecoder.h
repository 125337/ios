@interface PLzmaSDKDecoder : NSObject <PLzmaSDKProgressDelegatePrivate>
{
    SharedPtr<plzma::Decoder> _decoder; // +0x8
    shared_ptr<PLzmaSDKProgressDelegate> _progressDelegate; // +0x10
    id <PLzmaSDKDecoderDelegate> _delegate; // +0x20
}
- (void)onCPath:(const char *)arg1 progress:(double)arg2;
- (unsigned int)count;
- (id)items;
- (BOOL)open;
- (void)abort;
- (id)itemAt:(unsigned int)arg1;
- (BOOL)extractToPath:(id)arg1 withItemsFullPath:(BOOL)arg2;
- (BOOL)extractItems:(id)arg1 toPath:(id)arg2 withItemsFullPath:(BOOL)arg3;
- (BOOL)extractItemsToStreams:(id)arg1;
- (BOOL)testItems:(id)arg1;
- (BOOL)test;
- (void)setPassword:(id)arg1;
- (id)initWithStream:(id)arg1 fileType:(unsigned char)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
