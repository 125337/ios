@interface WCFinderNativeDramaFeedViewModelParams : NSObject
{
    int _commentScene; // +0x8
    int _sourceCommentScene; // +0xc
    FinderNativeDramaInfo * _info; // +0x10
    unsigned long long _episodeID; // +0x18
    NSString * _sourceContentTid; // +0x20
    NSString * _sourceObjectSessionBuffer; // +0x28
    NSDictionary * _sourceReportInfo; // +0x30
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x38
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x40
}
- (id)init;
- (id)info;
- (void)setInfo:(id)arg1;
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (int)commentScene;
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
