@interface WCFinderNativeDramaFeedViewControllerParams : NSObject
{
    BOOL _popDetailOnce; // +0x8
    int _sourceCommentScene; // +0xc
    unsigned long long _episodeID; // +0x10
    FinderNativeDramaInfo * _info; // +0x18
    NSString * _sourceContentTid; // +0x20
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x28
}
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)popDetailOnce;
- (void)setPopDetailOnce:(BOOL)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (void).cxx_destruct;
@end
