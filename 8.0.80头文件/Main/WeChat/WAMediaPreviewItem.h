@interface WAMediaPreviewItem : NSObject
{
    BOOL _isMuted; // +0x8
    float _initialSeekPos; // +0xc
    NSString * _url; // +0x10
    unsigned long long _type; // +0x18
    NSString * _thumb; // +0x20
    WAPlayerHttpMediaWrap * _mediaWrap; // +0x28
    WCPlayerPlayArgs * _playerInfo; // +0x30
    WCPlayerConfigControlView * _playerControlView; // +0x38
    WCPlayerView * _playerView; // +0x40
    UIImageView * _thumbImageView; // +0x48
    unsigned long long _downloadCompleteOperateType; // +0x50
    CContact * _pendingForwardContact; // +0x58
}
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)thumb;
- (void)setThumb:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (id)playerControlView;
- (void)setPlayerControlView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (unsigned long long)downloadCompleteOperateType;
- (void)setDownloadCompleteOperateType:(unsigned long long)arg1;
- (float)initialSeekPos;
- (void)setInitialSeekPos:(float)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (id)pendingForwardContact;
- (void)setPendingForwardContact:(id)arg1;
- (void).cxx_destruct;
@end
