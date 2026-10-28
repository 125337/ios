@interface FinderBgmItem : WXPBGeneratedMessage <MMBGMDataReport, MMBGMSelectedMusicDataProtocol>
+ (void)initialize;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
- (id)musicUrl;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)recommendBuf;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;
- (id)description;
@end
