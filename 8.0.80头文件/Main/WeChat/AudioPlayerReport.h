@interface AudioPlayerReport : NSObject
+ (void)reportIdkeyStartLaunch;
+ (void)reportIdkeyQueueStartFailedFirst;
+ (void)reportIdkeyQueueStartFailedSecond;
+ (void)reportIdkeyLaunchSuccess;
+ (void)reportIdkeyManualStop;
+ (void)reportIdkeyStartWithEarPhone;
+ (void)reportIdKeyStartWithSpeaker;
+ (void)reportIdkeySwitchToEarPhone;
+ (void)reportIdkeyLaunchWirelessDeivce;
+ (void)reportIdkeyQueueSecondStartSuccess;
+ (void)reportIdkeyLaunchLineDevice;
+ (void)reportIdkeyLaunchDevice:(unsigned long long)arg1;
+ (void)reportIdkeyProximityStateError;
+ (void)reportIdkeyTryFixEarVolume;
+ (void)reportIdkeyFixEarVolumeSucc;
@end
