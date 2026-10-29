@interface EmoticonBoardViewFactory : NSObject
+ (id)getViewConfigWithType:(unsigned long long)arg1 andFactoryHelper:(id)arg2;
+ (void)setupViewMiscOptionsForConfig:(id)arg1 WithType:(unsigned long long)arg2 andFactoryHelper:(id)arg3;
+ (void)setupTabConfig:(id)arg1 WithType:(unsigned long long)arg2;
+ (void)checkIsCameraEntranceEnabledFor:(id)arg1;
+ (void)checkIsCameraEmoticonAddEntryEnabledWithType:(unsigned long long)arg1 For:(id)arg2;
+ (void)checkIsCustomEmoticonAddEntryEnabledWithType:(unsigned long long)arg1 For:(id)arg2;
+ (id)getConfigWithAllTabItemDisabled;
@end

