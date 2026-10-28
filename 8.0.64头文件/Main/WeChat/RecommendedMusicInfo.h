@interface RecommendedMusicInfo : WXPBGeneratedMessage <MMBGMSelectedMusicDataProtocol, EditVideoBGMPlayerData, MMBGMDataReport>
+ (void)initialize;
- (unsigned long long)finderMusicId;
- (int)finderMusicType;
- (id)description;
- (id)musicId;
- (id)coverUrl;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)uniqueId;
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
@end
