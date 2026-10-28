@interface MMAssetUtil : NSObject
+ (double)getAssetViewMarginCurOri;
+ (double)getAssetViewMarginCurOriNew:(BOOL)arg1;
+ (long long)getAssetColumnCurOri;
+ (long long)getAssetColumnCurOriNew:(BOOL)arg1;
+ (double)getAssetViewLenWithWidth:(double)arg1;
+ (double)getFileBrowserAssetViewLenWithWidth:(double)arg1;
+ (double)getAssetViewPaddingMarginNew:(BOOL)arg1;
+ (BOOL)isLongImage:(CGSize)arg1;
+ (CGSize)getNormalImageSizeWithOriginImageSize:(CGSize)arg1 targetSize:(CGSize)arg2;
+ (id)compressSquareImage:(id)arg1;
+ (id)getPrimaryColorForPreviewEditScene:(int)arg1;
+ (id)getPrimaryColorForPickerScene:(int)arg1;
+ (id)generateMergedImageFromImageList:(id)arg1 forSize:(CGSize)arg2 rounded:(BOOL)arg3;
@end
