@interface EmoticonBoardViewFactory : NSObject
+ (id)getViewConfigWithType:(int)arg1 andFactoryHelper:(id)arg2;
+ (void)setupViewMiscOptionsForConfig:(id)arg1 WithType:(int)arg2 andFactoryHelper:(id)arg3;
+ (void)setupTabConfig:(id)arg1 WithType:(int)arg2;
+ (void)checkIsCameraEntranceEnabledFor:(id)arg1;
+ (void)checkIsCameraEmoticonAddEntryEnabledWithType:(int)arg1 For:(id)arg2;
+ (void)checkIsCustomEmoticonAddEntryEnabledWithType:(int)arg1 For:(id)arg2;
+ (id)getConfigWithAllTabItemDisabled;
@end
