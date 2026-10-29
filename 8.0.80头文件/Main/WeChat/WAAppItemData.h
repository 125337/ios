@interface WAAppItemData : MMObject <WCTTableCoding, NSCopying>
{
    BOOL beStared; // +0x8
    BOOL _isFromOuter; // +0x9
    BOOL _isCommonUseItem; // +0xa
    unsigned int appType; // +0xc
    unsigned int updateTime; // +0x10
    unsigned int _tagType; // +0x14
    unsigned int _commuseInfoReferId; // +0x18
    unsigned int _commuseRecallQueueType; // +0x1c
    unsigned int _appServiceType; // +0x20
    NSString * userName; // +0x28
    double sortFactor; // +0x30
    NSString * _appid; // +0x38
    NSString * _appDesc; // +0x40
    NSString * _commuseExtraData; // +0x48
    NSString * _pagePath; // +0x50
    NSString * _iconUrl; // +0x58
    NSString * _appNickName; // +0x60
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)appType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appType;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)beStared;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_beStared;
+ (const void *)sortFactor;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_sortFactor;
+ (const void *)isFromOuter;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_isFromOuter;
+ (const void *)tagType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_tagType;
+ (const void *)appDesc;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_appDesc;
+ (const void *)commuseInfoReferId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_commuseInfoReferId;
+ (const void *)commuseRecallQueueType;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_commuseRecallQueueType;
+ (const void *)commuseExtraData;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_commuseExtraData;
+ (const void *)pagePath;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_pagePath;
+ (const void *)appid;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_appid;
+ (const void *)iconUrl;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_iconUrl;
+ (const void *)appNickName;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_appNickName;
+ (const void *)appServiceType;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_appServiceType;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
- (id)appItemKey;
- (id)uniqueKey;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (BOOL)beStared;
- (void)setBeStared:(BOOL)arg1;
- (double)sortFactor;
- (void)setSortFactor:(double)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (BOOL)isFromOuter;
- (void)setIsFromOuter:(BOOL)arg1;
- (unsigned int)tagType;
- (void)setTagType:(unsigned int)arg1;
- (id)appDesc;
- (void)setAppDesc:(id)arg1;
- (unsigned int)commuseInfoReferId;
- (void)setCommuseInfoReferId:(unsigned int)arg1;
- (unsigned int)commuseRecallQueueType;
- (void)setCommuseRecallQueueType:(unsigned int)arg1;
- (id)commuseExtraData;
- (void)setCommuseExtraData:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)appNickName;
- (void)setAppNickName:(id)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (BOOL)isCommonUseItem;
- (void)setIsCommonUseItem:(BOOL)arg1;
- (void).cxx_destruct;
@end
