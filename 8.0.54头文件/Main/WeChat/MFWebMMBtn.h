@interface MFWebMMBtn : MFBannerBtn <IOnlineClientMgrExt>
- (id)initWithFrame:(CGRect)arg1;
- (id)GetOnlineSummaryWording;
- (void)updateWithOnlineStatus;
- (void)updateDeviceIcon;
- (void)onOnlineInfoUpdated;
@end

