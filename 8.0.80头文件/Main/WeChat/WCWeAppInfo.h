@interface WCWeAppInfo : NSObject <NSCoding, PBCoding>
{
    unsigned int _version; // +0x8
    unsigned int _debugMode; // +0xc
    unsigned int _isGame; // +0x10
    unsigned int _subType; // +0x14
    NSString * _appUserName; // +0x18
    NSString * _pagePath; // +0x20
    NSString * _shareActionId; // +0x28
    NSString * _messageExtraData; // +0x30
    NSString * _preloadResources; // +0x38
}
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_shareActionId;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_subType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (id)shareActionId;
- (void)setShareActionId:(id)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (unsigned int)isGame;
- (void)setIsGame:(unsigned int)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)preloadResources;
- (void)setPreloadResources:(id)arg1;
- (void).cxx_destruct;
@end
