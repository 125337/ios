@interface CommonAffContextObjcStatic : NSObject
+ (id)currentContext;
+ (id)fastCurrentContext;
+ (id)activeUserContext;
+ (void)push:(id)arg1;
+ (void)pop:(id)arg1;
+ (id)getAffServiceCenter:(BOOL)arg1;
@end
