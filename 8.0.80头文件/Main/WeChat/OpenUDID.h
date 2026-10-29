@interface OpenUDID : NSObject
+ (void)_setDict:(id)arg1 forPasteboard:(id)arg2;
+ (id)_getDictFromPasteboard:(id)arg1;
+ (id)_generateFreshOpenUDID;
+ (id)value;
+ (id)valueWithError:(id *)arg1;
+ (void)setOptOut:(BOOL)arg1;
@end
