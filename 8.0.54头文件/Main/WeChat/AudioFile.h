@interface AudioFile : NSObject <AudioDataRead>
{
    NSFileHandle * m_fhFile; // +0x8
    unsigned int m_uiDataWrited; // +0x10
}
- (id)init;
- (void)dealloc;
- (BOOL)create:(id)arg1;
- (BOOL)open:(id)arg1;
- (BOOL)read:(id)arg1;
- (void)close;
- (unsigned int)seekToEnd;
- (unsigned int)getLength;
- (BOOL)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (BOOL)writeBytes:(unsigned int)arg1 len:(unsigned int)arg2 buffer:(void *)arg3;
- (BOOL)writeBytes:(unsigned int)arg1 len:(unsigned int)arg2 buffer:(void *)arg3 sync:(BOOL)arg4;
- (void)flush;
- (void).cxx_destruct;
@end

