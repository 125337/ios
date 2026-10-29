@interface CameraScanGoodsImageProcessor : NSObject
+ (id)generateCVMat:(__CVBuffer *)arg1 codeDetection:(BOOL)arg2 enableMem:(BOOL)arg3;
+ (id)generateMinLen:(int)arg1 CVMat:(Mat)arg2;
+ (id)generateCroppedImage:(CGRect)arg1 CVMat:(Mat)arg2;
+ (id)genUploadImageData:(id)arg1 outputImageSize:(CGSize *)arg2;
+ (id)genUploadWebpData:(id)arg1;
+ (id)genUploadWXAMData:(id)arg1;
+ (id)imageFromMat:(const Mat *)arg1;
@end
