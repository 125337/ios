#import <Foundation/Foundation.h>

@interface RevokeHandler : NSObject
+ (instancetype)shared;
- (BOOL)handleRevoke:(id)revokeWrap chatName:(NSString *)chatNameHint;
- (BOOL)isSelfRevoke:(id)msgWrap;
@end
