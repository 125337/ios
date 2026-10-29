@interface AudioFileTransferInfo : NSObject
{
    NSString * _sourcePath; // +0x8
    NSString * _outputPath; // +0x10
    double _startTime; // +0x18
    double _endTime; // +0x20
    double _maxAudioDuration; // +0x28
}
- (id)sourcePath;
- (void)setSourcePath:(id)arg1;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (double)maxAudioDuration;
- (void)setMaxAudioDuration:(double)arg1;
- (void).cxx_destruct;
@end
