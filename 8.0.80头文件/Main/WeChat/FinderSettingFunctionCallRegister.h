@interface FinderSettingFunctionCallRegister : FunctionCallBaseRegister
+ (id)getSelfContactOrError:(id)arg1;
+ (id)currentFinderUsername;
+ (id)extractFinderModUserInfoErrorMessage:(id)arg1 response:(id)arg2 ret:(int)arg3 defaultMsg:(id)arg4;
+ (BOOL)isReferenceEnabledForContact:(id)arg1 referenceType:(int)arg2;
- (id)moduleName;
- (void)registerModuleFunctions;
@end
