@interface WCSVGImage : NSObject
{
    WCSVGCanvas * _mainCanvas; // +0x8
    CGRect _viewBox; // +0x10
}
+ (id)imageData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 color:(id)arg2;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3 rotate:(double)arg4;
+ (id)imageNamed:(id)arg1 size:(CGSize)arg2;
+ (id)imageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
+ (id)imageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4 rotate:(double)arg5;
+ (id)imageWithContentsOfFile:(id)arg1 size:(CGSize)arg2 color:(id)arg3 alpha:(double)arg4 rotate:(double)arg5;
+ (id)adaptedWeSVGImageWithName:(id)arg1 data:(id)arg2 config:(id)arg3;
+ (id)imageData:(id)arg1 fromConfig:(id)arg2;
+ (id)svgDataWithName:(id)arg1;
+ (id)imageNamed:(id)arg1 fromConfig:(id)arg2;
- (CGSize)size;
- (id)mainCanvas;
- (void)setMainCanvas:(id)arg1;
- (CGRect)viewBox;
- (void)setViewBox:(CGRect)arg1;
- (void).cxx_destruct;
@end
