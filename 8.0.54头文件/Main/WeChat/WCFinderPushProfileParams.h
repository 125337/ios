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
    int _reportScene; // +0x14
    unsigned int _enterType; // +0x18
    int _selectedTab; // +0x1c
    int _creatorPageWordingType; // +0x20
    int _fromFeedScene; // +0x24
    unsigned int _followScene; // +0x28
    NSString * _feedID; // +0x30
    NSString * _nonceID; // +0x38
    unsigned long long _cardType; // +0x40
    NSString * _adParamInfoStr; // +0x48
    NSString * _commentAdInfo; // +0x50
    unsigned long long _enterScene; // +0x58
    unsigned long long _avatarType; // +0x60
    NSString * _refPageType; // +0x68
    unsigned long long _streamEntranceType; // +0x70
    NSString * _otherBusinessExtraInfo; // +0x78
    NSString * _enterSourceFeedID; // +0x80
    long long _qrcodeScene; // +0x88
    NSString * _qrCodeURL; // +0x90
    NSString * _liveNoticeEncryptedId; // +0x98
    NSString * _promoterToken; // +0xa0
    double _timeoutIntervalForShowingMoreNoticesAutomatically; // +0xa8
    UIView * _bgResponder; // +0xb0
    NSString * _redPacketLinkUrl; // +0xb8
    NSString * _redPacketCoverId; // +0xc0
    long long _redPacketJumpFrom; // +0xc8
    NSString * _searchWord; // +0xd0
    NSString * _fromLiveId; // +0xd8
    NSString * _fromScene; // +0xe0
    UIViewController<WCFinderFeedBaseViewControllerProtocol> * _fromVC; // +0xe8
    NSString * _fromUsername; // +0xf0
    NSString * _talkerName; // +0xf8
    NSString * _customViewerName; // +0x100
    WCFinderJustWatchCollectionFeedItem * _justWatchCollectionFeedItem; // +0x108
    NSString * _ecSource; // +0x110
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x118
    NSString * _noticeJumperAdReportInfo; // +0x120
    NSString * _livingJumperAdReportInfo; // +0x128
    NSString * _creatorCenterWording; // +0x130
    NSString * _creatorCenterWordingJumpUrl; // +0x138
    NSDictionary * _enterPageUdfKv; // +0x140
    WCFinderDataItem * _fromDataItem; // +0x148
    WCFinderProfilePreloadInfo * _preloadInfo; // +0x150
    NSDictionary * _businessByPass; // +0x158
    FinderMention_FinderMentionThankInfo_RedPackageInfo * _mentionThanksRedpackageInfo; // +0x160
    NSDictionary * _additionalClientUdfKV; // +0x168
    WCFinderJustWatchFeedInfo * _jumpFeedInfo; // +0x170
    id /* block */ _profileCloseCallback; // +0x178
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
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (id)adParamInfoStr;
- (void)setAdParamInfoStr:(id)arg1;
- (id)commentAdInfo;
- (void)setCommentAdInfo:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
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
- (id)customViewerName;
- (void)setCustomViewerName:(id)arg1;
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
- (id)noticeJumperAdReportInfo;
- (void)setNoticeJumperAdReportInfo:(id)arg1;
- (id)livingJumperAdReportInfo;
- (void)setLivingJumperAdReportInfo:(id)arg1;
- (int)creatorPageWordingType;
- (void)setCreatorPageWordingType:(int)arg1;
- (id)creatorCenterWording;
- (void)setCreatorCenterWording:(id)arg1;
- (id)creatorCenterWordingJumpUrl;
- (void)setCreatorCenterWordingJumpUrl:(id)arg1;
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
- (id)businessByPass;
- (void)setBusinessByPass:(id)arg1;
- (id)mentionThanksRedpackageInfo;
- (void)setMentionThanksRedpackageInfo:(id)arg1;
- (id)additionalClientUdfKV;
- (void)setAdditionalClientUdfKV:(id)arg1;
- (id)jumpFeedInfo;
- (void)setJumpFeedInfo:(id)arg1;
- (id /* block */)profileCloseCallback;
- (void)setProfileCloseCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

