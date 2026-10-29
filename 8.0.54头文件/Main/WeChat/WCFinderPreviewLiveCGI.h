@interface WCFinderPreviewLiveCGI : WCFinderLiveBaseCgi
{
    int _commentScene; // +0x8
    int _joinType; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    unsigned long long _scene; // +0x18
    NSData * _liveCookies; // +0x20
    NSString * _sessionBuffer; // +0x28
    NSString * _sessionExtraKey; // +0x30
    NSData * _uxInfo; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failBlock; // +0x48
    NSData * _multiStyleInfo; // +0x50
    NSData * _previewCookie; // +0x58
}
- (id)initWithFinderDataItem:(id)arg1 scene:(unsigned long long)arg2 liveCookies:(id)arg3 sessionBuffer:(id)arg4 commentScene:(int)arg5 joinType:(int)arg6 uxInfo:(id)arg7 sessionExtraKey:(id)arg8 multiStyleInfo:(id)arg9 previewCookie:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)joinType;
- (void)setJoinType:(int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)multiStyleInfo;
- (void)setMultiStyleInfo:(id)arg1;
- (id)previewCookie;
- (void)setPreviewCookie:(id)arg1;
- (void).cxx_destruct;
@end

