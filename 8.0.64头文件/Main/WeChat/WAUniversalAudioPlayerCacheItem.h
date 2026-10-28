@interface WAUniversalAudioPlayerCacheItem : NSObject
{
    AVAudioPCMBuffer * _cache; // +0x8
    NSString * _identifier; // +0x10
    unsigned long long _totalBytes; // +0x18
    NSDate * _lastAccessDate; // +0x20
}
- (id)initWithCache:(id)arg1 identifier:(id)arg2;
- (id)accessCache;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)totalBytes;
- (void)setTotalBytes:(unsigned long long)arg1;
- (id)lastAccessDate;
- (void)setLastAccessDate:(id)arg1;
- (void).cxx_destruct;
@end
