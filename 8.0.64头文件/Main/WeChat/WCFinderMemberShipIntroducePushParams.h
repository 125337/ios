@interface WCFinderMemberShipIntroducePushParams : NSObject
{
    BOOL _showsMoreNoticesAutomatically; // +0x8
    BOOL _showsNoticeToastAutomatically; // +0x9
    BOOL _unableShowLiveMinimizeWindow; // +0xa
    BOOL _isPreviewMode; // +0xb
    int _profileEnterType; // +0xc
    NSString * _finderUsername; // +0x10
    long long _qrcodeScene; // +0x18
    NSString * _liveNoticeEncryptedId; // +0x20
    NSString * _promoterToken; // +0x28
    double _timeoutIntervalForShowingMoreNoticesAutomatically; // +0x30
    NSString * _redirectFeedID; // +0x38
    unsigned long long _entranceSource; // +0x40
    NSNumber * _fromSourceSceneForReport; // +0x48
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
- (BOOL)showsNoticeToastAutomatically;
- (void)setShowsNoticeToastAutomatically:(BOOL)arg1;
- (double)timeoutIntervalForShowingMoreNoticesAutomatically;
- (void)setTimeoutIntervalForShowingMoreNoticesAutomatically:(double)arg1;
- (id)redirectFeedID;
- (void)setRedirectFeedID:(id)arg1;
- (unsigned long long)entranceSource;
- (void)setEntranceSource:(unsigned long long)arg1;
- (BOOL)unableShowLiveMinimizeWindow;
- (void)setUnableShowLiveMinimizeWindow:(BOOL)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (id)fromSourceSceneForReport;
- (void)setFromSourceSceneForReport:(id)arg1;
- (void).cxx_destruct;
@end
