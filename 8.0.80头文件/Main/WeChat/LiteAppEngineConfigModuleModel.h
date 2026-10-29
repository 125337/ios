@interface LiteAppEngineConfigModuleModel : NSObject
{
    NSString * _visibility; // +0x8
    NSArray * _allowedAppIds; // +0x10
    NSDictionary * _methods; // +0x18
}
- (id)init;
- (id)visibility;
- (void)setVisibility:(id)arg1;
- (id)allowedAppIds;
- (void)setAllowedAppIds:(id)arg1;
- (id)methods;
- (void)setMethods:(id)arg1;
- (void).cxx_destruct;
@end
