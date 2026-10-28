@interface TenpayUDID : NSObject
+ (id)value;
+ (id)getUDIDInKeyChain;
+ (void)saveUDIDInKeyChain:(id)arg1;
+ (id)generateFreshUDID;
@end
