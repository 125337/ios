@interface WCFinderLifeHomeFirstPageData : NSObject
{
    NSMutableArray * _pages; // +0x8
    NSArray * _rootTags; // +0x10
    long long _defaultSelectedIdx; // +0x18
    unsigned long long _extFlag; // +0x20
}
- (id)pages;
- (void)setPages:(id)arg1;
- (id)rootTags;
- (void)setRootTags:(id)arg1;
- (long long)defaultSelectedIdx;
- (void)setDefaultSelectedIdx:(long long)arg1;
- (unsigned long long)extFlag;
- (void)setExtFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

