@interface OMJMusicInfo : NSObject <WCFinderMusicSelectViewData, WCMJCameraMusicPlayableData, MMBGMSelectedMusicDataProtocol, MMBGMDataReport>
{
    NSString * _musicID; // +0x8
    NSString * _songName; // +0x10
    NSString * _singerName; // +0x18
    NSString * _coverImageURL; // +0x20
    NSArray * _lyricInfos; // +0x28
    NSString * _externalMusicID; // +0x30
    NSData * _clientBuffer; // +0x38
    shared_ptr<XMJMusicInfo> _backingInfo; // +0x40
    struct _duration; // +0x50
    struct _startTime; // +0x68
}
+ (id)mj_musicInfoWithBeatTemplateBGMInfo:(id)arg1;
+ (id)infoFromSelectedMusicData:(id)arg1;
+ (id)infoFromSelectedMusicResult:(id)arg1;
+ (id)mm_infoFromSelectedMusicData:(id)arg1 startTimeInMs:(unsigned long long)arg2 durationInMs:(unsigned long long)arg3 originalSongDurationInMs:(unsigned long long)arg4;
+ (id)convertMusicLyricInfos:(id)arg1;
- (void)setSnsBgmInfo:(id)arg1;
- (id)snsBgmInfo;
- (BOOL)mj_isServerAIComposingMusic;
- (void)mj_setServerAIComposingMusic:(BOOL)arg1;
- (id)mj_serverAIComposingSelectedMusicData;
- (void)mj_setServerAIComposingSelectedMusicData:(id)arg1;
- (id)displayTitle;
- (id)musicId;
- (id)coverUrl;
- (id)songAuthorName;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (unsigned long long)originalSongDurationInMs;
- (void)mm_setOriginalSongDurationInMs:(unsigned long long)arg1;
- (BOOL)supportsTrim;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (id)musicUrl;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (BOOL)favableAndRecentAble;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (id)queryWord;
- (void)setQueryWord:(id)arg1;
- (long long)musicPosIndex;
- (void)setMusicPosIndex:(long long)arg1;
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
- (id)initWithMusicID:(id)arg1 songName:(id)arg2 singerName:(id)arg3 coverImageURL:(id)arg4 duration:(struct)arg5 startTime:(struct)arg6 lyricInfos:(id)arg7 clientBuffer:(id)arg8;
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
- (id)clientBuffer;
- (shared_ptr<XMJMusicInfo>)backingInfo;
- (void)setBackingInfo:(shared_ptr<XMJMusicInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
