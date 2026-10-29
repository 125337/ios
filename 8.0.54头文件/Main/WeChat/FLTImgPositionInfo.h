@interface FLTImgPositionInfo : NSObject
{
    NSNumber * _width; // +0x8
    NSNumber * _height; // +0x10
    NSNumber * _offsetX; // +0x18
    NSNumber * _offsetY; // +0x20
}
+ (id)makeWithWidth:(id)arg1 height:(id)arg2 offsetX:(id)arg3 offsetY:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)offsetX;
- (void)setOffsetX:(id)arg1;
- (id)offsetY;
- (void)setOffsetY:(id)arg1;
- (void).cxx_destruct;
@end

