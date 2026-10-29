@interface RebootWarningService : MMUserService <MMServiceProtocol>
- (unsigned int)getTimeElapsedSinceLastAlertAppears;
- (void)setTimeWhenAlertAppears;
- (void)resetTimeOfWhenAlertAppears;
- (BOOL)shouldShowAlert;
- (void)showAlertWithID:(int)arg1 Key:(int)arg2 Value:(int)arg3 IsImportant:(BOOL)arg4;
- (BOOL)tryToShowAlertWithID:(int)arg1 Key:(int)arg2 Value:(int)arg3 IsImportant:(BOOL)arg4;
@end

