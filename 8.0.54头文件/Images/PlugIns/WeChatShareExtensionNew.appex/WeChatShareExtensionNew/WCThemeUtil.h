@interface WCThemeUtil : NSObject
+ (id)drawImage:(id)arg1 withColor:(id)arg2;
+ (id)imageFromColor:(id)arg1;
+ (id)imageFromColor:(id)arg1 withSize:(CGSize)arg2;
+ (id)imageWithColor:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 resizableWithCapInsets:(UIEdgeInsets)arg4;
+ (id)imageWithColor:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 roundingCorners:(unsigned long long)arg4 isResizable:(BOOL)arg5 resizeCapInsets:(UIEdgeInsets)arg6;
+ (id)realMakeImageWithColor:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 roundingCorners:(unsigned long long)arg4 isResizable:(BOOL)arg5 resizeCapInsets:(UIEdgeInsets)arg6;
+ (id)imageInLightMode:(id)arg1;
+ (id)imageInDarkMode:(id)arg1;
+ (id)imageInLightMode:(id)arg1 darkMode:(id)arg2;
@end

