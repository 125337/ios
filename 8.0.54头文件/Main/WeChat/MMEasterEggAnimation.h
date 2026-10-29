@interface MMEasterEggAnimation : NSObject
{
    int _viewCount; // +0x8
    int _minViewSize; // +0xc
    int _maxViewSize; // +0x10
    NSString * _imageFilePath; // +0x18
    long long _animationType; // +0x20
}
- (id)imageFilePath;
- (void)setImageFilePath:(id)arg1;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (int)viewCount;
- (void)setViewCount:(int)arg1;
- (int)minViewSize;
- (void)setMinViewSize:(int)arg1;
- (int)maxViewSize;
- (void)setMaxViewSize:(int)arg1;
- (void).cxx_destruct;
@end

