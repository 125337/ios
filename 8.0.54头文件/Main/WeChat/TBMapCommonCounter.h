@interface TBMapCommonCounter : NSObject
{
    int _mapCount; // +0x8
}
- (id)init;
- (void)increase;
- (int)getAndReset;
- (int)mapCount;
- (void)setMapCount:(int)arg1;
@end

