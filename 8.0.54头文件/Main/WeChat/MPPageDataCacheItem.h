@interface MPPageDataCacheItem : NSObject <WCTTableCoding>
{
    BOOL _nativePageNeedFullScreenForceUrl; // +0x8
    BOOL _hasItemShowType; // +0x9
    unsigned int _expireTime; // +0xc
    unsigned int _lastModifyTime; // +0x10
    unsigned int _updateTime; // +0x14
    unsigned int _itemShowType; // +0x18
    NSString * _forceUrl; // +0x20
    MPPageDataCacheItemTemplateVersionInfoList * _templateVersionInfoList; // +0x28
    NSString * _pageKeyUrl; // +0x30
    NSArray * _itemPictureUrls; // +0x38
    NSString * _url; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_url;
+ (const void *)forceUrl;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_forceUrl;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)hasItemShowType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_hasItemShowType;
+ (const void *)itemShowType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_itemShowType;
+ (const void *)nativePageNeedFullScreenForceUrl;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_nativePageNeedFullScreenForceUrl;
+ (const void *)templateVersionInfoList;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_templateVersionInfoList;
+ (const void *)pageKeyUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_pageKeyUrl;
+ (const void *)itemPictureUrls;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_itemPictureUrls;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
- (id)description;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (BOOL)isDataValidWithTemplateType:(unsigned int)arg1 templateVersion:(unsigned int)arg2 templateVersionGroup:(id)arg3;
- (id)copy;
- (id)forceUrl;
- (void)setForceUrl:(id)arg1;
- (BOOL)nativePageNeedFullScreenForceUrl;
- (void)setNativePageNeedFullScreenForceUrl:(BOOL)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (id)templateVersionInfoList;
- (void)setTemplateVersionInfoList:(id)arg1;
- (id)pageKeyUrl;
- (void)setPageKeyUrl:(id)arg1;
- (id)itemPictureUrls;
- (void)setItemPictureUrls:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

