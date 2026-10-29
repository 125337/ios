@interface WATimelineData : NSObject <PBCoding>
{
    BOOL _isGame; // +0x8
    unsigned int _debugMode; // +0xc
    unsigned int _version; // +0x10
    unsigned int _subType; // +0x14
    unsigned int _appBrandPriority; // +0x18
    unsigned int _liteAppPriority; // +0x1c
    NSString * _appId; // +0x20
    NSString * _username; // +0x28
    NSString * _pagepath; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
    NSData * _thumbImageData; // +0x48
    NSString * _thumbUrl; // +0x50
    NSString * _linkUrl; // +0x58
    NSString * _defaultUrl; // +0x60
    NSString * _shareActionId; // +0x68
    NSString * _messageExtraData; // +0x70
    NSString * _preloadResources; // +0x78
    NSString * _liteGameInfo; // +0x80
    NSString * _liteAppBizData; // +0x88
    NSDictionary * _wmpfCustomParams; // +0x90
    long long _contentType; // +0x98
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_pagepath;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_thumbImageData;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_linkUrl;
+ (void)PBArrayAdd_defaultUrl;
+ (void)PBArrayAdd_shareActionId;
+ (void)PBArrayAdd_isGame;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_preloadResources;
+ (void)PBArrayAdd_liteGameInfo;
+ (void)PBArrayAdd_appBrandPriority;
+ (void)PBArrayAdd_liteAppBizData;
+ (void)PBArrayAdd_liteAppPriority;
+ (void)PBArrayAdd_contentType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appId;
- (void)setAppId:(id)arg1;
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
- (id)wmpfCustomParams;
- (void)setWmpfCustomParams:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (void).cxx_destruct;
@end
