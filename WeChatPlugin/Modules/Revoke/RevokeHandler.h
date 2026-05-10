#import <Foundation/Foundation.h>

@interface RevokeHandler : NSObject
+ (instancetype)shared;
- (BOOL)handleRevoke:(id)revokeWrap chatName:(NSString *)chatNameHint;
- (BOOL)handleRevokeFromXmlSysMsg:(NSString *)xmlStr chatName:(NSString *)chatName;
- (BOOL)handleRevokeFromVCXml:(NSString *)xmlStr chatName:(NSString *)chatName;
- (BOOL)isSelfRevoke:(id)msgWrap;
@end
