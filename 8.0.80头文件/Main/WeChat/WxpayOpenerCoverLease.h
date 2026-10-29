@interface WxpayOpenerCoverLease : NSObject
+ (BOOL)coverParent:(unsigned long long)arg1 child:(unsigned long long)arg2;
+ (BOOL)uncoverParent:(unsigned long long)arg1 child:(unsigned long long)arg2;
+ (void)forgetParent:(unsigned long long)arg1;
+ (void)resetForTesting;
@end
