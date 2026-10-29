@interface PlatformMediaSize : NSObject
{
    long long _width; // +0x8
    long long _height; // +0x10
    long long _size; // +0x18
}
+ (id)makeWithWidth:(long long)arg1 height:(long long)arg2 size:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
@end
