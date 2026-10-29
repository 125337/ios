@interface WXLocationObject : NSObject
{
    double lat; // +0x8
    double lng; // +0x10
}
+ (id)object;
- (id)init;
- (double)lat;
- (void)setLat:(double)arg1;
- (double)lng;
- (void)setLng:(double)arg1;
@end

