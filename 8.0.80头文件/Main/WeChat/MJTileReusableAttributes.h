@interface MJTileReusableAttributes : NSObject
{
    CGRect _frame; // +0x8
    struct _timeRange; // +0x28
}
- (id)initWithTimeRange:(struct)arg1 frame:(CGRect)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct)timeRange;
- (CGRect)frame;
@end
