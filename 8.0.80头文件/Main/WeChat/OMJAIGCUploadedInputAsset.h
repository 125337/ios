@interface OMJAIGCUploadedInputAsset : NSObject
{
    NSString * _assetID; // +0x8
    unsigned long long _inputIndex; // +0x10
    long long _processingMode; // +0x18
    unsigned long long _mediaType; // +0x20
    NSString * _localFilePath; // +0x28
    NSString * _cdnURL; // +0x30
}
- (id)initWithAssetID:(id)arg1 inputIndex:(unsigned long long)arg2 processingMode:(long long)arg3 mediaType:(unsigned long long)arg4 localFilePath:(id)arg5 cdnURL:(id)arg6;
- (id)assetID;
- (unsigned long long)inputIndex;
- (long long)processingMode;
- (unsigned long long)mediaType;
- (id)localFilePath;
- (id)cdnURL;
- (void).cxx_destruct;
@end
