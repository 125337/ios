@interface CBTCoopV2TingAutoPlayReportContext : NSObject
{
    BOOL _isMicrophoneOpen; // +0x8
    BOOL _isTTSPlaying; // +0x9
    BOOL _isPageInForeground; // +0xa
    BOOL _hasAudioState; // +0xb
    long long _svrId; // +0x10
    unsigned long long _queryId; // +0x18
}
- (long long)svrId;
- (void)setSvrId:(long long)arg1;
- (unsigned long long)queryId;
- (void)setQueryId:(unsigned long long)arg1;
- (BOOL)isMicrophoneOpen;
- (void)setIsMicrophoneOpen:(BOOL)arg1;
- (BOOL)isTTSPlaying;
- (void)setIsTTSPlaying:(BOOL)arg1;
- (BOOL)isPageInForeground;
- (void)setIsPageInForeground:(BOOL)arg1;
- (BOOL)hasAudioState;
- (void)setHasAudioState:(BOOL)arg1;
@end
