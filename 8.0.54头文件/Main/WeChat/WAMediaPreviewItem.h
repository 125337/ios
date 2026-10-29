@interface WAMediaPreviewItem : NSObject
{
    NSString * _url; // +0x8
    unsigned long long _type; // +0x10
    NSString * _thumb; // +0x18
    WAPlayerHttpMediaWrap * _mediaWrap; // +0x20
    WCPlayerPlayArgs * _playerInfo; // +0x28
    WCPlayerConfigControlView * _playerControlView; // +0x30
    WCPlayerView * _playerView; // +0x38
    UIImageView * _thumbImageView; // +0x40
    unsigned long long _downloadCompleteOperateType; // +0x48
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
- (void).cxx_destruct;
@end

