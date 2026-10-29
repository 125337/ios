@interface MMVCHierarchyPrinter : NSObject
+ (id)vcHierarchyWithAddress;
+ (id)vcHierarchyWithoutAddress;
+ (id)vcHierarchyStringWithFormat:(long long)arg1;
+ (id)allWindows;
+ (void)appendVC:(id)arg1 toString:(id)arg2 indentLevel:(long long)arg3 format:(long long)arg4;
+ (void)appendChildrenOf:(id)arg1 toString:(id)arg2 indentLevel:(long long)arg3 format:(long long)arg4;
+ (void)appendPresentedVC:(id)arg1 toString:(id)arg2 indentLevel:(long long)arg3 format:(long long)arg4;
+ (id)descriptionForVC:(id)arg1 format:(long long)arg2;
+ (id)modalStyleStringForStyle:(long long)arg1;
@end
