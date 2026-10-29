@interface MMUIKitAdapterUtil : NSObject
+ (id)getFirstActiveWindowScene;
+ (void)enumerateWindowWithBlock:(id /* block */)arg1;
+ (id)keyWindow;
+ (CGRect)statusBarFrame;
+ (long long)statusBarStyle;
+ (BOOL)statusBarHidden;
+ (BOOL)isIgnoringInteractionEvents;
+ (void)beginIgnoringInteractionEvents;
+ (void)endIgnoringInteractionEvents;
@end

