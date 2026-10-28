@interface WAFavoriteData : NSObject <PBCoding>
{
    BOOL _disableForward; // +0x8
    unsigned int _version; // +0xc
    unsigned int _debugMode; // +0x10
    unsigned int _sourceType; // +0x14
    unsigned int _subType; // +0x18
    NSString * _username; // +0x20
    NSString * _appid; // +0x28
    NSString * _title; // +0x30
    NSString * _desc; // +0x38
    NSString * _iconUrl; // +0x40
    NSString * _pagepath; // +0x48
    NSString * _sourceDisplayName; // +0x50
    NSString * _defaultLink; // +0x58
    NSString * _messageExtraData; // +0x60
    NSString * _thumbUrl; // +0x68
    NSData * _thumbData; // +0x70
    NSDictionary * _wmpfCustomParams; // +0x78
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_pagepath;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_sourceType;
+ (void)PBArrayAdd_sourceDisplayName;
+ (void)PBArrayAdd_defaultLink;
+ (void)PBArrayAdd_disableForward;
+ (void)PBArrayAdd_messageExtraData;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_thumbData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)pagepath;
- (void)setPagepath:(id)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)sourceDisplayName;
- (void)setSourceDisplayName:(id)arg1;
- (id)defaultLink;
- (void)setDefaultLink:(id)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (id)wmpfCustomParams;
- (void)setWmpfCustomParams:(id)arg1;
- (void).cxx_destruct;
@end
