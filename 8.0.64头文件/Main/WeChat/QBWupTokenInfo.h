@interface QBWupTokenInfo : NSObject <NSCoding>
{
    NSString * _token; // +0x8
    NSString * _aesKey; // +0x10
    long long _maxage; // +0x18
    double _saveTime; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)token;
- (void)setToken:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (long long)maxage;
- (void)setMaxage:(long long)arg1;
- (double)saveTime;
- (void)setSaveTime:(double)arg1;
@end
