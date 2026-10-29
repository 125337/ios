@interface WCAppAuthAuthInfo : MMObject <PBCoding>
{
    unsigned int _allScopeState; // +0x8
    unsigned int _isShowAllscope; // +0xc
    NSMutableArray * _scopes; // +0x10
}
+ (void)PBArrayAdd_scopes;
+ (void)PBArrayAdd_allScopeState;
+ (void)PBArrayAdd_isShowAllscope;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)init;
- (id)getScopes;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)getScopeItemByIdentifier:(id)arg1;
- (id)scopes;
- (void)setScopes:(id)arg1;
- (unsigned int)allScopeState;
- (void)setAllScopeState:(unsigned int)arg1;
- (unsigned int)isShowAllscope;
- (void)setIsShowAllscope:(unsigned int)arg1;
- (void).cxx_destruct;
@end
