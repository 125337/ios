@interface GCDWebServerGZipDecoder : GCDWebServerBodyDecoder
{
    z_stream_s _stream; // +0x18
    BOOL _finished; // +0x88
}
- (BOOL)open:(id *)arg1;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (BOOL)close:(id *)arg1;
@end

