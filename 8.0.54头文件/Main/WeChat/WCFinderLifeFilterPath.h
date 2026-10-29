@interface WCFinderLifeFilterPath : NSObject
{
    long long _level; // +0x8
    NSArray * _tags; // +0x10
}
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPath:(id)arg1;
- (void)enumerateTabId:(id /* block */)arg1;
- (id)lastTag;
- (id)description;
- (id)tagEnumerator;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (id)tags;
- (void)setTags:(id)arg1;
- (void).cxx_destruct;
@end

