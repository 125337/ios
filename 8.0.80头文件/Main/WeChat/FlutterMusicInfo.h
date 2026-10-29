@interface FlutterMusicInfo : NSObject
{
    NSString * _musicId; // +0x8
    NSString * _songName; // +0x10
    NSString * _singer; // +0x18
    NSString * _dataUrl; // +0x20
    NSString * _appid; // +0x28
    NSString * _webUrl; // +0x30
    NSString * _coverUrl; // +0x38
    FLMusicIntType * _duration; // +0x40
    NSString * _mid; // +0x48
    NSString * _lyric; // +0x50
    NSString * _sourceType; // +0x58
    NSString * _voiceId; // +0x60
    NSString * _bizUsername; // +0x68
    NSString * _tid; // +0x70
    NSString * _nonceId; // +0x78
    NSNumber * _voiceType; // +0x80
}
+ (id)makeWithMusicId:(id)arg1 songName:(id)arg2 singer:(id)arg3 dataUrl:(id)arg4 appid:(id)arg5 webUrl:(id)arg6 coverUrl:(id)arg7 duration:(id)arg8 mid:(id)arg9 lyric:(id)arg10 sourceType:(id)arg11 voiceId:(id)arg12 bizUsername:(id)arg13 tid:(id)arg14 nonceId:(id)arg15 voiceType:(id)arg16;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)duration;
- (void)setDuration:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)lyric;
- (void)setLyric:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)voiceType;
- (void)setVoiceType:(id)arg1;
- (void).cxx_destruct;
@end
