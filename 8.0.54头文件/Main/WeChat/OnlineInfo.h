@interface OnlineInfo : WXPBGeneratedMessage
+ (void)initialize;
- (id)GetWordingForKey:(id)arg1;
- (BOOL)isLocked;
- (unsigned long long)GetExtDeviceControls;
- (id)GetOnlineTitle;
- (id)GetUnlockTitle;
- (id)GetOnlineSummaryWording;
- (id)GetOnlineIcon;
- (BOOL)showAutoLoginEntrance;
- (BOOL)isAutoLoginEnabled;
- (BOOL)showKeepAliveEntrance;
- (BOOL)isKeepAliveEnabled;
@end

