@interface WCFinderSyncParamsModel : NSObject
{
    BOOL _isFinderDau; // +0x8
    int _selectorType; // +0xc
    int _scene; // +0x10
    int _reportScene; // +0x14
    long long _stayTLInterval; // +0x18
    WCFinderRedDotCtrlInfo * _guideRedDotCtrlInfo; // +0x20
    WCFinderRedDotCtrlInfo * _finderEntranceRedDotCtrlInfo; // +0x28
    long long _businessFlagShowOnBadge; // +0x30
    FinderSyncClientStatus_DiscoveryReddotInfo * _finderDiscoveryReddotInfo; // +0x38
    FinderSyncClientStatus_DiscoveryReddotInfo * _liveDiscoveryReddotInfo; // +0x40
    FinderSyncClientStatus_DiscoveryReddotInfo * _socialHotDiscoveryReddotInfo; // +0x48
    NSData * _notifyData; // +0x50
}
- (id)initWithSelectorType:(int)arg1 scene:(int)arg2 reportScene:(int)arg3 stayTLInterval:(long long)arg4;
- (int)selectorType;
- (void)setSelectorType:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (long long)stayTLInterval;
- (void)setStayTLInterval:(long long)arg1;
- (id)guideRedDotCtrlInfo;
- (void)setGuideRedDotCtrlInfo:(id)arg1;
- (id)finderEntranceRedDotCtrlInfo;
- (void)setFinderEntranceRedDotCtrlInfo:(id)arg1;
- (long long)businessFlagShowOnBadge;
- (void)setBusinessFlagShowOnBadge:(long long)arg1;
- (id)finderDiscoveryReddotInfo;
- (void)setFinderDiscoveryReddotInfo:(id)arg1;
- (id)liveDiscoveryReddotInfo;
- (void)setLiveDiscoveryReddotInfo:(id)arg1;
- (id)socialHotDiscoveryReddotInfo;
- (void)setSocialHotDiscoveryReddotInfo:(id)arg1;
- (BOOL)isFinderDau;
- (void)setIsFinderDau:(BOOL)arg1;
- (id)notifyData;
- (void)setNotifyData:(id)arg1;
- (void).cxx_destruct;
@end
