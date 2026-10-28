@interface GCDWebServerGZipEncoder : GCDWebServerBodyEncoder
{
    z_stream_s _stream; // +0x18
    BOOL _finished; // +0x88
}
- (id)initWithResponse:(id)arg1 reader:(id)arg2;
- (BOOL)open:(id *)arg1;
- (id)readData:(id *)arg1;
- (void)close;
@end
