@interface ShakeMusicLogicController : MMObject <IMusicSearchExt>
{
    id <ShakeLogicProxyDelegate> m_delegate; // +0x8
    unsigned int m_sessionId; // +0x10
}
- (void)OnGetMusicItem:(id)arg1 andSessionId:(unsigned int)arg2;
- (void)OnMusicError:(int)arg1 andSessionId:(unsigned int)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)arg1;
- (unsigned int)getSessionId;
- (void).cxx_destruct;
@end
