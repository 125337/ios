@interface WCFinderVideoProducerPreloadConfigs : NSObject <NSCopying>
{
    long long _maxConcurrencyLimit; // +0x8
    long long _maxCacheSizeLimit; // +0x10
    long long _templateBufferCount; // +0x18
    long long _musicBufferCount; // +0x20
    unsigned long long _preloadRules; // +0x28
}
+ (id)createFromConfigJson:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (long long)maxConcurrencyLimit;
- (void)setMaxConcurrencyLimit:(long long)arg1;
- (long long)maxCacheSizeLimit;
- (void)setMaxCacheSizeLimit:(long long)arg1;
- (long long)templateBufferCount;
- (void)setTemplateBufferCount:(long long)arg1;
- (long long)musicBufferCount;
- (void)setMusicBufferCount:(long long)arg1;
- (unsigned long long)preloadRules;
- (void)setPreloadRules:(unsigned long long)arg1;
@end
