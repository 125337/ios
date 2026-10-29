@interface MMListenVideoBgmItem : WXPBGeneratedMessage <MMBGMSelectedMusicDataProtocol, MMBGMDataReport>
+ (void)initialize;
- (id)musicUrl;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (unsigned long long)originalSongDurationInMs;
- (BOOL)supportsTrim;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (BOOL)isMusicLiked;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;
- (id)queryWord;
- (void)setQueryWord:(id)arg1;
- (long long)musicPosIndex;
- (void)setMusicPosIndex:(long long)arg1;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
@end
