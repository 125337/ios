@interface MMTemplateMsgScopeCache : MMObject <PBCoding, NSCopying>
{
    BOOL _isGlobalRecv; // +0x8
    BOOL _hasSettingEntry; // +0x9
    NSString * _userName; // +0x10
    NSMutableArray * _scopeList; // +0x18
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_isGlobalRecv;
+ (void)PBArrayAdd_scopeList;
+ (void)PBArrayAdd_hasSettingEntry;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getScopeItemWithScopeID:(id)arg1;
- (id)showInSettingScopeList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)isGlobalRecv;
- (void)setIsGlobalRecv:(BOOL)arg1;
- (id)scopeList;
- (void)setScopeList:(id)arg1;
- (BOOL)hasSettingEntry;
- (void)setHasSettingEntry:(BOOL)arg1;
- (void).cxx_destruct;
@end

