@interface FlutterPAGInfo : NSObject
{
    NSNumber * _pagId; // +0x8
    NSString * _filepath; // +0x10
    NSNumber * _isFromAsset; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
    NSNumber * _repeatCount; // +0x30
    NSNumber * _autoPlay; // +0x38
    NSNumber * _maxFrameRate; // +0x40
}
+ (id)makeWithPagId:(id)arg1 filepath:(id)arg2 isFromAsset:(id)arg3 width:(id)arg4 height:(id)arg5 repeatCount:(id)arg6 autoPlay:(id)arg7 maxFrameRate:(id)arg8;
+ (id)fromMap:(id)arg1;
+ (id)nullableFromMap:(id)arg1;
- (id)toMap;
- (id)pagId;
- (void)setPagId:(id)arg1;
- (id)filepath;
- (void)setFilepath:(id)arg1;
- (id)isFromAsset;
- (void)setIsFromAsset:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)repeatCount;
- (void)setRepeatCount:(id)arg1;
- (id)autoPlay;
- (void)setAutoPlay:(id)arg1;
- (id)maxFrameRate;
- (void)setMaxFrameRate:(id)arg1;
- (void).cxx_destruct;
@end

