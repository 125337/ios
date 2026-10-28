@interface FlutterMemInfo : NSObject
{
    long long _vmSize; // +0x8
    long long _imageSize; // +0x10
    long long _pictureSize; // +0x18
}
+ (id)makeWithVmSize:(long long)arg1 imageSize:(long long)arg2 pictureSize:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)vmSize;
- (void)setVmSize:(long long)arg1;
- (long long)imageSize;
- (void)setImageSize:(long long)arg1;
- (long long)pictureSize;
- (void)setPictureSize:(long long)arg1;
@end
