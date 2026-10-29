@interface VoIPCallSDKDecodeLegStream : NSObject
{
    unsigned char _legIndex; // +0x8
    BOOL _exhausted; // +0x9
    int _poolWidth; // +0xc
    int _poolHeight; // +0x10
    NSArray * _frames; // +0x18
    unsigned long long _nextIndex; // +0x20
    unsigned long long _pulledCount; // +0x28
    unsigned long long _skipOutputCount; // +0x30
    unsigned long long _outOfWindowCount; // +0x38
    unsigned long long _keepStartNs; // +0x40
    unsigned long long _keepEndNs; // +0x48
    unsigned long long _iFlagCount; // +0x50
    unsigned long long _xpsFlagCount; // +0x58
    unsigned long long _inWindowFlagCount; // +0x60
    unsigned long long _skippedFlagCount; // +0x68
    __CVPixelBufferPool * _decodePool; // +0x70
}
- (void)dealloc;
- (unsigned char)legIndex;
- (void)setLegIndex:(unsigned char)arg1;
- (id)frames;
- (void)setFrames:(id)arg1;
- (unsigned long long)nextIndex;
- (void)setNextIndex:(unsigned long long)arg1;
- (unsigned long long)pulledCount;
- (void)setPulledCount:(unsigned long long)arg1;
- (unsigned long long)skipOutputCount;
- (void)setSkipOutputCount:(unsigned long long)arg1;
- (unsigned long long)outOfWindowCount;
- (void)setOutOfWindowCount:(unsigned long long)arg1;
- (BOOL)exhausted;
- (void)setExhausted:(BOOL)arg1;
- (unsigned long long)keepStartNs;
- (void)setKeepStartNs:(unsigned long long)arg1;
- (unsigned long long)keepEndNs;
- (void)setKeepEndNs:(unsigned long long)arg1;
- (unsigned long long)iFlagCount;
- (void)setIFlagCount:(unsigned long long)arg1;
- (unsigned long long)xpsFlagCount;
- (void)setXpsFlagCount:(unsigned long long)arg1;
- (unsigned long long)inWindowFlagCount;
- (void)setInWindowFlagCount:(unsigned long long)arg1;
- (unsigned long long)skippedFlagCount;
- (void)setSkippedFlagCount:(unsigned long long)arg1;
- (__CVPixelBufferPool *)decodePool;
- (void)setDecodePool:(__CVPixelBufferPool *)arg1;
- (int)poolWidth;
- (void)setPoolWidth:(int)arg1;
- (int)poolHeight;
- (void)setPoolHeight:(int)arg1;
- (void).cxx_destruct;
@end
