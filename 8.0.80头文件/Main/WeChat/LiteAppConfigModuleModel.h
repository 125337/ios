@interface LiteAppConfigModuleModel : NSObject
{
    BOOL _allowedAll; // +0x8
    NSArray * _allowedMethods; // +0x10
}
- (id)init;
- (BOOL)allowedAll;
- (void)setAllowedAll:(BOOL)arg1;
- (id)allowedMethods;
- (void)setAllowedMethods:(id)arg1;
- (void).cxx_destruct;
@end
