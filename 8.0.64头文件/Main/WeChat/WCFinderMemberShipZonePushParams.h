@interface WCFinderMemberShipZonePushParams : NSObject
{
    BOOL _showsMoreNoticesAutomatically; // +0x8
    BOOL _showHalfScreen; // +0x9
    BOOL _unableShowLiveMinimizeWindow; // +0xa
    BOOL _isPreviewMode; // +0xb
    int _profileEnterType; // +0xc
    NSString * _finderUsername; // +0x10
    long long _qrcodeScene; // +0x18
    NSString * _liveNoticeEncryptedId; // +0x20
    NSString * _promoterToken; // +0x28
    double _timeoutIntervalForShowingMoreNoticesAutomatically; // +0x30
    NSString * _adParamInfoStr; // +0x38
    NSString * _redirectFeedID; // +0x40
    unsigned long long _entranceSource; // +0x48
    unsigned long long _tabType; // +0x50
}
+ (id)paramWithUsername:(id)arg1 redirectFeedID:(id)arg2;
- (BOOL)isAuthor;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)profileEnterType;
- (void)setProfileEnterType:(int)arg1;
- (long long)qrcodeScene;
- (void)setQrcodeScene:(long long)arg1;
- (id)liveNoticeEncryptedId;
- (void)setLiveNoticeEncryptedId:(id)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
- (BOOL)showsMoreNoticesAutomatically;
- (void)setShowsMoreNoticesAutomatically:(BOOL)arg1;
- (double)timeoutIntervalForShowingMoreNoticesAutomatically;
- (void)setTimeoutIntervalForShowingMoreNoticesAutomatically:(double)arg1;
- (id)adParamInfoStr;
- (void)setAdParamInfoStr:(id)arg1;
- (id)redirectFeedID;
- (void)setRedirectFeedID:(id)arg1;
- (BOOL)showHalfScreen;
- (void)setShowHalfScreen:(BOOL)arg1;
- (BOOL)unableShowLiveMinimizeWindow;
- (void)setUnableShowLiveMinimizeWindow:(BOOL)arg1;
- (unsigned long long)entranceSource;
- (void)setEntranceSource:(unsigned long long)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
