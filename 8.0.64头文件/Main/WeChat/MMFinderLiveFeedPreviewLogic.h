@interface MMFinderLiveFeedPreviewLogic : NSObject
{
    BOOL _forceDisableGetLiveMsg; // +0x8
    BOOL _canGetLiveMsg; // +0x9
    BOOL _hasRequestPreview; // +0xa
    BOOL _hasOffline; // +0xb
    int _commentScene; // +0xc
    int _joinLiveType; // +0x10
    NSData * _uxInfo; // +0x18
    NSString * _adData; // +0x20
    id /* block */ _previewLastestCookieBlock; // +0x28
    NSString * _logicID; // +0x30
    WCFinderDataItem * _dataItem; // +0x38
    NSData * _liveCookies; // +0x40
    WCFinderPreviewLiveCGI * _joinLiveCgi; // +0x48
    WCFinderFeedStreamGetLiveMsgCGI * _getLiveMsgCgi; // +0x50
    long long _getLiveMsgScene; // +0x58
    NSData * _multiStyleInfo; // +0x60
}
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 joinLiveType:(int)arg3 getLiveMsgScene:(long long)arg4 multiStyleInfo:(id)arg5;
- (void)start;
- (void)stop;
- (void)offline;
- (void)internalJoinLive;
- (void)startGetLiveMsg;
- (void)continueGetLiveMsgWithDuration:(double)arg1;
- (void)dealloc;
- (id)previewCookie;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id /* block */)previewLastestCookieBlock;
- (void)setPreviewLastestCookieBlock:(id /* block */)arg1;
- (BOOL)forceDisableGetLiveMsg;
- (void)setForceDisableGetLiveMsg:(BOOL)arg1;
- (id)logicID;
- (void)setLogicID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)joinLiveCgi;
- (void)setJoinLiveCgi:(id)arg1;
- (id)getLiveMsgCgi;
- (void)setGetLiveMsgCgi:(id)arg1;
- (BOOL)canGetLiveMsg;
- (void)setCanGetLiveMsg:(BOOL)arg1;
- (BOOL)hasRequestPreview;
- (void)setHasRequestPreview:(BOOL)arg1;
- (BOOL)hasOffline;
- (void)setHasOffline:(BOOL)arg1;
- (int)joinLiveType;
- (void)setJoinLiveType:(int)arg1;
- (long long)getLiveMsgScene;
- (void)setGetLiveMsgScene:(long long)arg1;
- (id)multiStyleInfo;
- (void)setMultiStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end
