@interface WXMusicObject : NSObject
{
    NSString * musicUrl; // +0x8
    NSString * musicLowBandUrl; // +0x10
    NSString * musicDataUrl; // +0x18
    NSString * musicLowBandDataUrl; // +0x20
    NSString * _songAlbumUrl; // +0x28
    NSString * _songLyric; // +0x30
}
+ (id)object;
- (id)init;
- (id)musicUrl;
- (void)setMusicUrl:(id)arg1;
- (id)musicLowBandUrl;
- (void)setMusicLowBandUrl:(id)arg1;
- (id)musicDataUrl;
- (void)setMusicDataUrl:(id)arg1;
- (id)musicLowBandDataUrl;
- (void)setMusicLowBandDataUrl:(id)arg1;
- (id)songAlbumUrl;
- (void)setSongAlbumUrl:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (void).cxx_destruct;
@end
