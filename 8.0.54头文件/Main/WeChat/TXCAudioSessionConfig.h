@interface TXCAudioSessionConfig : NSObject
{
    NSString * _category; // +0x8
    unsigned long long _categoryOptions; // +0x10
    NSString * _mode; // +0x18
    double _sampleRate; // +0x20
    double _ioBufferDuration; // +0x28
    long long _inputNumberOfChannels; // +0x30
    long long _outputNumberOfChannels; // +0x38
}
+ (id)currentConfig;
+ (id)categoryFromFactors:(AudioSessionFactors)arg1;
+ (unsigned long long)optionsForCategoryPlayback;
+ (unsigned long long)optionsForCategoryPlayAndRecord:(int)arg1 enableBluetoothA2DP:(BOOL)arg2;
+ (BOOL)needBluetoothHeadSet:(AudioSessionFactors)arg1;
+ (id)configWithFactors:(AudioSessionFactors)arg1;
- (id)init;
- (id)description;
- (id)category;
- (void)setCategory:(id)arg1;
- (unsigned long long)categoryOptions;
- (void)setCategoryOptions:(unsigned long long)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;
- (double)ioBufferDuration;
- (void)setIoBufferDuration:(double)arg1;
- (long long)inputNumberOfChannels;
- (void)setInputNumberOfChannels:(long long)arg1;
- (long long)outputNumberOfChannels;
- (void)setOutputNumberOfChannels:(long long)arg1;
- (void).cxx_destruct;
@end

