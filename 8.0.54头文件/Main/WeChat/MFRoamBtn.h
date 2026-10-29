@interface MFRoamBtn : MFBannerBtn <MFBanner>
{
    unsigned long long m_notifyCode; // +0x8
    NSString * _lastImageName; // +0x10
    NSString * _lastBannerString; // +0x18
    MMTimer * _roamTimer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)onGetTransferStat;
- (void)setupFlowTextView:(id)arg1;
- (void)setupImage:(id)arg1;
- (void)setRoamBannerIcon:(id)arg1 title:(id)arg2;
- (void)onRoamServiceNotifyCode:(unsigned long long)arg1;
- (void)onRoamServiceTerminateRoamBanner;
- (id)lastImageName;
- (void)setLastImageName:(id)arg1;
- (id)lastBannerString;
- (void)setLastBannerString:(id)arg1;
- (id)roamTimer;
- (void)setRoamTimer:(id)arg1;
- (void).cxx_destruct;
@end

