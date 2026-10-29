@interface TencentLBSCalman : NSObject
{
    int _minAccuracy; // +0x8
    float _Q_metres_per_second; // +0xc
    double _lat; // +0x10
    double _lng; // +0x18
    double _q; // +0x20
    double _r; // +0x28
    double _x; // +0x30
    double _p; // +0x38
    long long _TimeStamp_milliseconds; // +0x40
    double _variance; // +0x48
}
- (id)init;
- (void)reset;
- (double)calmanDistancePredict:(double)arg1;
- (void)calmanLocationPredictWithLat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 timestamp:(long long)arg4 speed:(double)arg5;
- (double)lat;
- (void)setLat:(double)arg1;
- (double)lng;
- (void)setLng:(double)arg1;
- (int)minAccuracy;
- (void)setMinAccuracy:(int)arg1;
- (double)q;
- (void)setQ:(double)arg1;
- (double)r;
- (void)setR:(double)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)p;
- (void)setP:(double)arg1;
- (float)Q_metres_per_second;
- (void)setQ_metres_per_second:(float)arg1;
- (long long)TimeStamp_milliseconds;
- (void)setTimeStamp_milliseconds:(long long)arg1;
- (double)variance;
- (void)setVariance:(double)arg1;
@end

