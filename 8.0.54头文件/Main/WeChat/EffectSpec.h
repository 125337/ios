@interface EffectSpec : NSObject
{
    unsigned long long _sampleRate; // +0x8
    unsigned long long _maximumBlockSize; // +0x10
    unsigned long long _channels; // +0x18
    NSString * _irFilesDirPath; // +0x20
}
- (id)InitWithSampleRate:(unsigned long long)arg1 channels:(unsigned long long)arg2 maximumBlockSize:(unsigned long long)arg3;
- (id)InitWithSampleRate:(unsigned long long)arg1 channels:(unsigned long long)arg2 maximumBlockSize:(unsigned long long)arg3 irFilesDirPath:(id)arg4;
- (unsigned long long)sampleRate;
- (unsigned long long)maximumBlockSize;
- (unsigned long long)channels;
- (id)irFilesDirPath;
- (void).cxx_destruct;
@end

