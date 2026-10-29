@interface TPReportParamsVodEx : NSObject <ITPReportParams>
{
    BOOL _multitrack; // +0x8
    BOOL _vip; // +0x9
    long long _freetype; // +0x10
    long long _currentplay; // +0x18
    long long _optimizedplay; // +0x20
    long long _subtitles; // +0x28
    long long _selsubtitles; // +0x30
    long long _bizid; // +0x38
    long long _clip; // +0x40
    long long _hevclv; // +0x48
    long long _status; // +0x50
    long long _hitdownloaded; // +0x58
}
- (void)setErrorCode:(id)arg1;
- (long long)freetype;
- (void)setFreetype:(long long)arg1;
- (long long)currentplay;
- (void)setCurrentplay:(long long)arg1;
- (long long)optimizedplay;
- (void)setOptimizedplay:(long long)arg1;
- (long long)subtitles;
- (void)setSubtitles:(long long)arg1;
- (long long)selsubtitles;
- (void)setSelsubtitles:(long long)arg1;
- (BOOL)multitrack;
- (void)setMultitrack:(BOOL)arg1;
- (long long)bizid;
- (void)setBizid:(long long)arg1;
- (long long)clip;
- (void)setClip:(long long)arg1;
- (long long)hevclv;
- (void)setHevclv:(long long)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (BOOL)vip;
- (void)setVip:(BOOL)arg1;
- (long long)hitdownloaded;
- (void)setHitdownloaded:(long long)arg1;
@end

