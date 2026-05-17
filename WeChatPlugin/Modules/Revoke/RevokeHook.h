#import <Foundation/Foundation.h>

@interface RevokeHook : NSObject
+ (void)install;
+ (BOOL)checkHook;
+ (BOOL)checkHookWithSeq:(int)seq;
@end
