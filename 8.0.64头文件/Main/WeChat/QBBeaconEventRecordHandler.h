@interface QBBeaconEventRecordHandler : NSObject
+ (id)getDefaultHandler;
- (id)init;
- (void)createRecordObject:(id)arg1 withName:(id)arg2 isSucceed:(BOOL)arg3 elapse:(long long)arg4 size:(long long)arg5 params:(id)arg6 isRealEvent:(BOOL)arg7;
- (id)createEventResultFromParam:(id)arg1 params:(id)arg2;
- (void)appendStringWithUrlEncoding:(id)arg1 str:(id)arg2 pos:(id)arg3 encoding:(BOOL)arg4;
- (id)createEventObj:(id)arg1 isSucceed:(BOOL)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 isRealEvent:(BOOL)arg6;
- (BOOL)recordUserEvent:(id)arg1 isSucceed:(BOOL)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
@end
