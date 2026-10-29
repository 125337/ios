@interface MMFinderLiveKTVSongResourceParseTask : NSObject
{
    BOOL _isParseFinished; // +0x8
    MMFinderLiveKTVSongResourceLoadResult * _resource; // +0x10
    NSString * _parseResourceDir; // +0x18
}
- (id)initWithResource:(id)arg1 parseResourceDir:(id)arg2;
- (void)parseResource:(id /* block */)arg1;
- (void)parseQrcResource:(id /* block */)arg1;
- (void)parseNoteResource:(id /* block */)arg1;
- (void)parseOriSongResource:(id /* block */)arg1;
- (void)parseAccSongResource:(id /* block */)arg1;
- (void)onParseFinish;
- (id)createOriginalSongPath;
- (id)createAccSongPath;
- (id)resource;
- (void)setResource:(id)arg1;
- (id)parseResourceDir;
- (void)setParseResourceDir:(id)arg1;
- (BOOL)isParseFinished;
- (void)setIsParseFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end

