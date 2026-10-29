@interface WCFinderNativeDramaListDataProviderParams : NSObject
{
    int _commentScene; // +0x8
    int _sourceCommentScene; // +0xc
    NSString * _sourceContentTid; // +0x10
    NSString * _sourceObjectSessionBuffer; // +0x18
    NSDictionary * _sourceReportInfo; // +0x20
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x28
}
- (id)init;
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
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
