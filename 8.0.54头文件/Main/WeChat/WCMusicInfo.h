@interface WCMusicInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _title; // +0x8
    NSString * _singer; // +0x10
    NSString * _webUrl; // +0x18
    NSString * _dataUrl; // +0x20
    NSString * _lowBandUrl; // +0x28
    NSString * _appId; // +0x30
    NSString * _nsCoverImg; // +0x38
    NSString * _nsCoverImgHD; // +0x40
    NSString * _lyric; // +0x48
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_dataUrl;
+ (void)PBArrayAdd_lowBandUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_nsCoverImg;
+ (void)PBArrayAdd_nsCoverImgHD;
+ (void)PBArrayAdd_lyric;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidForShow;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)lowBandUrl;
- (void)setLowBandUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)nsCoverImg;
- (void)setNsCoverImg:(id)arg1;
- (id)nsCoverImgHD;
- (void)setNsCoverImgHD:(id)arg1;
- (id)lyric;
- (void)setLyric:(id)arg1;
- (void).cxx_destruct;
@end

