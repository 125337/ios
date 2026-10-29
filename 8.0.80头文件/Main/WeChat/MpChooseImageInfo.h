@interface MpChooseImageInfo : NSObject
{
    NSString * _tempFilePath; // +0x8
    NSNumber * _width; // +0x10
    NSNumber * _height; // +0x18
}
+ (id)makeWithTempFilePath:(id)arg1 width:(id)arg2 height:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)tempFilePath;
- (void)setTempFilePath:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end
