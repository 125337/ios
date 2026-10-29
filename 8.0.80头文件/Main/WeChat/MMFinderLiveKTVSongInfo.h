@interface MMFinderLiveKTVSongInfo : NSObject
{
    NSString * _accompanyMusicFilePath; // +0x8
    NSString * _originalMusicFilePath; // +0x10
    NSString * _testSingPCMPath; // +0x18
}
- (BOOL)checkResourceValid:(long long)arg1;
- (BOOL)hasOriginalMusicFile;
- (id)accompanyMusicFilePath;
- (void)setAccompanyMusicFilePath:(id)arg1;
- (id)originalMusicFilePath;
- (void)setOriginalMusicFilePath:(id)arg1;
- (id)testSingPCMPath;
- (void)setTestSingPCMPath:(id)arg1;
- (void).cxx_destruct;
@end
