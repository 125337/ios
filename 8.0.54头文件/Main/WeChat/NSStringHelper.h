@interface NSStringHelper : NSObject
+ (BOOL)isDigit:(id)arg1 Length:(unsigned long long)arg2;
+ (BOOL)isPhoneNum:(id)arg1;
+ (BOOL)isBankCardNum:(id)arg1;
+ (BOOL)isUserIDNum:(id)arg1;
+ (BOOL)invalidateID:(id)arg1;
+ (BOOL)isHuiXiangID:(id)arg1;
+ (BOOL)isTaiBaoID:(id)arg1;
+ (BOOL)ISHkID:(id)arg1;
+ (BOOL)ISTwID:(id)arg1;
+ (BOOL)ISMcID:(id)arg1;
+ (id)randomStringWithLength:(long long)arg1;
@end

