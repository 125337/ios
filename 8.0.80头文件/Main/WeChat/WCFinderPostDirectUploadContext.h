@interface WCFinderPostDirectUploadContext : NSObject
{
    NSString * _originFilePath; // +0x8
    WCFinderPostStaticSnapshot * _staticSnapshot; // +0x10
    WCFinderPostUploadSpeedSnapshot * _uploadSpeedSnapshot; // +0x18
    NSString * _deviceModel; // +0x20
    VideoEncodeTargetInfo * _encodingTargetInfo; // +0x28
}
- (id)initWithOriginFilePath:(id)arg1 staticSnapshot:(id)arg2;
- (id)initWithOriginFilePath:(id)arg1 staticSnapshot:(id)arg2 uploadSpeedSnapshot:(id)arg3 deviceModel:(id)arg4;
- (id)initWithOriginFilePath:(id)arg1 staticSnapshot:(id)arg2 uploadSpeedSnapshot:(id)arg3 deviceModel:(id)arg4 encodingTargetInfo:(id)arg5;
- (id)description;
- (id)originFilePath;
- (id)staticSnapshot;
- (id)uploadSpeedSnapshot;
- (id)deviceModel;
- (id)encodingTargetInfo;
- (void).cxx_destruct;
@end
