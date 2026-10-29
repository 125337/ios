@interface WCFinderPushProfileParams : NSObject
{
    BOOL _isNotRefFeedAuthor; // +0x8
    BOOL _isAvatarLivingShowing; // +0x9
    BOOL _fromEventDescriptionContact; // +0xa
    BOOL _fromOtherBusiness; // +0xb
    BOOL _showsMoreNoticesAutomatically; // +0xc
    BOOL _showHalfScreen; // +0xd
    BOOL _halfShowBgMask; // +0xe
    BOOL _preserveUnderlyingPageSheets; // +0xf
    BOOL _isInsideFinderCallJsapi; // +0x10
    BOOL _forbidenRecursiveSameContactJump; // +0x11
    BOOL _asAuthor; // +0x12
    int _reportScene; // +0x14
    int _cardType; // +0x18
    int _enterScene; // +0x1c
    int _enterType; // +0x20
    int _selectedTab; // +0x24
    int _fromFeedScene; // +0x28
    unsigned int _followScene; // +0x2c
    NSString * _feedID; // +0x30
    NSString * _nonceID; // +0x38
    NSString * _adParamInfoStr; // +0x40
    NSString * _commentAdInfo; // +0x48
    unsigned long long _avatarType; // +0x50
    NSString * _refPageType; // +0x58
    unsigned long long _streamEntranceType; // +0x60
    NSString * _otherBusinessExtraInfo; // +0x68
    NSDictionary * _appendExtraInfo; // +0x70
    NSString * _enterSourceFeedID; // +0x78
    long long _qrcodeScene; // +0x80
    NSString * _qrCodeURL; // +0x88
    NSString * _liveNoticeEncryptedId; // +0x90
    NSString * _promoterToken; // +0x98
    double _timeoutIntervalForShowingMoreNoticesAutomatically; // +0xa0
    UIView * _bgResponder; // +0xa8
    NSString * _redPacketLinkUrl; // +0xb0
    NSString * _redPacketCoverId; // +0xb8
    long long _redPacketJumpFrom; // +0xc0
    NSString * _searchWord; // +0xc8
    NSString * _fromLiveId; // +0xd0
    NSString * _fromScene; // +0xd8
    UIViewController<WCFinderFeedBaseViewControllerProtocol> * _fromVC; // +0xe0
    NSString * _fromUsername; // +0xe8
    NSString * _talkerName; // +0xf0
    WCFinderJustWatchCollectionFeedItem * _justWatchCollectionFeedItem; // +0xf8
    NSString * _ecSource; // +0x100
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x108
    JsApiSourceInfo * _jsApiSourceInfo; // +0x110
    NSString * _noticeJumperAdReportInfo; // +0x118
    NSString * _livingJumperAdReportInfo; // +0x120
    WCFinderMyTabEntranceParams * _myTabParams; // +0x128
    NSDictionary * _enterPageUdfKv; // +0x130
    WCFinderDataItem * _fromDataItem; // +0x138
    WCFinderProfilePreloadInfo * _preloadInfo; // +0x140
    WCFinderStreamProfileExtInfo * _passProfileExtInfo; // +0x148
    NSDictionary * _businessByPass; // +0x150
    FinderMention_FinderMentionThankInfo_RedPackageInfo * _mentionThanksRedpackageInfo; // +0x158
    NSDictionary * _additionalClientUdfKV; // +0x160
    unsigned long long _enterActionType; // +0x168
    WCFinderJustWatchFeedInfo * _jumpFeedInfo; // +0x170
    NSString * _exportUsername; // +0x178
    id /* block */ _profileCloseCallback; // +0x180
}
+ (id)defaultParams;
- (id)init;
- (id)copy;
- (void)setEnterType:(int)arg1;
- (void)setupShowJustWatchToFeed:(id)arg1 sessionBuffer:(id)arg2;
- (void)setupPoiJumpToFeed:(id)arg1;
- (void)setupLiveAdditionalUdfKVToDataItem:(id)arg1 enterSessionId:(unsigned long long)arg2;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (BOOL)isNotRefFeedAuthor;
- (void)setIsNotRefFeedAuthor:(BOOL)arg1;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (id)adParamInfoStr;
- (void)setAdParamInfoStr:(id)arg1;
- (id)commentAdInfo;
- (void)setCommentAdInfo:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (int)enterType;
- (unsigned long long)avatarType;
- (void)setAvatarType:(unsigned long long)arg1;
- (BOOL)isAvatarLivingShowing;
- (void)setIsAvatarLivingShowing:(BOOL)arg1;
- (id)refPageType;
- (void)setRefPageType:(id)arg1;
- (unsigned long long)streamEntranceType;
- (void)setStreamEntranceType:(unsigned long long)arg1;
- (BOOL)fromEventDescriptionContact;
- (void)setFromEventDescriptionContact:(BOOL)arg1;
- (BOOL)isFromOtherBusiness;
- (void)setFromOtherBusiness:(BOOL)arg1;
- (id)otherBusinessExtraInfo;
- (void)setOtherBusinessExtraInfo:(id)arg1;
- (id)appendExtraInfo;
- (void)setAppendExtraInfo:(id)arg1;
- (id)enterSourceFeedID;
- (void)setEnterSourceFeedID:(id)arg1;
- (long long)qrcodeScene;
- (void)setQrcodeScene:(long long)arg1;
- (id)qrCodeURL;
- (void)setQrCodeURL:(id)arg1;
- (id)liveNoticeEncryptedId;
- (void)setLiveNoticeEncryptedId:(id)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
- (BOOL)showsMoreNoticesAutomatically;
- (void)setShowsMoreNoticesAutomatically:(BOOL)arg1;
- (double)timeoutIntervalForShowingMoreNoticesAutomatically;
- (void)setTimeoutIntervalForShowingMoreNoticesAutomatically:(double)arg1;
- (BOOL)showHalfScreen;
- (void)setShowHalfScreen:(BOOL)arg1;
- (BOOL)halfShowBgMask;
- (void)setHalfShowBgMask:(BOOL)arg1;
- (BOOL)preserveUnderlyingPageSheets;
- (void)setPreserveUnderlyingPageSheets:(BOOL)arg1;
- (id)bgResponder;
- (void)setBgResponder:(id)arg1;
- (id)redPacketLinkUrl;
- (void)setRedPacketLinkUrl:(id)arg1;
- (id)redPacketCoverId;
- (void)setRedPacketCoverId:(id)arg1;
- (long long)redPacketJumpFrom;
- (void)setRedPacketJumpFrom:(long long)arg1;
- (int)selectedTab;
- (void)setSelectedTab:(int)arg1;
- (id)searchWord;
- (void)setSearchWord:(id)arg1;
- (id)fromLiveId;
- (void)setFromLiveId:(id)arg1;
- (id)fromScene;
- (void)setFromScene:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)talkerName;
- (void)setTalkerName:(id)arg1;
- (id)justWatchCollectionFeedItem;
- (void)setJustWatchCollectionFeedItem:(id)arg1;
- (BOOL)isInsideFinderCallJsapi;
- (void)setIsInsideFinderCallJsapi:(BOOL)arg1;
- (BOOL)forbidenRecursiveSameContactJump;
- (void)setForbidenRecursiveSameContactJump:(BOOL)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (id)jsApiSourceInfo;
- (void)setJsApiSourceInfo:(id)arg1;
- (id)noticeJumperAdReportInfo;
- (void)setNoticeJumperAdReportInfo:(id)arg1;
- (id)livingJumperAdReportInfo;
- (void)setLivingJumperAdReportInfo:(id)arg1;
- (id)myTabParams;
- (void)setMyTabParams:(id)arg1;
- (id)enterPageUdfKv;
- (void)setEnterPageUdfKv:(id)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (int)fromFeedScene;
- (void)setFromFeedScene:(int)arg1;
- (unsigned int)followScene;
- (void)setFollowScene:(unsigned int)arg1;
- (id)preloadInfo;
- (void)setPreloadInfo:(id)arg1;
- (id)passProfileExtInfo;
- (void)setPassProfileExtInfo:(id)arg1;
- (id)businessByPass;
- (void)setBusinessByPass:(id)arg1;
- (id)mentionThanksRedpackageInfo;
- (void)setMentionThanksRedpackageInfo:(id)arg1;
- (id)additionalClientUdfKV;
- (void)setAdditionalClientUdfKV:(id)arg1;
- (unsigned long long)enterActionType;
- (void)setEnterActionType:(unsigned long long)arg1;
- (id)jumpFeedInfo;
- (void)setJumpFeedInfo:(id)arg1;
- (BOOL)asAuthor;
- (void)setAsAuthor:(BOOL)arg1;
- (id)exportUsername;
- (void)setExportUsername:(id)arg1;
- (id /* block */)profileCloseCallback;
- (void)setProfileCloseCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
