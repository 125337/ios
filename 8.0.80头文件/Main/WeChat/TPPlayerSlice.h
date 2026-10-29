@interface TPPlayerSlice : NSObject <NSCopying>
{
    NSURL * _url; // +0x8
    NSDictionary * _httpHeader; // +0x10
    long long _durationUs; // +0x18
}
+ (id)build:(id /* block */)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (long long)durationUs;
- (void)setDurationUs:(long long)arg1;
- (void).cxx_destruct;
@end
