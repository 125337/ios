@interface QBrandPromotionItem : NSObject <QGridItem>
{
    CLLocationCoordinate2D _coord; // +0x8
    struct _mapPoint; // +0x18
    int _min_level; // +0x28
    int _max_level; // +0x2c
    int _marker_width; // +0x30
    int _marker_height; // +0x34
    int _marker_anchor_x; // +0x38
    int _marker_anchor_y; // +0x3c
    int _rank; // +0x40
    NSString * _project_id; // +0x48
    double _latitude; // +0x50
    double _longitude; // +0x58
    long long _offline_time; // +0x60
    long long _online_time; // +0x68
    NSString * _day_pic_url; // +0x70
    NSString * _night_pic_url; // +0x78
}
- (id)initWithJSON:(id)arg1;
- (BOOL)isValid:(int)arg1 limitSizeMagnification:(int)arg2 limitMinLevel:(int)arg3 LimitMaxLevel:(int)arg4 currentZoomLevel:(int)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CLLocationCoordinate2D)coord;
- (struct)mapPoint;
- (id)project_id;
- (void)setProject_id:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (int)min_level;
- (void)setMin_level:(int)arg1;
- (int)max_level;
- (void)setMax_level:(int)arg1;
- (int)marker_width;
- (void)setMarker_width:(int)arg1;
- (int)marker_height;
- (void)setMarker_height:(int)arg1;
- (int)marker_anchor_x;
- (void)setMarker_anchor_x:(int)arg1;
- (int)marker_anchor_y;
- (void)setMarker_anchor_y:(int)arg1;
- (long long)offline_time;
- (void)setOffline_time:(long long)arg1;
- (long long)online_time;
- (void)setOnline_time:(long long)arg1;
- (id)day_pic_url;
- (void)setDay_pic_url:(id)arg1;
- (id)night_pic_url;
- (void)setNight_pic_url:(id)arg1;
- (int)rank;
- (void)setRank:(int)arg1;
- (void).cxx_destruct;
@end
