@interface PLzmaSDKOutStream : NSObject
{
    SharedPtr<plzma::OutStream> _outStream; // +0x8
}
- (const void *)outStreamSPtr;
- (BOOL)isMulti;
- (BOOL)opened;
- (id)copyContent;
- (BOOL)erase:(unsigned char)arg1;
- (id)initWithOutStreamM:(void *)arg1;
- (id)initWithOutStreamMTh:(void *)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

