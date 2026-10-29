@interface WCFinderPromotionStreamCGIParams : NSObject
{
    int _commentScene; // +0x8
    int _sourceCommentScene; // +0xc
    unsigned long long _objectID; // +0x10
    FinderPromotionStreamNativeDramaContext * _nativeDramaContext; // +0x18
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x20
}
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)nativeDramaContext;
- (void)setNativeDramaContext:(id)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
