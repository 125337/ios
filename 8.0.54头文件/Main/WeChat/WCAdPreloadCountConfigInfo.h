@interface WCAdPreloadCountConfigInfo : NSObject
{
    unsigned int _preloadPageCount; // +0x8
    unsigned int _preloadResourceCount; // +0xc
}
- (id)initWithConfig:(id)arg1 shareFeed:(BOOL)arg2;
- (void)parseConfig:(id)arg1;
- (unsigned int)preloadPageCount;
- (unsigned int)preloadResourceCount;
@end

