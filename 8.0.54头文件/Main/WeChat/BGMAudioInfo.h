@interface BGMAudioInfo : NSObject
{
    NSString * _accompanyMusicFilePath; // +0x8
    NSString * _originalMusicFilePath; // +0x10
    long long _singingEndPosition; // +0x18
}
+ (id)createBGMAudioInfoWithSong:(id)arg1;
- (id)accompanyMusicFilePath;
- (void)setAccompanyMusicFilePath:(id)arg1;
- (id)originalMusicFilePath;
- (void)setOriginalMusicFilePath:(id)arg1;
- (long long)singingEndPosition;
- (void)setSingingEndPosition:(long long)arg1;
- (void).cxx_destruct;
@end

