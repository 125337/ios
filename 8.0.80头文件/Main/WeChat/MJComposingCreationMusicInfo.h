@interface MJComposingCreationMusicInfo : NSObject
{
    BOOL _isMusicOn; // +0x8
    NSString * _musicID; // +0x10
    NSString * _musicName; // +0x18
    NSString * _authorName; // +0x20
    NSString * _coverUrl; // +0x28
    NSString * _musicFilePath; // +0x30
    long long _durationInMs; // +0x38
}
+ (id)modelWithDictionary:(id)arg1;
+ (id)modelWithMusicData:(id)arg1;
+ (id)modelWithMusicData:(id)arg1 musicFilePath:(id)arg2;
- (id)toDictionary;
- (id)description;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (id)musicName;
- (void)setMusicName:(id)arg1;
- (id)authorName;
- (void)setAuthorName:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (long long)durationInMs;
- (void)setDurationInMs:(long long)arg1;
- (BOOL)isMusicOn;
- (void)setIsMusicOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
