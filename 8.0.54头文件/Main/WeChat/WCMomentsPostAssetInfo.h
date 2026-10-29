@interface WCMomentsPostAssetInfo : NSObject <NSCopying>
{
    BOOL _isEdited; // +0x8
    BOOL _isLivePhoto; // +0x9
    BOOL _livePhotoOpt; // +0xa
    NSString * _assetId; // +0x10
    long long _assetType; // +0x18
    long long _mediaSource; // +0x20
    EditImageAttr * _imageEditAttr; // +0x28
    EditVideoAttr * _videoEditAttr; // +0x30
    NSString * _uploadHash; // +0x38
    CGSize _uploadMediaSize; // +0x40
}
- (id)initWithAssetId:(id)arg1 assetType:(long long)arg2 fromSource:(long long)arg3;
- (id)initWithAssetHash:(id)arg1 assetType:(long long)arg2 fromSource:(long long)arg3;
- (id)initWithImage:(id)arg1 fromSource:(long long)arg2;
- (id)initWithSightDraft:(id)arg1 fromSource:(long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)assetId;
- (void)setAssetId:(id)arg1;
- (long long)assetType;
- (void)setAssetType:(long long)arg1;
- (long long)mediaSource;
- (void)setMediaSource:(long long)arg1;
- (BOOL)isEdited;
- (void)setIsEdited:(BOOL)arg1;
- (id)imageEditAttr;
- (void)setImageEditAttr:(id)arg1;
- (id)videoEditAttr;
- (void)setVideoEditAttr:(id)arg1;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)livePhotoOpt;
- (void)setLivePhotoOpt:(BOOL)arg1;
- (id)uploadHash;
- (void)setUploadHash:(id)arg1;
- (CGSize)uploadMediaSize;
- (void)setUploadMediaSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

