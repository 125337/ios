@interface GCDWebServerFileResponse : GCDWebServerResponse
{
    NSString * _path; // +0x8
    unsigned long long _offset; // +0x10
    unsigned long long _size; // +0x18
    int _file; // +0x20
}
+ (id)responseWithFile:(id)arg1;
+ (id)responseWithFile:(id)arg1 isAttachment:(BOOL)arg2;
+ (id)responseWithFile:(id)arg1 byteRange:(_NSRange)arg2;
+ (id)responseWithFile:(id)arg1 byteRange:(_NSRange)arg2 isAttachment:(BOOL)arg3;
- (id)initWithFile:(id)arg1;
- (id)initWithFile:(id)arg1 isAttachment:(BOOL)arg2;
- (id)initWithFile:(id)arg1 byteRange:(_NSRange)arg2;
- (id)initWithFile:(id)arg1 byteRange:(_NSRange)arg2 isAttachment:(BOOL)arg3;
- (BOOL)open:(id *)arg1;
- (id)readData:(id *)arg1;
- (void)close;
- (id)description;
- (void).cxx_destruct;
@end
