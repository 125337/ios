@interface ExtensionRegisterTool : NSObject
+ (id)createExtensionHandleKey:(id)arg1;
+ (void)registerExtension:(id)arg1 withSelector:(SEL)arg2 andAction:(id)arg3;
+ (void)releaseExtension:(id)arg1;
@end
