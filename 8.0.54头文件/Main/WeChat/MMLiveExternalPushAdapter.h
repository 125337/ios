@interface MMLiveExternalPushAdapter : MMLiveTRTCPushAdapter
- (BOOL)canStartLocalCapture;
- (void)startLocalVideo;
- (void)switchVideoSourceTo:(unsigned long long)arg1;
- (void)enableCustomVideoCapture:(BOOL)arg1;
@end

