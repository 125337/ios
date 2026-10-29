@interface KvReportItem29322 : KvReportBaseItem
{
    unsigned int _action; // +0x8
    unsigned int _hitCache; // +0xc
    unsigned int _delay; // +0x10
    unsigned int _preloadingOnEnter; // +0x14
    unsigned int _releaseScene; // +0x18
    NSString * _sessionId; // +0x20
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)hitCache;
- (void)setHitCache:(unsigned int)arg1;
- (unsigned int)delay;
- (void)setDelay:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)preloadingOnEnter;
- (void)setPreloadingOnEnter:(unsigned int)arg1;
- (unsigned int)releaseScene;
- (void)setReleaseScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

