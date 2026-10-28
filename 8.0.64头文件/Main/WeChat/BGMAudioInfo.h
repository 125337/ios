@interface BGMAudioInfo : NSObject
{
    NSString * _accompanyMusicFilePath; // +0x8
    NSString * _originalMusicFilePath; // +0x10
    long long _singingEndPosition; // +0x18
    NSString * _uniqueId; // +0x20
}
+ (id)createBGMAudioInfoWithSong:(id)arg1;
- (id)accompanyMusicFilePath;
- (void)setAccompanyMusicFilePath:(id)arg1;
- (id)originalMusicFilePath;
- (void)setOriginalMusicFilePath:(id)arg1;
- (long long)singingEndPosition;
- (void)setSingingEndPosition:(long long)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (void).cxx_destruct;
@end
