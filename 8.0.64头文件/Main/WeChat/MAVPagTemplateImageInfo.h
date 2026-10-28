@interface MAVPagTemplateImageInfo : NSObject
{
    int _index; // +0x8
    struct _timeRange; // +0xc
}
- (id)initWithIndex:(int)arg1 timeRange:(struct)arg2;
- (int)index;
- (void)setIndex:(int)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
@end
