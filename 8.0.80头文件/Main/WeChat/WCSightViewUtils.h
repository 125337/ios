@interface WCSightViewUtils : NSObject
+ (CGSize)sightViewSizeWithMediaItem:(id)arg1;
+ (CGSize)sightViewSizeWithMediaItem:(id)arg1 isAd:(BOOL)arg2;
+ (CGSize)sightViewSizeWithMediaItem:(id)arg1 isFullPlay:(BOOL)arg2;
+ (CGSize)thumbImageSizeWithMediaItem:(id)arg1;
+ (CGSize)sightViewSizeWithImgSize:(CGSize)arg1 isAd:(BOOL)arg2 mediaType:(long long)arg3;
+ (CGSize)sightViewSizeWithImgSize:(CGSize)arg1 isAd:(BOOL)arg2 mediaType:(long long)arg3 isFullPlay:(BOOL)arg4 mediaTid:(id)arg5;
+ (CGSize)getImageSize:(CGSize)arg1 mediaType:(long long)arg2;
+ (double)getSightMaxLength;
+ (int)fetchVerticalDisplayTypeWithTid:(id)arg1;
@end
