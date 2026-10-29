@interface OMJMusicInfo : NSObject <WCFinderMusicSelectViewData, WCMJCameraMusicPlayableData, MMBGMSelectedMusicDataProtocol, MMBGMDataReport>
{
    NSString * _musicID; // +0x8
    NSString * _songName; // +0x10
    NSString * _singerName; // +0x18
    NSString * _coverImageURL; // +0x20
    NSArray * _lyricInfos; // +0x28
    NSString * _externalMusicID; // +0x30
    shared_ptr<XMJMusicInfo> _backingInfo; // +0x38
    struct _duration; // +0x48
    struct _startTime; // +0x60
}
+ (id)infoFromSelectedMusicData:(id)arg1;
+ (id)convertMusicLyricInfos:(id)arg1;
- (id)displayTitle;
- (id)musicId;
- (id)coverUrl;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (id)musicUrl;
- (id)description;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (void)setRecommendBuf:(id)arg1;
- (id)recommendBuf;
- (void)setFeedId:(id)arg1;
- (id)feedId;
- (void)setBgmItemType:(int)arg1;
- (int)bgmItemType;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
- (id)initWithMusicID:(id)arg1 songName:(id)arg2 singerName:(id)arg3 duration:(struct)arg4 lyricInfos:(id)arg5;
- (id)initWithMusicID:(id)arg1 songName:(id)arg2 singerName:(id)arg3 coverImageURL:(id)arg4 duration:(struct)arg5 startTime:(struct)arg6 lyricInfos:(id)arg7;
- (id)initWithMusicID:(id)arg1 startTime:(struct)arg2 duration:(struct)arg3;
- (id)initWithBackingInfo:(const void *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)musicID;
- (id)songName;
- (id)singerName;
- (id)coverImageURL;
- (struct)duration;
- (struct)startTime;
- (id)lyricInfos;
- (id)externalMusicID;
- (void)setExternalMusicID:(id)arg1;
- (shared_ptr<XMJMusicInfo>)backingInfo;
- (void)setBackingInfo:(shared_ptr<XMJMusicInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

