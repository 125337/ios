@interface SnsVideoTrimRequest : NSObject
{
    NSString * _inputPath; // +0x8
    NSString * _outputPath; // +0x10
    long long _startMs; // +0x18
    long long _endMs; // +0x20
    long long _maxWidth; // +0x28
    long long _maxHeight; // +0x30
}
+ (id)makeWithInputPath:(id)arg1 outputPath:(id)arg2 startMs:(long long)arg3 endMs:(long long)arg4 maxWidth:(long long)arg5 maxHeight:(long long)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)inputPath;
- (void)setInputPath:(id)arg1;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (long long)startMs;
- (void)setStartMs:(long long)arg1;
- (long long)endMs;
- (void)setEndMs:(long long)arg1;
- (long long)maxWidth;
- (void)setMaxWidth:(long long)arg1;
- (long long)maxHeight;
- (void)setMaxHeight:(long long)arg1;
- (void).cxx_destruct;
@end
