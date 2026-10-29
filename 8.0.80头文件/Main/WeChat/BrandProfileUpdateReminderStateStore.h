@interface BrandProfileUpdateReminderStateStore : NSObject
+ (id)sharedStore;
- (BOOL)canShowForUsername:(id)arg1;
- (BOOL)isExpectedForUsername:(id)arg1;
- (BOOL)isRequestingForUsername:(id)arg1;
- (unsigned int)genderForUsername:(id)arg1;
- (void)updateCanShow:(BOOL)arg1 expected:(BOOL)arg2 gender:(unsigned int)arg3 requestUsername:(id)arg4 forUsername:(id)arg5;
- (void)requestForUsername:(id)arg1 cancel:(BOOL)arg2 completion:(id /* block */)arg3;
@end
