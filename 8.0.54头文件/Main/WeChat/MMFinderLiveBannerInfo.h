@interface MMFinderLiveBannerInfo : NSObject
{
    BOOL _needPreload; // +0x8
    unsigned int _reportSwitch; // +0xc
    unsigned int _reportNewCgi; // +0x10
    unsigned int _jumpinfoType; // +0x14
    unsigned int _businessType; // +0x18
    unsigned int _supportShare; // +0x1c
    unsigned int _extType; // +0x20
    unsigned int _activitySwitchDisplayInterval; // +0x24
    unsigned int _actionType; // +0x28
    unsigned int _remainClickTimes; // +0x2c
    unsigned long long _bizType; // +0x30
    NSString * _iconUrl; // +0x38
    NSString * _wording; // +0x40
    NSString * _extInfo; // +0x48
    FinderJumpInfo_Html5Info * _html5Info; // +0x50
    FinderJumpInfo_NativeInfo * _nativeInfo; // +0x58
    NSData * _extBuf; // +0x60
    FinderJumpInfo * _oriJumpInfo; // +0x68
    NSString * _activityId; // +0x70
    NSString * _actionUrl; // +0x78
}
- (id)initWithJumpInfo:(id)arg1;
- (id)initWithQuestActivityInfo:(id)arg1;
- (void)copyFrom:(id)arg1;
- (id)extInfoModel;
- (float)displayIntervalS;
- (BOOL)isMoreLiveBanner;
- (BOOL)isNotifyBanner;
- (BOOL)isAnchorTaskBanner;
- (BOOL)isSearchBanner;
- (BOOL)isGiftWallBanner;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualBanner:(id)arg1;
- (id)bannerId;
- (void)reportRealTimeClick:(id)arg1;
- (BOOL)updateSubTitleList:(id)arg1;
- (BOOL)updateWithBannerInfo:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned int)reportSwitch;
- (void)setReportSwitch:(unsigned int)arg1;
- (unsigned int)reportNewCgi;
- (void)setReportNewCgi:(unsigned int)arg1;
- (unsigned int)jumpinfoType;
- (void)setJumpinfoType:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)html5Info;
- (void)setHtml5Info:(id)arg1;
- (id)nativeInfo;
- (void)setNativeInfo:(id)arg1;
- (unsigned int)supportShare;
- (void)setSupportShare:(unsigned int)arg1;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg1;
- (unsigned int)extType;
- (void)setExtType:(unsigned int)arg1;
- (id)extBuf;
- (void)setExtBuf:(id)arg1;
- (id)oriJumpInfo;
- (void)setOriJumpInfo:(id)arg1;
- (unsigned int)activitySwitchDisplayInterval;
- (void)setActivitySwitchDisplayInterval:(unsigned int)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)actionUrl;
- (void)setActionUrl:(id)arg1;
- (unsigned int)remainClickTimes;
- (void)setRemainClickTimes:(unsigned int)arg1;
- (void).cxx_destruct;
@end

