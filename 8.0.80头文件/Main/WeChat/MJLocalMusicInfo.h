@interface MJLocalMusicInfo : NSObject <MMBGMDataReport, MMBGMSelectedMusicDataProtocol>
{
    NSString * _queryWord; // +0x8
    long long _musicPosIndex; // +0x10
    unsigned long long _musicStartTimeInMs; // +0x18
    unsigned long long _songDurationInMs; // +0x20
    unsigned long long _originalSongDurationInMs; // +0x28
    OMJMusicInfo * _musicInfo; // +0x30
    NSString * _musicFilePath; // +0x38
}
- (void)setMusicReportType:(unsigned long long)arg1;
- (unsigned long long)musicReportType;
- (id)initWithMusicInfo:(id)arg1 musicFilePath:(id)arg2;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (id)musicUrl;
- (BOOL)supportsTrim;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)queryWord;
- (void)setQueryWord:(id)arg1;
- (long long)musicPosIndex;
- (void)setMusicPosIndex:(long long)arg1;
- (unsigned long long)musicStartTimeInMs;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)songDurationInMs;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (unsigned long long)originalSongDurationInMs;
- (void)setOriginalSongDurationInMs:(unsigned long long)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (void).cxx_destruct;
@end
