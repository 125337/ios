@interface TingRecordFormat : NSObject
{
    long long _sampleRate; // +0x8
    long long _bitRate; // +0x10
    long long _channels; // +0x18
    long long _formatId; // +0x20
}
+ (id)makeWithSampleRate:(long long)arg1 bitRate:(long long)arg2 channels:(long long)arg3 formatId:(long long)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (long long)bitRate;
- (void)setBitRate:(long long)arg1;
- (long long)channels;
- (void)setChannels:(long long)arg1;
- (long long)formatId;
- (void)setFormatId:(long long)arg1;
@end
