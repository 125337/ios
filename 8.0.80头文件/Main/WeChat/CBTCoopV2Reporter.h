@interface CBTCoopV2Reporter : NSObject
+ (id)reportQueue;
+ (id)stringValue:(id)arg1;
+ (void)reportEvent:(id)arg1 attributes:(id)arg2 viewModel:(id)arg3;
+ (id)fnv1a32String:(id)arg1;
+ (id)nextItemIdentifierForModule:(id)arg1;
@end
