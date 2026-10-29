@interface TXCVideoCaptureConfig : NSObject <NSCopying>
{
    NSNumber * _frameRate; // +0x8
    NSString * _selectedDeviceId; // +0x10
    NSValue * _resolution; // +0x18
    NSValue * _encodeExpectResolution; // +0x20
    NSString * _appGroupId; // +0x28
    UIImage * _stillImage; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setFrameRate:(id)arg1;
- (id)init;
- (id)frameRate;
- (id)selectedDeviceId;
- (void)setSelectedDeviceId:(id)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (id)encodeExpectResolution;
- (void)setEncodeExpectResolution:(id)arg1;
- (id)appGroupId;
- (void)setAppGroupId:(id)arg1;
- (id)stillImage;
- (void)setStillImage:(id)arg1;
- (void).cxx_destruct;
@end
