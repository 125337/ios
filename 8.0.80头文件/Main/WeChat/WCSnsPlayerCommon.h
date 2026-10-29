@interface WCSnsPlayerCommon : NSObject
+ (BOOL)isPlayerSceneOfMoments:(unsigned long long)arg1;
+ (BOOL)allowsH265Download;
+ (id)getPlayerWith:(id)arg1 andIsMute:(BOOL)arg2 notExistPlayMode:(unsigned long long)arg3 andPlayerScene:(unsigned long long)arg4;
+ (id)generatePlayerArgsWithMediaItem:(id)arg1 isMuted:(BOOL)arg2 playMode:(unsigned long long)arg3 playerScene:(unsigned long long)arg4 downloadArgs:(id)arg5;
+ (id)generatePlayerArgsWithLocalLivePhotoPath:(id)arg1 isMuted:(BOOL)arg2 playerScene:(unsigned long long)arg3;
+ (void)setupLivePhotoPlayerArgs:(id)arg1;
+ (void)setupLivePhotoPlayerArgs:(id)arg1 withMainMediaItem:(id)arg2;
+ (int)effectiveSharpenValueForMediaItem:(id)arg1 switchValue:(int)arg2 playerScene:(unsigned long long)arg3 isHDRVideo:(BOOL)arg4;
+ (id)generateDownloadArgsWrapWithMediaItem:(id)arg1 source:(long long)arg2 HDRFormat:(long long)arg3 playerScene:(unsigned long long)arg4;
+ (id)generateFileKeyWithMediaItem:(id)arg1 source:(long long)arg2;
+ (id)parseMediaIDFromFileKey:(id)arg1;
+ (id)getDownloadReferUrlWithScene:(long long)arg1;
+ (id)getImageWith:(id)arg1;
@end
