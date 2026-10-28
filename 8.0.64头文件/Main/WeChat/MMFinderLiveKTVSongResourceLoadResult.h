@interface MMFinderLiveKTVSongResourceLoadResult : NSObject
{
    unsigned int _type; // +0x8
    NSString * _resourcePath; // +0x10
    NSNumber * _downloadResult; // +0x18
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)resourcePath;
- (void)setResourcePath:(id)arg1;
- (id)downloadResult;
- (void)setDownloadResult:(id)arg1;
- (void).cxx_destruct;
@end
