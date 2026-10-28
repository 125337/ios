@interface ImageBrowserUtils : NSObject
+ (void)animSetViews:(id)arg1 hidden:(BOOL)arg2;
+ (void)animSetViews:(id)arg1 hidden:(BOOL)arg2 duration:(double)arg3;
+ (id)localImageSaveReportQueue;
+ (void)reportLocalImageSaveWithMsg:(id)arg1 imagePath:(id)arg2;
+ (void)reportLocalImageSaveWithMsg:(id)arg1 image:(id)arg2 qrCodeUrl:(id)arg3;
+ (void)reportLocalVideoSaveWithMsg:(id)arg1 videoPath:(id)arg2;
+ (void)reportLocalVideoSaveWithMsg:(id)arg1 videoSize:(CGSize)arg2;
@end
