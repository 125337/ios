@interface TranslateLinkResult : MMObject
{
    BOOL _isFromLocalCache; // +0x8
    int _errcode; // +0xc
    unsigned int _version; // +0x10
    unsigned int _actionCode; // +0x14
    unsigned int _wxaScene; // +0x18
    NSString * _deeplink; // +0x20
    NSString * _errmsg; // +0x28
    NSString * _errWording; // +0x30
    NSString * _sdkToken; // +0x38
    NSString * _appNickname; // +0x40
    NSString * _appIconUrl; // +0x48
    NSString * _redirectUrl; // +0x50
    NSData * _wxaRuntimeBuffer; // +0x58
    TranslateLinkResultShareInfo * _shareMsgInfo; // +0x60
    NSString * _wxaSceneNote; // +0x68
    SdkFinderInfoResult * _finderInfoResult; // +0x70
    NSString * _platformSignature; // +0x78
    NSString * _appmsgSignature3rd; // +0x80
    long long _shareChatScope; // +0x88
    TranslateLinkCacheWrap * _cacheWrap; // +0x90
}
+ (id)resultWithCacheWrap:(id)arg1 andError:(id *)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
- (id)description;
- (id)deeplink;
- (void)setDeeplink:(id)arg1;
- (int)errcode;
- (void)setErrcode:(int)arg1;
- (id)errmsg;
- (void)setErrmsg:(id)arg1;
- (id)errWording;
- (void)setErrWording:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)sdkToken;
- (void)setSdkToken:(id)arg1;
- (id)appNickname;
- (void)setAppNickname:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg1;
- (id)wxaRuntimeBuffer;
- (void)setWxaRuntimeBuffer:(id)arg1;
- (unsigned int)actionCode;
- (void)setActionCode:(unsigned int)arg1;
- (id)shareMsgInfo;
- (void)setShareMsgInfo:(id)arg1;
- (unsigned int)wxaScene;
- (void)setWxaScene:(unsigned int)arg1;
- (id)wxaSceneNote;
- (void)setWxaSceneNote:(id)arg1;
- (id)finderInfoResult;
- (void)setFinderInfoResult:(id)arg1;
- (id)platformSignature;
- (void)setPlatformSignature:(id)arg1;
- (id)appmsgSignature3rd;
- (void)setAppmsgSignature3rd:(id)arg1;
- (long long)shareChatScope;
- (void)setShareChatScope:(long long)arg1;
- (id)cacheWrap;
- (void)setCacheWrap:(id)arg1;
- (BOOL)isFromLocalCache;
- (void)setIsFromLocalCache:(BOOL)arg1;
- (void).cxx_destruct;
@end

