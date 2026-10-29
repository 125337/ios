@interface WCFinderBaseIntent : NSObject <IWCFinderIntentDelegate>
- (id)hashIntent;
- (void)putKey:(id)arg1 andVal:(id)arg2;
- (id)getValByKey:(id)arg1;
- (id)traceValByKey:(id)arg1;
- (BOOL)bindPreviousIntent:(id)arg1;
- (BOOL)clearIntent;
- (void)dealloc;
@end

