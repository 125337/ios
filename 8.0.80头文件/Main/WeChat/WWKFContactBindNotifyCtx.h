@interface WWKFContactBindNotifyCtx : MMObject
{
    int _scene; // +0x8
    NSString * _url; // +0x10
    NSString * _entityId; // +0x18
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)entityId;
- (void)setEntityId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
