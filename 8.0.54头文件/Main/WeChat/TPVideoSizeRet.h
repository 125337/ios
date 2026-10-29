@interface TPVideoSizeRet : NSObject
{
    NSNumber * _width; // +0x8
    NSNumber * _height; // +0x10
}
+ (id)makeWithWidth:(id)arg1 height:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end

