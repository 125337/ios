@interface OMJAIGCExplicitInputAsset : NSObject
{
    NSString * _assetID; // +0x8
    NSString * _mediaFilePath; // +0x10
    unsigned long long _mediaType; // +0x18
    long long _videoUploadMode; // +0x20
    NSNumber * _snapshotTimeSeconds; // +0x28
}
- (id)initWithAssetID:(id)arg1 mediaFilePath:(id)arg2 mediaType:(unsigned long long)arg3;
- (id)initWithAssetID:(id)arg1 mediaFilePath:(id)arg2 mediaType:(unsigned long long)arg3 videoUploadMode:(long long)arg4 snapshotTimeSeconds:(id)arg5;
- (id)assetID;
- (id)mediaFilePath;
- (unsigned long long)mediaType;
- (long long)videoUploadMode;
- (id)snapshotTimeSeconds;
- (void).cxx_destruct;
@end
