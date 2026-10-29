@interface LoginAgreeSyncMsgLogic : NSObject
+ (id)getMMKV;
+ (int)getAuthSyncFlag;
+ (void)setAuthSyncFlag:(int)arg1;
+ (void)initLogic;
+ (void)onExptItemListChange;
+ (BOOL)isAgreeSyncEnabled;
+ (void)getExptAndSaveToMMKV;
@end
