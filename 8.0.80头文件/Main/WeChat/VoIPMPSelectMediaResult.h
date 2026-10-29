@interface VoIPMPSelectMediaResult : NSObject
{
    NSString * _previewType; // +0x8
    NSString * _assetToken; // +0x10
    NSNumber * _assetCount; // +0x18
    NSNumber * _initialIndex; // +0x20
    NSArray * _mediaPaths; // +0x28
    NSArray * _mediaTypes; // +0x30
    NSArray * _mediaMd5s; // +0x38
}
+ (id)makeWithPreviewType:(id)arg1 assetToken:(id)arg2 assetCount:(id)arg3 initialIndex:(id)arg4 mediaPaths:(id)arg5 mediaTypes:(id)arg6 mediaMd5s:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)previewType;
- (void)setPreviewType:(id)arg1;
- (id)assetToken;
- (void)setAssetToken:(id)arg1;
- (id)assetCount;
- (void)setAssetCount:(id)arg1;
- (id)initialIndex;
- (void)setInitialIndex:(id)arg1;
- (id)mediaPaths;
- (void)setMediaPaths:(id)arg1;
- (id)mediaTypes;
- (void)setMediaTypes:(id)arg1;
- (id)mediaMd5s;
- (void)setMediaMd5s:(id)arg1;
- (void).cxx_destruct;
@end
