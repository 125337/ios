@interface GCDWebServerBodyDecoder : NSObject <GCDWebServerBodyWriter>
{
    GCDWebServerRequest * _request; // +0x8
    id <GCDWebServerBodyWriter> _writer; // +0x10
}
- (id)initWithRequest:(id)arg1 writer:(id)arg2;
- (BOOL)open:(id *)arg1;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (BOOL)close:(id *)arg1;
@end
