@interface MessageImageUtil : NSObject
+ (id)genThumbnailImage:(id)arg1;
+ (id)genThumbnailImage:(id)arg1 maxSize:(CGSize)arg2;
+ (BOOL)isProgressiveImage:(id)arg1;
+ (BOOL)isProgressiveImageData:(id)arg1;
+ (BOOL)isMiddleImgDownload:(id)arg1;
+ (BOOL)isHDImageDownloaded:(id)arg1;
@end
