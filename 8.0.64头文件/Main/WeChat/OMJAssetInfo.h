@interface OMJAssetInfo : NSObject
{
    BOOL _isLivePhoto; // +0x8
    unsigned long long _livePhotoUsage; // +0x10
    shared_ptr<XMJAssetInfo> _backingInfo; // +0x18
}
+ (id)assetInfoWithPHAsset:(id)arg1 error:(id *)arg2;
+ (id)assetInfoWithPHAsset:(id)arg1 livePhotoUsage:(unsigned long long)arg2 error:(id *)arg3;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 livePhotoUsage:(unsigned long long)arg2 error:(id *)arg3;
+ (id)assetInfoWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
- (id)initWithBackingAssetInfo:(shared_ptr<XMJAssetInfo>)arg1;
- (id)localIdentifier;
- (id)mediaFilePath;
- (long long)mediaType;
- (id)description;
- (unsigned long long)livePhotoUsage;
- (BOOL)isLivePhoto;
- (shared_ptr<XMJAssetInfo>)backingInfo;
- (void)setBackingInfo:(shared_ptr<XMJAssetInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
