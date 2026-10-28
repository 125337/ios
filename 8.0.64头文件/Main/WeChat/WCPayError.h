@interface WCPayError : NSError
+ (id)genError:(int)arg1 errMsg:(id)arg2;
+ (id)genError:(int)arg1 errMsg:(id)arg2 extraKey:(id)arg3 extraValue:(id)arg4;
@end
