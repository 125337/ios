@interface MMWebViewMinimizationData : MMObject <PBCoding>
{
    unsigned int _getA8KeyScene; // +0x8
    NSString * _webViewUrl; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _publisherUserName; // +0x20
    NSString * _publisherNickName; // +0x28
    NSString * _strWebExtInfo; // +0x30
    NSString * _webViewFullUrl; // +0x38
    AppMsgShareItem * _webShareItem; // +0x40
}
+ (void)PBArrayAdd_webViewUrl;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_publisherUserName;
+ (void)PBArrayAdd_publisherNickName;
+ (void)PBArrayAdd_getA8KeyScene;
+ (void)PBArrayAdd_strWebExtInfo;
+ (void)PBArrayAdd_webViewFullUrl;
+ (void)PBArrayAdd_webShareItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)webViewUrl;
- (void)setWebViewUrl:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)publisherUserName;
- (void)setPublisherUserName:(id)arg1;
- (id)publisherNickName;
- (void)setPublisherNickName:(id)arg1;
- (unsigned int)getA8KeyScene;
- (void)setGetA8KeyScene:(unsigned int)arg1;
- (id)strWebExtInfo;
- (void)setStrWebExtInfo:(id)arg1;
- (id)webViewFullUrl;
- (void)setWebViewFullUrl:(id)arg1;
- (id)webShareItem;
- (void)setWebShareItem:(id)arg1;
- (void).cxx_destruct;
@end

