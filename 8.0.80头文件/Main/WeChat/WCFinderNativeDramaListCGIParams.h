@interface WCFinderNativeDramaListCGIParams : NSObject
{
    int _commentScene; // +0x8
    int _sourceCommentScene; // +0xc
    unsigned long long _dramaID; // +0x10
    unsigned long long _episodeID; // +0x18
    unsigned long long _direction; // +0x20
    NSData * _upLastBuffer; // +0x28
    NSData * _downLastBuffer; // +0x30
    NSString * _streamBuffer; // +0x38
    unsigned long long _sndsi; // +0x40
    NSString * _sourceContentTid; // +0x48
    NSString * _sourceObjectSessionBuffer; // +0x50
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x58
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x60
}
- (id)init;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (unsigned long long)episodeID;
- (void)setEpisodeID:(unsigned long long)arg1;
- (unsigned long long)direction;
- (void)setDirection:(unsigned long long)arg1;
- (id)upLastBuffer;
- (void)setUpLastBuffer:(id)arg1;
- (id)downLastBuffer;
- (void)setDownLastBuffer:(id)arg1;
- (id)streamBuffer;
- (void)setStreamBuffer:(id)arg1;
- (unsigned long long)sndsi;
- (void)setSndsi:(unsigned long long)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (id)sourceObjectSessionBuffer;
- (void)setSourceObjectSessionBuffer:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
