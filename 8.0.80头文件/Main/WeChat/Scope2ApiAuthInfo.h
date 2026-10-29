@interface Scope2ApiAuthInfo : NSObject
{
    unsigned int _scopeStatus; // +0x8
    NSString * _scopeDesc; // +0x10
    NSMutableArray * _apiList; // +0x18
}
- (unsigned int)scopeStatus;
- (void)setScopeStatus:(unsigned int)arg1;
- (id)scopeDesc;
- (void)setScopeDesc:(id)arg1;
- (id)apiList;
- (void)setApiList:(id)arg1;
- (void).cxx_destruct;
@end
