@interface MMLongImageUtil : NSObject
+ (void)saveImageToAlbum:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)saveImageToAlbum:(id)arg1 exifUserComment:(id)arg2 viewController:(id)arg3 completion:(id /* block */)arg4;
+ (void)saveImageInFragment:(id)arg1 exifUserComment:(id)arg2 viewController:(id)arg3 completion:(id /* block */)arg4;
+ (id)genArrImageFromImage:(id)arg1;
+ (BOOL)checkImageHeightOverLimitPixel:(id)arg1;
@end
