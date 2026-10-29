@interface FavLiteAppItem : FavoritesModel
{
    BOOL _isTransparent; // +0x8
    BOOL _forbidForward; // +0x9
    unsigned int _mediaType; // +0xc
    unsigned int _jumpType; // +0x10
    long long _subType; // +0x18
    NSString * _title; // +0x20
    NSString * _des; // +0x28
    NSString * _nickName; // +0x30
    NSString * _thumbUrl; // +0x38
    NSString * _appId; // +0x40
    NSString * _query; // +0x48
    NSString * _pagePath; // +0x50
    NSString * _fallbackUrl; // +0x58
    NSArray * _excerptList; // +0x60
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)des;
- (void)setDes:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)fallbackUrl;
- (void)setFallbackUrl:(id)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (id)excerptList;
- (void)setExcerptList:(id)arg1;
- (BOOL)forbidForward;
- (void)setForbidForward:(BOOL)arg1;
- (void).cxx_destruct;
@end
