@interface MMLiteAppHandOffItem : MMHandOffItem <NSCopying>
{
    NSString * _liteAppBizType; // +0x38
    NSString * _icon; // +0x40
    NSString * _appid; // +0x48
    NSString * _page; // +0x50
    NSString * _query; // +0x58
    NSString * _url; // +0x60
    NSString * _extraData; // +0x68
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)liteAppBizType;
- (void)setLiteAppBizType:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
