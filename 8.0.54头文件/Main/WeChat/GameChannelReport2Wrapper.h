@interface GameChannelReport2Wrapper : NSObject
+ (id)sharedInstance;
- (void)initZTSDK;
- (id)channelInfoFromGameChannelReportInfo:(id)arg1;
- (void)reportWithGameChannelReportInfo:(id)arg1 isLaunchApp:(BOOL)arg2;
@end

