@interface MMBGMSelectedLocalImportData : NSObject <MMBGMSelectedMusicDataProtocol>
{
    NSString * _queryWord; // +0x8
    long long _musicPosIndex; // +0x10
    unsigned long long _rowType; // +0x18
    NSString * _displayTitle; // +0x20
    NSString * _displaySubtitle; // +0x28
    NSString * _outputFilePath; // +0x30
    NSString * _identifierTag; // +0x38
    double _audioDurationSec; // +0x40
    unsigned long long _musicStartTimeInMs; // +0x48
    unsigned long long _songDurationInMs; // +0x50
    unsigned long long _musicSelectSource; // +0x58
    NSString * _sourceAuthorName; // +0x60
    NSString * _sourceFeedId; // +0x68
    NSString * _sourceCoverUrl; // +0x70
}
+ (id)headerDataWithDisplayTitle:(id)arg1;
- (void)setOutputFilePath:(id)arg1;
- (void)resetTrimInfo;
- (BOOL)hasImportedAudioFile;
- (id)finderPostMusicId;
- (id)musicId;
- (id)musicUrl;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (unsigned long long)musicReportType;
- (id)recommendBuf;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;
- (unsigned long long)originalSongDurationInMs;
- (BOOL)supportsTrim;
- (BOOL)isCustomManageDownloadOperation;
- (id)getCustomDownloadMusicPath;
- (void)customDownloadWithCompletion:(id /* block */)arg1;
- (BOOL)isFinderFeedMusic;
- (id)queryWord;
- (void)setQueryWord:(id)arg1;
- (long long)musicPosIndex;
- (void)setMusicPosIndex:(long long)arg1;
- (unsigned long long)rowType;
- (void)setRowType:(unsigned long long)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id)displaySubtitle;
- (void)setDisplaySubtitle:(id)arg1;
- (id)outputFilePath;
- (id)identifierTag;
- (void)setIdentifierTag:(id)arg1;
- (double)audioDurationSec;
- (void)setAudioDurationSec:(double)arg1;
- (unsigned long long)musicStartTimeInMs;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (unsigned long long)musicSelectSource;
- (void)setMusicSelectSource:(unsigned long long)arg1;
- (id)sourceAuthorName;
- (void)setSourceAuthorName:(id)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (id)sourceCoverUrl;
- (void)setSourceCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end
