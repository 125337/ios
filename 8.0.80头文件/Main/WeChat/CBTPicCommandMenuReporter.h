@interface CBTPicCommandMenuReporter : NSObject
+ (void)reportMenuExpWithEnterScene:(long long)arg1 viewId:(id)arg2 level:(unsigned long long)arg3 l1Text:(id)arg4 l2Text:(id)arg5 expSource:(unsigned long long)arg6 extraParams:(id)arg7;
+ (void)reportMenuClkWithEnterScene:(long long)arg1 viewId:(id)arg2 level:(unsigned long long)arg3 l1Text:(id)arg4 l2Text:(id)arg5 sugId:(id)arg6 jumpToXiaoWei:(BOOL)arg7 extraParams:(id)arg8;
+ (id)joinedMenuList:(id)arg1;
@end
