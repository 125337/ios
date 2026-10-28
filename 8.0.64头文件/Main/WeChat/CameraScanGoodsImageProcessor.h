@interface CameraScanGoodsImageProcessor : NSObject
+ (id)generateCVMat:(__CVBuffer *)arg1 enableMem:(BOOL)arg2;
+ (id)generateMinLen:(int)arg1 CVMat:(Mat)arg2;
+ (id)generateCroppedImage:(CGRect)arg1 CVMat:(Mat)arg2;
+ (id)genUploadImageData:(id)arg1 outputImageSize:(CGSize *)arg2;
+ (id)genUploadWebpData:(id)arg1;
+ (id)genUploadWXAMData:(id)arg1;
@end
