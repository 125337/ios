@interface FLTPhotoCropInfo : NSObject
{
    double _translateX; // +0x8
    double _translateY; // +0x10
    double _scale; // +0x18
    FLTRect * _cropArea; // +0x20
    double _imageWidth; // +0x28
    double _imageHeight; // +0x30
}
+ (id)makeWithTranslateX:(double)arg1 translateY:(double)arg2 scale:(double)arg3 cropArea:(id)arg4 imageWidth:(double)arg5 imageHeight:(double)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)translateX;
- (void)setTranslateX:(double)arg1;
- (double)translateY;
- (void)setTranslateY:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)cropArea;
- (void)setCropArea:(id)arg1;
- (double)imageWidth;
- (void)setImageWidth:(double)arg1;
- (double)imageHeight;
- (void)setImageHeight:(double)arg1;
- (void).cxx_destruct;
@end

