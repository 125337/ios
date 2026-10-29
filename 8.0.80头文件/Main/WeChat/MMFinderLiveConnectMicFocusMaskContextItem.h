@interface MMFinderLiveConnectMicFocusMaskContextItem : NSObject
{
    BOOL _isRemove; // +0x8
    unsigned long long _index; // +0x10
    CGRect _rect; // +0x18
}
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)isRemove;
- (void)setIsRemove:(BOOL)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
@end
