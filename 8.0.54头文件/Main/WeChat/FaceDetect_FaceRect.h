@interface FaceDetect_FaceRect : NSObject
{
    float _originX; // +0x8
    float _originY; // +0xc
    float _width; // +0x10
    float _height; // +0x14
}
- (id)initWithRect:(Rect)arg1;
- (id)initWithPara:(float)arg1 withY:(float)arg2 withWidth:(float)arg3 withHeight:(float)arg4;
- (id)wrapToDic;
- (float)originX;
- (void)setOriginX:(float)arg1;
- (float)originY;
- (void)setOriginY:(float)arg1;
- (float)width;
- (void)setWidth:(float)arg1;
- (float)height;
- (void)setHeight:(float)arg1;
@end

