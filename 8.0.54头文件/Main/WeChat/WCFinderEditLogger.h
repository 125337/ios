@interface WCFinderEditLogger : MMUserService <TAVLoger, MMServiceProtocol, MAVLogger>
- (void)setupEditVideoCompositionLogger;
- (void)onServiceClearData;
- (void)logInfo:(id)arg1;
- (void)logDebug:(id)arg1;
- (void)logWarning:(id)arg1;
- (void)logError:(id)arg1;
- (void)mavLogInfo:(id)arg1;
- (void)mavLogDebug:(id)arg1;
- (void)mavLogWarning:(id)arg1;
- (void)mavLogError:(id)arg1;
@end

