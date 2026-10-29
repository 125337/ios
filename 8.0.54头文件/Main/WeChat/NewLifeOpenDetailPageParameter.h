@interface NewLifeOpenDetailPageParameter : NSObject
{
    BOOL _isPreview; // +0x8
    NSString * _exportedFeedId; // +0x10
    NSString * _nonceId; // +0x18
    long long _entryScene; // +0x20
    long long _cardType; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)valid;
- (id)description;
- (id)exportedFeedId;
- (void)setExportedFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (BOOL)isPreview;
- (void)setIsPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end

