@interface CRRequestBuilder : NSObject
{
    BOOL _compressBody; // +0x8
    NSString * _method; // +0x10
    NSURL * _URL; // +0x18
    NSString * _username; // +0x20
    NSString * _password; // +0x28
    NSData * _body; // +0x30
    NSMutableDictionary * _headers; // +0x38
}
- (id)init;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (BOOL)compressBody;
- (void)setCompressBody:(BOOL)arg1;
- (id)headers;
- (void)setHeaders:(id)arg1;
- (void).cxx_destruct;
@end
