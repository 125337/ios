@interface OpenIMContactSearchContext : NSObject
{
    unsigned int _searchScene; // +0x8
    unsigned int _adScene; // +0xc
    unsigned long long _wxaScene; // +0x10
    NSString * _wxaAppId; // +0x18
    NSString * _searchContext; // +0x20
    unsigned long long _adId; // +0x28
    NSString * _host; // +0x30
}
+ (unsigned int)serachSubSceneFromUserName:(id)arg1;
- (unsigned long long)wxaScene;
- (void)setWxaScene:(unsigned long long)arg1;
- (id)wxaAppId;
- (void)setWxaAppId:(id)arg1;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (unsigned int)adScene;
- (void)setAdScene:(unsigned int)arg1;
- (unsigned long long)adId;
- (void)setAdId:(unsigned long long)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (void).cxx_destruct;
@end
