@interface WCPaySecurityTouchLockState : NSObject
+ (void)setStateWithBase64String:(id)arg1;
+ (void)setStateWithData:(id)arg1;
+ (BOOL)isOldState:(id)arg1;
+ (BOOL)isTouchLockOpen;
+ (void)setTouchLockOpen:(BOOL)arg1;
+ (BOOL)isNotSupportTouchLock;
@end

