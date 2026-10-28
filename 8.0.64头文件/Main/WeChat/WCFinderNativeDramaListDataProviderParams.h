@interface WCFinderNativeDramaListDataProviderParams : NSObject
{
    int _commentScene; // +0x8
    int _consumerMode; // +0xc
    int _sourceCommentScene; // +0x10
    unsigned long long _dramaID; // +0x18
    NSString * _sourceContentTid; // +0x20
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x28
}
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
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
