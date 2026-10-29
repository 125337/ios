@interface WCAdCardBtnInfo : NSObject <NSCoding>
{
    BOOL _bInternalJumpAppStore; // +0x8
    BOOL _hasSubscribeSuc; // +0x9
    BOOL _singleLineBtn; // +0xa
    unsigned int _weappVersion; // +0xc
    int _miniProgramType; // +0x10
    int _appType; // +0x14
    NSString * _btnTitle; // +0x18
    NSString * _iconUrl; // +0x20
    long long _clickActionType; // +0x28
    NSString * _clickActionLink; // +0x30
    NSString * _weappUserName; // +0x38
    NSString * _weappPath; // +0x40
    WCAdOpenWeGameHalfScreenInfo * _openWeGameHalfScreenInfo; // +0x48
    NSString * _appJumpUrl; // +0x50
    NSString * _openSdkAppId; // +0x58
    NSString * _appPageUrl; // +0x60
    WCAdOpenAppHalfScreenInfo * _openAppHalfScreenInfo; // +0x68
    NSString * _cardTpId; // +0x70
    NSString * _cardExt; // +0x78
    NSString * _tempId; // +0x80
    NSString * _btnTitleAfterSubscribe; // +0x88
    NSString * _subscribeTitle; // +0x90
    NSString * _subscribeContent; // +0x98
    NSString * _subscribeSubmitBtnTitle; // +0xa0
    NSString * _appId; // +0xa8
    NSString * _subscribeSucTip; // +0xb0
    NSString * _subscribeFailedTip; // +0xb8
    NSString * _subscribeHeadImage; // +0xc0
    NSString * _subscribeNickname; // +0xc8
    unsigned long long _subscribeExpiredTime; // +0xd0
    NSString * _subscribeExpiredTip; // +0xd8
    WCAdQuicklyAddBrandInfo * _quicklyAddBrandInfo; // +0xe0
    WCAdCouponInfo * _adCouponInfo; // +0xe8
    WCAdFinderLiveNoticeInfo * _adFinderLiveNoticeInfo; // +0xf0
    WCAdFinderLiveInfo * _adFinderLiveInfo; // +0xf8
    WCAdFinderTopicInfo * _adFinderTopicInfo; // +0x100
    WCAdFinderInfo * _adFinderFeedInfo; // +0x108
    WCAdFinderFollowInfo * _adFinderFollowInfo; // +0x110
    WCAdFinderProfileInfo * _adFinderProfileInfo; // +0x118
    WCAdAppGiftPackCodeInfo * _adAppGiftPackCodeInfo; // +0x120
    WCAdAppointmentInfo * _adAppointmentInfo; // +0x128
    WCAdSearchH5Info * _adSearchH5Info; // +0x130
    WCAdCustomerServiceInfo * _adCustomerServiceInfo; // +0x138
    WCAdBrandProfileInfo * _adBrandProfileInfo; // +0x140
    WCAdClickActionCanvasInfo * _adClickActionCanvasInfo; // +0x148
    WCAdStatePublishInfo * _adStatePublishInfo; // +0x150
    WCAdQrCodeScanInfo * _adQrCodeScanInfo; // +0x158
    WCAdDynamicCanvasLoadInfo * _adDynamicCanvasLoadInfo; // +0x160
    WCAdConventionalHalfScreenInfo * _adConventionalHalfScreenInfo; // +0x168
    WCAdMiniShopInfo * _adMiniShopInfo; // +0x170
    WCAdLiteAppInfo * _adLiteAppInfo; // +0x178
    WCAdCardBtnAnimationInfo * _btnAnimationInfo; // +0x180
    NSString * _btnColor; // +0x188
    NSString * _btnBgColor; // +0x190
    NSString * _btnDarkColor; // +0x198
    NSString * _btnBgDarkColor; // +0x1a0
    WCAdCardBtnInfo * _defaultClickActionInfo; // +0x1a8
    long long _indirectJumpType; // +0x1b0
    long long _originClickActionType; // +0x1b8
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidForShowActionBtn;
- (unsigned int)fetchAdClickActionType;
- (unsigned int)fetchAdOriginClickActionType;
- (unsigned int)fetchAdClickActionTypeWithClickActionType:(long long)arg1;
- (id)fetchAdClickActionLink;
- (BOOL)isValidForJumpToWeApp;
- (id)getWeAppInfo;
- (BOOL)isValidForHalfScreen;
- (BOOL)isValidForHalfScreenActionLink;
- (BOOL)isValidForHalfScreenQrCode;
- (BOOL)isValidForHalfScreenLinkProfile;
- (BOOL)isValidForHalfScreenCustomerService;
- (BOOL)shouldHalfScreenRepresentAsH5;
- (BOOL)shouldFetchHalfScreenMinHeightPercent;
- (double)fetchHalfScreenMinHeightPercent;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (long long)clickActionType;
- (void)setClickActionType:(long long)arg1;
- (id)clickActionLink;
- (void)setClickActionLink:(id)arg1;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (id)weappPath;
- (void)setWeappPath:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (int)miniProgramType;
- (void)setMiniProgramType:(int)arg1;
- (id)openWeGameHalfScreenInfo;
- (void)setOpenWeGameHalfScreenInfo:(id)arg1;
- (id)appJumpUrl;
- (void)setAppJumpUrl:(id)arg1;
- (id)openSdkAppId;
- (void)setOpenSdkAppId:(id)arg1;
- (id)appPageUrl;
- (void)setAppPageUrl:(id)arg1;
- (BOOL)bInternalJumpAppStore;
- (void)setBInternalJumpAppStore:(BOOL)arg1;
- (id)openAppHalfScreenInfo;
- (void)setOpenAppHalfScreenInfo:(id)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (id)tempId;
- (void)setTempId:(id)arg1;
- (id)btnTitleAfterSubscribe;
- (void)setBtnTitleAfterSubscribe:(id)arg1;
- (id)subscribeTitle;
- (void)setSubscribeTitle:(id)arg1;
- (id)subscribeContent;
- (void)setSubscribeContent:(id)arg1;
- (id)subscribeSubmitBtnTitle;
- (void)setSubscribeSubmitBtnTitle:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (int)appType;
- (void)setAppType:(int)arg1;
- (id)subscribeSucTip;
- (void)setSubscribeSucTip:(id)arg1;
- (id)subscribeFailedTip;
- (void)setSubscribeFailedTip:(id)arg1;
- (id)subscribeHeadImage;
- (void)setSubscribeHeadImage:(id)arg1;
- (id)subscribeNickname;
- (void)setSubscribeNickname:(id)arg1;
- (BOOL)hasSubscribeSuc;
- (void)setHasSubscribeSuc:(BOOL)arg1;
- (unsigned long long)subscribeExpiredTime;
- (void)setSubscribeExpiredTime:(unsigned long long)arg1;
- (id)subscribeExpiredTip;
- (void)setSubscribeExpiredTip:(id)arg1;
- (id)quicklyAddBrandInfo;
- (void)setQuicklyAddBrandInfo:(id)arg1;
- (id)adCouponInfo;
- (void)setAdCouponInfo:(id)arg1;
- (id)adFinderLiveNoticeInfo;
- (void)setAdFinderLiveNoticeInfo:(id)arg1;
- (id)adFinderLiveInfo;
- (void)setAdFinderLiveInfo:(id)arg1;
- (id)adFinderTopicInfo;
- (void)setAdFinderTopicInfo:(id)arg1;
- (id)adFinderFeedInfo;
- (void)setAdFinderFeedInfo:(id)arg1;
- (id)adFinderFollowInfo;
- (void)setAdFinderFollowInfo:(id)arg1;
- (id)adFinderProfileInfo;
- (void)setAdFinderProfileInfo:(id)arg1;
- (id)adAppGiftPackCodeInfo;
- (void)setAdAppGiftPackCodeInfo:(id)arg1;
- (id)adAppointmentInfo;
- (void)setAdAppointmentInfo:(id)arg1;
- (id)adSearchH5Info;
- (void)setAdSearchH5Info:(id)arg1;
- (id)adCustomerServiceInfo;
- (void)setAdCustomerServiceInfo:(id)arg1;
- (id)adBrandProfileInfo;
- (void)setAdBrandProfileInfo:(id)arg1;
- (id)adClickActionCanvasInfo;
- (void)setAdClickActionCanvasInfo:(id)arg1;
- (id)adStatePublishInfo;
- (void)setAdStatePublishInfo:(id)arg1;
- (id)adQrCodeScanInfo;
- (void)setAdQrCodeScanInfo:(id)arg1;
- (id)adDynamicCanvasLoadInfo;
- (void)setAdDynamicCanvasLoadInfo:(id)arg1;
- (id)adConventionalHalfScreenInfo;
- (void)setAdConventionalHalfScreenInfo:(id)arg1;
- (id)adMiniShopInfo;
- (void)setAdMiniShopInfo:(id)arg1;
- (id)adLiteAppInfo;
- (void)setAdLiteAppInfo:(id)arg1;
- (id)btnAnimationInfo;
- (void)setBtnAnimationInfo:(id)arg1;
- (BOOL)singleLineBtn;
- (void)setSingleLineBtn:(BOOL)arg1;
- (id)btnColor;
- (void)setBtnColor:(id)arg1;
- (id)btnBgColor;
- (void)setBtnBgColor:(id)arg1;
- (id)btnDarkColor;
- (void)setBtnDarkColor:(id)arg1;
- (id)btnBgDarkColor;
- (void)setBtnBgDarkColor:(id)arg1;
- (id)defaultClickActionInfo;
- (void)setDefaultClickActionInfo:(id)arg1;
- (long long)indirectJumpType;
- (void)setIndirectJumpType:(long long)arg1;
- (long long)originClickActionType;
- (void)setOriginClickActionType:(long long)arg1;
- (void).cxx_destruct;
@end

