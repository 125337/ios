@interface WCUrl : NSObject <NSCoding, PBCoding>
{
    int _encIdx; // +0x8
    NSString * _url; // +0x10
    long long _type; // +0x18
    NSString * _md5; // +0x20
    unsigned long long _enckey; // +0x28
    NSString * _encryptKey; // +0x30
    NSString * _token; // +0x38
    NSString * _videomd5; // +0x40
}
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_videomd5;
+ (void)PBArrayAdd_encryptKey;
+ (void)initialize;
+ (id)UrlWithUrl:(id)arg1 type:(long long)arg2;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)enckey;
- (void)setEnckey:(unsigned long long)arg1;
- (int)encIdx;
- (void)setEncIdx:(int)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)videomd5;
- (void)setVideomd5:(id)arg1;
- (void).cxx_destruct;
@end

