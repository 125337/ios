@interface WCFinderPushProfileParams : NSObject
{
    BOOL _isNotRefFeedAuthor; // +0x8
    BOOL _isAvatarLivingShowing; // +0x9
    BOOL _fromEventDescriptionContact; // +0xa
    BOOL _fromOtherBusiness; // +0xb
    BOOL _showsMoreNoticesAutomatically; // +0xc
    BOOL _showHalfScreen; // +0xd
    BOOL _halfShowBgMask; // +0xe
    BOOL _isInsideFinderCallJsapi; // +0xf
    BOOL _forbidenRecursiveSameContactJump; // +0x10
    BOOL _asAuthor; // +0x11
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
    NSString * _enterSourceFeedID; // +0x70
    long long _qrcodeScene; // +0x78
    NSString * _qrCodeURL; // +0x80
    NSString * _liveNoticeEncryptedId; // +0x88
    NSString * _promoterToken; // +0x90
    double _timeoutIntervalForShowingMoreNoticesAutomatically; // +0x98
    UIView * _bgResponder; // +0xa0
    NSString * _redPacketLinkUrl; // +0xa8
    NSString * _redPacketCoverId; // +0xb0
    long long _redPacketJumpFrom; // +0xb8
    NSString * _searchWord; // +0xc0
    NSString * _fromLiveId; // +0xc8
    NSString * _fromScene; // +0xd0
    UIViewController<WCFinderFeedBaseViewControllerProtocol> * _fromVC; // +0xd8
    NSString * _fromUsername; // +0xe0
    NSString * _talkerName; // +0xe8
    WCFinderJustWatchCollectionFeedItem * _justWatchCollectionFeedItem; // +0xf0
    NSString * _ecSource; // +0xf8
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x100
    JsApiSourceInfo * _jsApiSourceInfo; // +0x108
    NSString * _noticeJumperAdReportInfo; // +0x110
    NSString * _livingJumperAdReportInfo; // +0x118
    WCFinderMyTabEntranceParams * _myTabParams; // +0x120
    NSDictionary * _enterPageUdfKv; // +0x128
    WCFinderDataItem * _fromDataItem; // +0x130
    WCFinderProfilePreloadInfo * _preloadInfo; // +0x138
    WCFinderStreamProfileExtInfo * _passProfileExtInfo; // +0x140
    NSDictionary * _businessByPass; // +0x148
    FinderMention_FinderMentionThankInfo_RedPackageInfo * _mentionThanksRedpackageInfo; // +0x150
    NSDictionary * _additionalClientUdfKV; // +0x158
    WCFinderJustWatchFeedInfo * _jumpFeedInfo; // +0x160
    NSString * _exportUsername; // +0x168
    id /* block */ _profileCloseCallback; // +0x170
}
+ (id)defaultParams;
- (id)init;
- (id)copy;
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
- (void)setEnterType:(int)arg1;
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
