@interface MAVNSLogger : NSObject <MAVLogger>
+ (void)setup;
- (void)mavLogInfo:(id)arg1;
- (void)mavLogDebug:(id)arg1;
- (void)mavLogWarning:(id)arg1;
- (void)mavLogError:(id)arg1;
@end
