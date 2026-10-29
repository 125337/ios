@interface OMJAssetInfo : NSObject
{
    BOOL _isLivePhoto; // +0x8
    unsigned long long _livePhotoUsage; // +0x10
    double _livePhotoPreferredFrameTime; // +0x18
    shared_ptr<XMJAssetInfo> _backingInfo; // +0x20
}
+ (id)assetInfoWithPHAsset:(id)arg1 error:(id *)arg2;
+ (id)assetInfoWithPHAsset:(id)arg1 livePhotoUsage:(unsigned long long)arg2 error:(id *)arg3;
+ (id)assetInfoWithPHAsset:(id)arg1 livePhotoUsage:(unsigned long long)arg2 livePhotoPreferredFrameTime:(double)arg3 error:(id *)arg4;
+ (id)assetInfoWithPHAsset:(id)arg1 livePhotoUsage:(unsigned long long)arg2 livePhotoPreferredFrameTime:(double)arg3 uuid:(id)arg4 error:(id *)arg5;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 livePhotoUsage:(unsigned long long)arg2 error:(id *)arg3;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 livePhotoUsage:(unsigned long long)arg2 uuid:(id)arg3 error:(id *)arg4;
+ (id)assetInfoWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
+ (id)assetInfoWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 uuid:(id)arg4 error:(id *)arg5;
+ (id)assetInfoWithLivePhotoImagePath:(id)arg1 videoPath:(id)arg2 livePhotoUsage:(unsigned long long)arg3 livePhotoPreferredFrameTime:(double)arg4 uuid:(id)arg5 error:(id *)arg6;
- (id)initWithBackingAssetInfo:(shared_ptr<XMJAssetInfo>)arg1;
- (id)localIdentifier;
- (id)mediaFilePath;
- (id)videoFilePath;
- (id)uuid;
- (long long)mediaType;
- (id)description;
- (unsigned long long)livePhotoUsage;
- (BOOL)isLivePhoto;
- (double)livePhotoPreferredFrameTime;
- (shared_ptr<XMJAssetInfo>)backingInfo;
- (void)setBackingInfo:(shared_ptr<XMJAssetInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
