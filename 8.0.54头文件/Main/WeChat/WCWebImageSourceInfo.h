@interface WCWebImageSourceInfo : MMObject
{
    unsigned int _type; // +0x8
    NSString * _sourceName; // +0x10
    NSString * _sourceTitle; // +0x18
    NSURL * _sourceIconUrl; // +0x20
    NSObject * _sourceData; // +0x28
    NSString * _searchReqKey; // +0x30
    long long _searchScene; // +0x38
}
+ (id)imageSourceInfoForPlaceHolder;
+ (id)imageSourceInfoFromDictionary:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceTitle;
- (void)setSourceTitle:(id)arg1;
- (id)sourceIconUrl;
- (void)setSourceIconUrl:(id)arg1;
- (id)sourceData;
- (void)setSourceData:(id)arg1;
- (id)searchReqKey;
- (void)setSearchReqKey:(id)arg1;
- (long long)searchScene;
- (void)setSearchScene:(long long)arg1;
- (void).cxx_destruct;
@end

