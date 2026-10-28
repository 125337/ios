@interface MMFinderLiveFreeMicLocalInfo : NSObject <NSCopying>
{
    BOOL _needSdkInfo; // +0x8
    BOOL _isAllowTalkFromServer; // +0x9
    BOOL _isTrtcReady; // +0xa
    BOOL _isMicReady; // +0xb
    BOOL _shouldHandleBreakTrtcMsg; // +0xc
    unsigned long long _startTalkingTime; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)needSdkInfo;
- (void)setNeedSdkInfo:(BOOL)arg1;
- (BOOL)isAllowTalkFromServer;
- (void)setIsAllowTalkFromServer:(BOOL)arg1;
- (BOOL)isTrtcReady;
- (void)setIsTrtcReady:(BOOL)arg1;
- (BOOL)isMicReady;
- (void)setIsMicReady:(BOOL)arg1;
- (BOOL)shouldHandleBreakTrtcMsg;
- (void)setShouldHandleBreakTrtcMsg:(BOOL)arg1;
- (unsigned long long)startTalkingTime;
- (void)setStartTalkingTime:(unsigned long long)arg1;
@end
