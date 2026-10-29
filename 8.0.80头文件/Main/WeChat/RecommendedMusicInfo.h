@interface RecommendedMusicInfo : WXPBGeneratedMessage <MMBGMSelectedMusicDataProtocol, EditVideoBGMPlayerData, MMBGMDataReport>
+ (void)initialize;
- (unsigned long long)finderMusicId;
- (int)finderMusicType;
- (id)description;
- (id)musicId;
- (id)coverUrl;
- (id)songAuthorName;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (unsigned long long)originalSongDurationInMs;
- (BOOL)supportsTrim;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (int)bgmItemType;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)uniqueId;
- (id)queryWord;
- (void)setQueryWord:(id)arg1;
- (long long)musicPosIndex;
- (void)setMusicPosIndex:(long long)arg1;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
@end
