@interface LVSnapshotInfo : NSObject
{
    FlutterStandardTypedData * _imageBytes; // +0x8
    NSNumber * _x; // +0x10
    NSNumber * _y; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
}
+ (id)makeWithImageBytes:(id)arg1 x:(id)arg2 y:(id)arg3 width:(id)arg4 height:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)imageBytes;
- (void)setImageBytes:(id)arg1;
- (id)x;
- (void)setX:(id)arg1;
- (id)y;
- (void)setY:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end

