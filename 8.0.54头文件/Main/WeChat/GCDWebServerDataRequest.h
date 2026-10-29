@interface GCDWebServerDataRequest : GCDWebServerRequest
{
    NSMutableData * _data; // +0x8
    NSString * _text; // +0x10
    id _jsonObject; // +0x18
}
- (id)text;
- (id)jsonObject;
- (BOOL)open:(id *)arg1;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (BOOL)close:(id *)arg1;
- (id)description;
- (id)data;
- (void).cxx_destruct;
@end

