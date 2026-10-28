@interface WAUniversalAudioInfo : NSObject
{
    BOOL _autoPlay; // +0x8
    BOOL _loop; // +0x9
    unsigned int _frameLength; // +0xc
    NSURL * _src; // +0x10
    NSString * _audioID; // +0x18
    NSURL * _url; // +0x20
    double _startTime; // +0x28
    double _audioVolume; // +0x30
    double _duration; // +0x38
    AVAudioPCMBuffer * _skippedPCMBuffer; // +0x40
    AVAudioPCMBuffer * _PCMBuffer; // +0x48
    AVAudioFormat * _audioFormat; // +0x50
    AVAudioFile * _audioFile; // +0x58
    double _offset; // +0x60
    NSString * _cacheKey; // +0x68
    NSString * _dataPathToWrite; // +0x70
}
- (id)init;
- (id)src;
- (void)setSrc:(id)arg1;
- (id)audioID;
- (void)setAudioID:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
- (double)audioVolume;
- (void)setAudioVolume:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)skippedPCMBuffer;
- (void)setSkippedPCMBuffer:(id)arg1;
- (id)PCMBuffer;
- (void)setPCMBuffer:(id)arg1;
- (id)audioFormat;
- (void)setAudioFormat:(id)arg1;
- (unsigned int)frameLength;
- (void)setFrameLength:(unsigned int)arg1;
- (id)audioFile;
- (void)setAudioFile:(id)arg1;
- (double)offset;
- (void)setOffset:(double)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id)dataPathToWrite;
- (void)setDataPathToWrite:(id)arg1;
- (void).cxx_destruct;
@end
