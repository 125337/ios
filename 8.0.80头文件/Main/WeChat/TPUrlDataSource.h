@interface TPUrlDataSource : NSObject
{
    int _playId; // +0x8
    NSString * _originUrl; // +0x10
    NSString * _thumbPlayerUrl; // +0x18
    NSString * _systemPlayerUrl; // +0x20
    NSDictionary * _httpHeader; // +0x28
}
- (id)initWithOriginUrl:(id)arg1 thumbPlayerUrl:(id)arg2 systemPlayerUrl:(id)arg3 httpHeader:(id)arg4;
- (BOOL)isValid;
- (int)playId;
- (void)setPlayId:(int)arg1;
- (id)originUrl;
- (void)setOriginUrl:(id)arg1;
- (id)thumbPlayerUrl;
- (void)setThumbPlayerUrl:(id)arg1;
- (id)systemPlayerUrl;
- (void)setSystemPlayerUrl:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (void).cxx_destruct;
@end
