@interface OVCVideoTrack : NSObject
{
    SharedPtr<XMFVideoTrack> _backingVideoTrack; // +0x8
}
- (id)initWithBackingVideoTrack:(const void *)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)codecID;
- (id)codecProfile;
- (id)codecLevel;
- (CGSize)pixelSize;
- (id)pixelFormatNama;
- (id)pixelColorTypeName;
- (unsigned long long)colorPrimaries;
- (id)colorPrimariesName;
- (unsigned long long)aspectRatio;
- (unsigned long long)orientation;
- (float)frameRate;
- (id)frameRateName;
- (unsigned long long)imagePackingType;
- (long long)averageBitrate;
- (SharedPtr<XMFVideoTrack>)backingVideoTrack;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
