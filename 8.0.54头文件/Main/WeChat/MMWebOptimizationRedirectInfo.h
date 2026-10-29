@interface MMWebOptimizationRedirectInfo : MMObject <PBCoding>
{
    unsigned int _maxCacheTime; // +0x8
    unsigned int _lastModifiedTime; // +0xc
    NSString * _identifier; // +0x10
    NSString * _referUrl; // +0x18
    NSString * _redirectUrl; // +0x20
}
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_referUrl;
+ (void)PBArrayAdd_redirectUrl;
+ (void)PBArrayAdd_maxCacheTime;
+ (void)PBArrayAdd_lastModifiedTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)referUrl;
- (void)setReferUrl:(id)arg1;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg1;
- (unsigned int)maxCacheTime;
- (void)setMaxCacheTime:(unsigned int)arg1;
- (unsigned int)lastModifiedTime;
- (void)setLastModifiedTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

