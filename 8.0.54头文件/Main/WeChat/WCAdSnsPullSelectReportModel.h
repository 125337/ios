@interface WCAdSnsPullSelectReportModel : NSObject
{
    int _stateType; // +0x8
    WCAdSnsPullSelectAdInfo * _timelinePullAd; // +0x10
    WCAdSnsPullSelectAdInfo * _adPullAd; // +0x18
    NSString * _sessionKeyAd; // +0x20
    NSString * _selectedSnsId; // +0x28
}
- (id)timelinePullAd;
- (void)setTimelinePullAd:(id)arg1;
- (id)adPullAd;
- (void)setAdPullAd:(id)arg1;
- (id)sessionKeyAd;
- (void)setSessionKeyAd:(id)arg1;
- (id)selectedSnsId;
- (void)setSelectedSnsId:(id)arg1;
- (int)stateType;
- (void)setStateType:(int)arg1;
- (void).cxx_destruct;
@end

