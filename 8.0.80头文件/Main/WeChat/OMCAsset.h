@interface OMCAsset : NSObject
{
    unsigned long long _livePhotoUsage; // +0x8
    PHAsset * _phAsset; // +0x10
}
- (id)initWithPHAsset:(id)arg1;
- (id)initWithPHAsset:(id)arg1 livePhotoUsage:(unsigned long long)arg2;
- (id)phLocalIdentifier;
- (BOOL)isMediaSubtypeLivePhoto;
- (id)description;
- (unsigned long long)livePhotoUsage;
- (id)phAsset;
- (void).cxx_destruct;
@end
