@interface MFWebMMBtn : MFBannerBtn <IOnlineClientMgrExt>
{
    int _status; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initStatus;
- (void)uninitStatus;
- (id)GetOnlineSummaryWording;
- (void)updateWithOnlineStatus;
- (void)updateDeviceIcon;
- (void)onOnlineInfoUpdated;
- (void)dealloc;
- (void)cleanStatus;
- (int)status;
- (void)setStatus:(int)arg1;
@end
