@interface MMListenVideoBgmItem : WXPBGeneratedMessage <MMBGMSelectedMusicDataProtocol, MMBGMDataReport>
+ (void)initialize;
- (id)musicUrl;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
@end
