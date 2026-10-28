@interface W1wPersonalMsgJumpInfo : NSObject
{
    int _isTransparent; // +0x8
    NSString * _appId; // +0x10
    NSString * _page; // +0x18
    NSDictionary * _query; // +0x20
    NSString * _minVersion; // +0x28
}
+ (id)jumpInfoWithLiteAppType:(unsigned long long)arg1 query:(id)arg2;
- (id)description;
- (int)isTransparent;
- (void)setIsTransparent:(int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (void).cxx_destruct;
@end
