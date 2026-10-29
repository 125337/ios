@interface FlutterSharedApplication : NSObject
+ (BOOL)isAppExtension;
+ (BOOL)isAvailable;
+ (id)application;
+ (id)sharedApplication;
@end
