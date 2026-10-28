@interface GCDWebServerBodyEncoder : NSObject <GCDWebServerBodyReader>
{
    GCDWebServerResponse * _response; // +0x8
    id <GCDWebServerBodyReader> _reader; // +0x10
}
- (id)initWithResponse:(id)arg1 reader:(id)arg2;
- (BOOL)open:(id *)arg1;
- (id)readData:(id *)arg1;
- (void)close;
@end
