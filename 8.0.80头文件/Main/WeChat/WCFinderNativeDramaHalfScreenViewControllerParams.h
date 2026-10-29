@interface WCFinderNativeDramaHalfScreenViewControllerParams : NSObject
{
    int _sourceCommentScene; // +0x8
    FinderNativeDramaInfo * _info; // +0x10
    unsigned long long _episodeID; // +0x18
    NSString * _sourceContentTid; // +0x20
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x28
}
- (id)info;
- (void)setInfo:(id)arg1;
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
