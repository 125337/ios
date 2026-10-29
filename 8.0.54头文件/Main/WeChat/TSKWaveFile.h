@interface TSKWaveFile : NSObject
{
    WaveFile _waveFile; // +0x8
}
- (id)initWithFilePath:(id)arg1;
- (unsigned long long)sampleRate;
- (unsigned long long)channels;
- (unsigned long long)sampleSize;
- (unsigned long long)totalFrames;
- (unsigned long long)framesRead;
- (unsigned long long)framesRemain;
- (unsigned long long)readFrames:(int)arg1 asS16:(short *)arg2;
- (void)seekTo:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

