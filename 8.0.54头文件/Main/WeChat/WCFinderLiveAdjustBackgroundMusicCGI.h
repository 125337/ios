@interface WCFinderLiveAdjustBackgroundMusicCGI : WCFinderLiveBaseCgi
{
    unsigned int _bizScene; // +0x8
    unsigned int _curVolume; // +0xc
    unsigned int _curSongId; // +0x10
    unsigned int _curSongRatio; // +0x14
    unsigned int _action; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    NSString * _finderUsername; // +0x30
    NSData * _liveCookies; // +0x38
    unsigned long long _objectId; // +0x40
    unsigned long long _liveId; // +0x48
    FinderLiveBriefMusicInfo * _song; // +0x50
}
- (id)initWithFinderUsername:(id)arg1 bizScene:(unsigned int)arg2 liveCookies:(id)arg3 liveId:(unsigned long long)arg4 objectId:(unsigned long long)arg5 curVolume:(unsigned int)arg6 curSongId:(unsigned int)arg7 curSongRatio:(unsigned int)arg8 action:(int)arg9 song:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)bizScene;
- (void)setBizScene:(unsigned int)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)curVolume;
- (void)setCurVolume:(unsigned int)arg1;
- (unsigned int)curSongId;
- (void)setCurSongId:(unsigned int)arg1;
- (unsigned int)curSongRatio;
- (void)setCurSongRatio:(unsigned int)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (id)song;
- (void)setSong:(id)arg1;
- (void).cxx_destruct;
@end

