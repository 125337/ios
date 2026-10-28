@interface WCLivePhotoFilePathManager : NSObject
+ (id)cacheRootDir;
+ (id)getTempCachePath;
+ (id)getLivePhotoHEICPath:(id)arg1;
+ (id)getLivePhotoJPGPath:(id)arg1;
+ (id)getLivePhotoMovPath:(id)arg1;
+ (id)getImagePathWithFileName:(id)arg1;
@end
