@interface WCFinderHeadContactViewCacheItem : NSObject
{
    unsigned long long _viewLineType; // +0x8
    CGRect _viewFrame; // +0x10
}
+ (id)cacheItemWithView:(id)arg1;
- (unsigned long long)viewLineType;
- (void)setViewLineType:(unsigned long long)arg1;
- (CGRect)viewFrame;
- (void)setViewFrame:(CGRect)arg1;
@end
