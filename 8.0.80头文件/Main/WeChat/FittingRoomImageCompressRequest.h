@interface FittingRoomImageCompressRequest : NSObject
{
    NSString * _sourcePath; // +0x8
    NSString * _targetPath; // +0x10
    long long _targetWidth; // +0x18
    long long _targetHeight; // +0x20
    long long _quality; // +0x28
    long long _maximumBytes; // +0x30
}
+ (id)makeWithSourcePath:(id)arg1 targetPath:(id)arg2 targetWidth:(long long)arg3 targetHeight:(long long)arg4 quality:(long long)arg5 maximumBytes:(long long)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)sourcePath;
- (void)setSourcePath:(id)arg1;
- (id)targetPath;
- (void)setTargetPath:(id)arg1;
- (long long)targetWidth;
- (void)setTargetWidth:(long long)arg1;
- (long long)targetHeight;
- (void)setTargetHeight:(long long)arg1;
- (long long)quality;
- (void)setQuality:(long long)arg1;
- (long long)maximumBytes;
- (void)setMaximumBytes:(long long)arg1;
- (void).cxx_destruct;
@end
