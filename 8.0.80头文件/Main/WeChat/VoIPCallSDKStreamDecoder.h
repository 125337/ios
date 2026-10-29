@interface VoIPCallSDKStreamDecoder : NSObject
{
    BOOL _sessionActive; // +0x8
    int _sessionLegCount; // +0xc
    unsigned long long _skipDiagLogged; // +0x10
    VoIPCallSDKDecodeLegStream * _legStream0; // +0x18
    VoIPCallSDKDecodeLegStream * _legStream1; // +0x20
}
- (BOOL)beginDecodeSessionWithRoomId:(unsigned long long)arg1 legCount:(int)arg2;
- (void)endDecodeSession;
- (BOOL)prepareStreamForLeg:(unsigned char)arg1 frames:(id)arg2 keepStartNs:(unsigned long long)arg3 keepEndNs:(unsigned long long)arg4;
- (id)nextFrameForLeg:(unsigned char)arg1 fatal:(BOOL *)arg2;
- (void)streamStatsForLeg:(unsigned char)arg1 pulled:(unsigned long long *)arg2 skipOutput:(unsigned long long *)arg3 outOfWindow:(unsigned long long *)arg4;
- (void)p_probeLegFrames:(id)arg1 legIndex:(unsigned char)arg2 iFlagCount:(unsigned long long *)arg3 xpsFlagCount:(unsigned long long *)arg4 inWindowFlagCount:(unsigned long long *)arg5 skippedFlagCount:(unsigned long long *)arg6;
- (id)p_legStreamForIndex:(unsigned char)arg1;
- (void)p_setLegStream:(id)arg1 forIndex:(unsigned char)arg2;
- (void)p_finishLegStream:(id)arg1 failed:(BOOL)arg2;
- (void)p_createDecodePoolForStream:(id)arg1 width:(int)arg2 height:(int)arg3;
- (id)p_decodeOneFrame:(id)arg1 legIndex:(unsigned char)arg2 fatal:(BOOL *)arg3;
- (BOOL)sessionActive;
- (void)setSessionActive:(BOOL)arg1;
- (int)sessionLegCount;
- (void)setSessionLegCount:(int)arg1;
- (unsigned long long)skipDiagLogged;
- (void)setSkipDiagLogged:(unsigned long long)arg1;
- (id)legStream0;
- (void)setLegStream0:(id)arg1;
- (id)legStream1;
- (void)setLegStream1:(id)arg1;
- (void).cxx_destruct;
@end
