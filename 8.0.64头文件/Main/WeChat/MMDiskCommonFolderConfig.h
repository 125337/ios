@interface MMDiskCommonFolderConfig : NSObject
{
    long long _defaultTime; // +0x8
    NSDictionary * _nextConfig; // +0x10
}
+ (id)desForStoreTime:(long long)arg1;
- (id)description;
- (long long)defaultTime;
- (void)setDefaultTime:(long long)arg1;
- (id)nextConfig;
- (void)setNextConfig:(id)arg1;
- (void).cxx_destruct;
@end
