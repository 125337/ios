@interface PLzmaSDKInStream : NSObject
{
    SharedPtr<plzma::InStream> _inStream; // +0x8
}
- (const void *)inStreamSPtr;
- (BOOL)opened;
- (BOOL)erase:(unsigned char)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithDataCopy:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithStreams:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
