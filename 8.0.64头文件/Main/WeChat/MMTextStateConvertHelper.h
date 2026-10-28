@interface MMTextStateConvertHelper : NSObject
+ (id)syncGetDataItemWithImageInfo:(id)arg1 screenSize:(CGSize)arg2;
+ (id)syncGetLivePhotoDataItemWithInfo:(id)arg1 videoUrl:(id)arg2 screenSize:(CGSize)arg3;
+ (id)imageResize:(id)arg1 andResizeConstraint:(CGSize)arg2;
+ (id)compressThumbImageForData:(id)arg1;
+ (id)compressOriginImageForData:(id)arg1;
+ (id)getDataItemFromUserName:(id)arg1;
+ (id)getDataItemFromUserName:(id)arg1 model:(id)arg2;
+ (id)getDataItemFromUserName:(id)arg1 model:(id)arg2 ignoreModifyTime:(BOOL)arg3;
@end
