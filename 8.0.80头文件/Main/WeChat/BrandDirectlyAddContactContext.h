@interface BrandDirectlyAddContactContext : NSObject
{
    BOOL _subscribeBizLive; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _subScene; // +0x10
    unsigned int _productId; // +0x14
    NSString * _username; // +0x18
    id /* block */ _callback; // +0x20
    NSString * _sceneNote; // +0x28
    NSString * _finderBuffer; // +0x30
    NSString * _finderUserName; // +0x38
    NSString * _articleUrl; // +0x40
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (unsigned int)productId;
- (void)setProductId:(unsigned int)arg1;
- (id)finderBuffer;
- (void)setFinderBuffer:(id)arg1;
- (BOOL)subscribeBizLive;
- (void)setSubscribeBizLive:(BOOL)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)articleUrl;
- (void)setArticleUrl:(id)arg1;
- (void).cxx_destruct;
@end
