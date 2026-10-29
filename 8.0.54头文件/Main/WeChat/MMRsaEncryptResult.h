@interface MMRsaEncryptResult : NSObject
{
    int _ret; // +0x8
    NSString * _base64Str; // +0x10
}
+ (id)RsaEncryptResultWithBase64Str:(id)arg1 ret:(int)arg2;
- (id)initWithBase64Str:(id)arg1 ret:(int)arg2;
- (id)description;
- (id)base64Str;
- (int)ret;
- (void).cxx_destruct;
@end

