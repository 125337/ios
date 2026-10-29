@interface TingStarSnapInfo : NSObject
{
    NSNumber * _left; // +0x8
    NSNumber * _top; // +0x10
    NSNumber * _width; // +0x18
    NSNumber * _height; // +0x20
    FlutterStandardTypedData * _buffer; // +0x28
}
+ (id)makeWithLeft:(id)arg1 top:(id)arg2 width:(id)arg3 height:(id)arg4 buffer:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)left;
- (void)setLeft:(id)arg1;
- (id)top;
- (void)setTop:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void).cxx_destruct;
@end

