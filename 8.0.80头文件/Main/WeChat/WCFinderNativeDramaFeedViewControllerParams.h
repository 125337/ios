@interface WCFinderNativeDramaFeedViewControllerParams : NSObject
{
    BOOL _popDetailOnce; // +0x8
    int _commentScene; // +0xc
    int _sourceCommentScene; // +0x10
    unsigned long long _episodeID; // +0x18
    FinderNativeDramaInfo * _info; // +0x20
    NSString * _sourceContentTid; // +0x28
    NSString * _sourceObjectSessionBuffer; // +0x30
    NSDictionary * _sourceReportInfo; // +0x38
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x40
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x48
}
- (id)init;
- (int)commentScene;
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)popDetailOnce;
- (void)setPopDetailOnce:(BOOL)arg1;
- (void)setCommentScene:(int)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (id)sourceObjectSessionBuffer;
- (void)setSourceObjectSessionBuffer:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)sourceReportInfo;
- (void)setSourceReportInfo:(id)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
