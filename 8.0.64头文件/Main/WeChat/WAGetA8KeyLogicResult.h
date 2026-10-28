@interface WAGetA8KeyLogicResult : NSObject
{
    long long _codeActionType; // +0x8
    NSString * _weappUserName; // +0x10
    NSString * _weappPagePath; // +0x18
    NSString * _weappShareUrl; // +0x20
    NSString * _fullUrl; // +0x28
}
- (long long)codeActionType;
- (void)setCodeActionType:(long long)arg1;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (id)weappPagePath;
- (void)setWeappPagePath:(id)arg1;
- (id)weappShareUrl;
- (void)setWeappShareUrl:(id)arg1;
- (id)fullUrl;
- (void)setFullUrl:(id)arg1;
- (void).cxx_destruct;
@end
