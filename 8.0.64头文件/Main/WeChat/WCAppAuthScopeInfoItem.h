@interface WCAppAuthScopeInfoItem : MMObject <PBCoding>
{
    BOOL _isUserEnable; // +0x8
    unsigned int _state; // +0xc
    NSString * _scope; // +0x10
    NSString * _scopeDesc; // +0x18
}
+ (void)PBArrayAdd_scope;
+ (void)PBArrayAdd_scopeDesc;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_isUserEnable;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)scopeDesc;
- (void)setScopeDesc:(id)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (BOOL)isUserEnable;
- (void)setIsUserEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
