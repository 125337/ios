@interface WCFinderNativeDramaFeedViewModelParams : NSObject
{
    int _sourceCommentScene; // +0x8
    unsigned long long _dramaID; // +0x10
    unsigned long long _episodeID; // +0x18
    NSString * _sourceContentTid; // +0x20
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x28
}
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (void).cxx_destruct;
@end
