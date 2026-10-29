@interface WCPlayerVVCInfo : NSObject
{
    float _playDecodingFps; // +0x8
    float _playRenderingFps; // +0xc
    float _playDecodeStuckRatio; // +0x10
    float _playRenderStuckRatio; // +0x14
    long long _playDecodeStuckCount; // +0x18
    long long _playRenderStuckCount; // +0x20
    unsigned long long _lastProceedTime; // +0x28
    long long _lastVideoDecodeFrmCnt; // +0x30
    long long _lastVideoRenderFrmCnt; // +0x38
    long long _totalProceedCnt; // +0x40
    long long _totalDecodeFPSCnt; // +0x48
    long long _totalRenderFPSCnt; // +0x50
}
- (id)init;
- (float)playDecodingFps;
- (void)setPlayDecodingFps:(float)arg1;
- (float)playRenderingFps;
- (void)setPlayRenderingFps:(float)arg1;
- (long long)playDecodeStuckCount;
- (void)setPlayDecodeStuckCount:(long long)arg1;
- (long long)playRenderStuckCount;
- (void)setPlayRenderStuckCount:(long long)arg1;
- (float)playDecodeStuckRatio;
- (void)setPlayDecodeStuckRatio:(float)arg1;
- (float)playRenderStuckRatio;
- (void)setPlayRenderStuckRatio:(float)arg1;
- (unsigned long long)lastProceedTime;
- (void)setLastProceedTime:(unsigned long long)arg1;
- (long long)lastVideoDecodeFrmCnt;
- (void)setLastVideoDecodeFrmCnt:(long long)arg1;
- (long long)lastVideoRenderFrmCnt;
- (void)setLastVideoRenderFrmCnt:(long long)arg1;
- (long long)totalProceedCnt;
- (void)setTotalProceedCnt:(long long)arg1;
- (long long)totalDecodeFPSCnt;
- (void)setTotalDecodeFPSCnt:(long long)arg1;
- (long long)totalRenderFPSCnt;
- (void)setTotalRenderFPSCnt:(long long)arg1;
@end
