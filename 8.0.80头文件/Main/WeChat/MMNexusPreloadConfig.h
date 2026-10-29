@interface MMNexusPreloadConfig : NSObject
+ (unsigned long long)totalLimit;
+ (void)setTotalLimit:(unsigned long long)arg1;
+ (void)loadFromCliCfgIfAvailable;
@end
