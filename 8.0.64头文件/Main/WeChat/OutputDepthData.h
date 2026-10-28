@interface OutputDepthData : NSObject
{
    BOOL _depthQualityDetectPass; // +0x8
    float _median; // +0xc
    float _offset; // +0x10
    float _depthQualityScore; // +0x14
    float _closeMouthScore; // +0x18
    float _shakeThr; // +0x1c
    float _depth_eye_score; // +0x20
    float _depth_nose_score; // +0x24
    float _depth_mouth_score; // +0x28
    float _front_camera_fov; // +0x2c
    float _face_ratio; // +0x30
    int _depth_replace_count; // +0x34
    float _replaceScore; // +0x38
    NSArray * _five_points; // +0x40
    NSData * _depth_data; // +0x48
    NSData * _image_data; // +0x50
    NSString * _checksum; // +0x58
    long long _capture_time; // +0x60
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
- (float)depthQualityScore;
- (void)setDepthQualityScore:(float)arg1;
- (float)closeMouthScore;
- (void)setCloseMouthScore:(float)arg1;
- (BOOL)depthQualityDetectPass;
- (void)setDepthQualityDetectPass:(BOOL)arg1;
- (float)shakeThr;
- (void)setShakeThr:(float)arg1;
- (float)depth_eye_score;
- (void)setDepth_eye_score:(float)arg1;
- (float)depth_nose_score;
- (void)setDepth_nose_score:(float)arg1;
- (float)depth_mouth_score;
- (void)setDepth_mouth_score:(float)arg1;
- (float)front_camera_fov;
- (void)setFront_camera_fov:(float)arg1;
- (float)face_ratio;
- (void)setFace_ratio:(float)arg1;
- (int)depth_replace_count;
- (void)setDepth_replace_count:(int)arg1;
- (float)replaceScore;
- (void)setReplaceScore:(float)arg1;
- (void).cxx_destruct;
@end
