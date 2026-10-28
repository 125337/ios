@interface WCFinderNativeDramaListCGIParams : NSObject
{
    int _consumerMode; // +0x8
    int _sourceCommentScene; // +0xc
    unsigned long long _dramaID; // +0x10
    unsigned long long _episodeID; // +0x18
    unsigned long long _direction; // +0x20
    NSData * _upLastBuffer; // +0x28
    NSData * _downLastBuffer; // +0x30
    NSString * _sourceContentTid; // +0x38
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x40
}
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
- (int)consumerMode;
- (void)setConsumerMode:(int)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (void).cxx_destruct;
@end
