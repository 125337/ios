@interface FlutterPAGInfo : NSObject
{
    BOOL _isFromAsset; // +0x8
    BOOL _autoPlay; // +0x9
    long long _pagId; // +0x10
    NSString * _filepath; // +0x18
    double _width; // +0x20
    double _height; // +0x28
    long long _repeatCount; // +0x30
    double _maxFrameRate; // +0x38
    double _playSpeed; // +0x40
}
+ (id)makeWithPagId:(long long)arg1 filepath:(id)arg2 isFromAsset:(BOOL)arg3 width:(double)arg4 height:(double)arg5 repeatCount:(long long)arg6 autoPlay:(BOOL)arg7 maxFrameRate:(double)arg8 playSpeed:(double)arg9;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)pagId;
- (void)setPagId:(long long)arg1;
- (id)filepath;
- (void)setFilepath:(id)arg1;
- (BOOL)isFromAsset;
- (void)setIsFromAsset:(BOOL)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (long long)repeatCount;
- (void)setRepeatCount:(long long)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (double)maxFrameRate;
- (void)setMaxFrameRate:(double)arg1;
- (double)playSpeed;
- (void)setPlaySpeed:(double)arg1;
- (void).cxx_destruct;
@end
