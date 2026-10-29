@interface MJLocalMusicInfo : NSObject <MMBGMSelectedMusicDataProtocol>
{
    OMJMusicInfo * _musicInfo; // +0x8
    NSString * _musicFilePath; // +0x10
}
- (id)initWithMusicInfo:(id)arg1 musicFilePath:(id)arg2;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (id)musicUrl;
- (id)description;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (void).cxx_destruct;
@end

