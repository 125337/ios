@interface PLzmaSDKOutMultiStream : PLzmaSDKOutStream
- (BOOL)isMulti;
- (id)streams;
- (id)initWithDirectoryPath:(id)arg1 partName:(id)arg2 partExtension:(id)arg3 format:(unsigned char)arg4 andPartSize:(unsigned int)arg5;
- (id)initWithPartSize:(unsigned int)arg1;
@end

