@interface OVCImageTrack : NSObject
{
    SharedPtr<XMFImageTrack> _backingImageTrack; // +0x8
}
- (id)initWithBackingImageTrack:(const void *)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)codecIDName;
- (CGSize)pixelSize;
- (id)pixelFormatName;
- (unsigned long long)aspectRatio;
- (unsigned long long)orientation;
- (SharedPtr<XMFImageTrack>)backingImageTrack;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

