@interface CBTAuthTarget : NSObject
{
    long long _type; // +0x8
    NSString * _liteAppId; // +0x10
    NSString * _liteAppPage; // +0x18
    NSString * _liteAppQuery; // +0x20
    NSString * _h5Url; // +0x28
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (id)liteAppPage;
- (void)setLiteAppPage:(id)arg1;
- (id)liteAppQuery;
- (void)setLiteAppQuery:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (void).cxx_destruct;
@end
