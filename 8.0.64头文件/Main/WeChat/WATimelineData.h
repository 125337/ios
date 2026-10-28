@interface WATimelineData : NSObject
{
    BOOL _isGame; // +0x8
    unsigned int _debugMode; // +0xc
    unsigned int _version; // +0x10
    unsigned int _subType; // +0x14
    unsigned int _appBrandPriority; // +0x18
    unsigned int _liteAppPriority; // +0x1c
    NSString * _username; // +0x20
    NSString * _pagepath; // +0x28
    NSString * _title; // +0x30
    NSString * _desc; // +0x38
    NSData * _thumbImageData; // +0x40
    NSString * _thumbUrl; // +0x48
    NSString * _linkUrl; // +0x50
    NSString * _defaultUrl; // +0x58
    NSString * _shareActionId; // +0x60
    NSString * _messageExtraData; // +0x68
    NSString * _preloadResources; // +0x70
    NSString * _liteGameInfo; // +0x78
    NSString * _liteAppBizData; // +0x80
    long long _contentType; // +0x88
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)pagepath;
- (void)setPagepath:(id)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)thumbImageData;
- (void)setThumbImageData:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (id)defaultUrl;
- (void)setDefaultUrl:(id)arg1;
- (id)shareActionId;
- (void)setShareActionId:(id)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)preloadResources;
- (void)setPreloadResources:(id)arg1;
- (id)liteGameInfo;
- (void)setLiteGameInfo:(id)arg1;
- (unsigned int)appBrandPriority;
- (void)setAppBrandPriority:(unsigned int)arg1;
- (id)liteAppBizData;
- (void)setLiteAppBizData:(id)arg1;
- (unsigned int)liteAppPriority;
- (void)setLiteAppPriority:(unsigned int)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (void).cxx_destruct;
@end
