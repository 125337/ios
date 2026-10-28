@interface TAVEmptyAssetGenerator : NSObject
+ (id)emptyVideoAsset;
+ (id)emptyAudioAsset;
+ (void)createAudioAssetIfNeed;
+ (void)createEmptyVideoAssetIfNeed;
+ (id)resourceUrlForFileName:(id)arg1 extension:(id)arg2;
@end
