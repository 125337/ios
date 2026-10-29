@interface OutputDepthData : NSObject
{
    float _median; // +0x8
    float _offset; // +0xc
    float _averageAngle; // +0x10
    NSArray * _five_points; // +0x18
    NSData * _depth_data; // +0x20
    NSData * _image_data; // +0x28
    NSString * _checksum; // +0x30
    long long _capture_time; // +0x38
}
- (id)dictionaryRepresentation;
- (id)five_points;
- (void)setFive_points:(id)arg1;
- (id)depth_data;
- (void)setDepth_data:(id)arg1;
- (id)image_data;
- (void)setImage_data:(id)arg1;
- (id)checksum;
- (void)setChecksum:(id)arg1;
- (long long)capture_time;
- (void)setCapture_time:(long long)arg1;
- (float)median;
- (void)setMedian:(float)arg1;
- (float)offset;
- (void)setOffset:(float)arg1;
- (float)averageAngle;
- (void)setAverageAngle:(float)arg1;
- (void).cxx_destruct;
@end

