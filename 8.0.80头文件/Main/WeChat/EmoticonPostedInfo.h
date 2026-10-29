@interface EmoticonPostedInfo : NSObject
{
    NSString * _md5; // +0x8
    NSData * _token; // +0x10
    NSString * _cdnUrl; // +0x18
}
- (id)init;
- (id)initWithInfo:(id)arg1 token:(id)arg2 cdnUrl:(id)arg3;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (void).cxx_destruct;
@end
