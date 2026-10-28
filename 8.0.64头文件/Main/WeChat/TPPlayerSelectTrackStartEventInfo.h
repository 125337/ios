@interface TPPlayerSelectTrackStartEventInfo : TPPlayerEventInfo
{
    long long _trackIndex; // +0x20
    long long _opaque; // +0x28
    TPTrackInfo * _trackInfo; // +0x30
}
- (id)init;
- (long long)trackIndex;
- (void)setTrackIndex:(long long)arg1;
- (long long)opaque;
- (void)setOpaque:(long long)arg1;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg1;
- (void).cxx_destruct;
@end
