@interface SendMusicRequest : NSObject
{
    NSString * _musicId; // +0x8
    NSString * _songName; // +0x10
    NSString * _singer; // +0x18
    NSString * _dataUrl; // +0x20
    NSString * _appid; // +0x28
    NSString * _webUrl; // +0x30
    NSString * _coverUrl; // +0x38
    NSString * _mid; // +0x40
    NSString * _lyric; // +0x48
    NSNumber * _requestCode; // +0x50
}
+ (id)makeWithMusicId:(id)arg1 songName:(id)arg2 singer:(id)arg3 dataUrl:(id)arg4 appid:(id)arg5 webUrl:(id)arg6 coverUrl:(id)arg7 mid:(id)arg8 lyric:(id)arg9 requestCode:(id)arg10;
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
- (id)mid;
- (void)setMid:(id)arg1;
- (id)lyric;
- (void)setLyric:(id)arg1;
- (id)requestCode;
- (void)setRequestCode:(id)arg1;
- (void).cxx_destruct;
@end

