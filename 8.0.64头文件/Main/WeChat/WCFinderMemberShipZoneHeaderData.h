@interface WCFinderMemberShipZoneHeaderData : NSObject <WCFinderLiveExt>
{
    MMFinderProfileLiveNoticeContext * _liveNoticeContext; // +0x8
    BOOL _isAuthor; // +0x10
    BOOL _allowPost; // +0x11
    BOOL _allowLive; // +0x12
    BOOL _allowActivity; // +0x13
    BOOL _isBlocked; // +0x14
    NSString * _title; // +0x18
    NSString * _zoneDesc; // +0x20
    NSString * _memberBenefitsURL; // +0x28
    unsigned long long _memberCount; // +0x30
    WCFinderContact * _contact; // +0x38
    NSMutableArray * _statisticalInfoList; // +0x40
    MMFinderLiveContentVM * _livingContentVM; // +0x48
    WCFinderLiveNoticCardParams * _liveNoticeParams; // +0x50
    WCFinderMemberShipZonePushParams * _pushParams; // +0x58
    id <WCFinderMemberShipZoneHeaderDataDelegate> _delegate; // +0x60
    NSString * _memberCenterURL; // +0x68
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)isEqualToHeaderData:(id)arg1;
- (void)notifyChanged;
- (void)doNotifyChanged;
- (id)liveNoticeContext;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(BOOL)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)zoneDesc;
- (void)setZoneDesc:(id)arg1;
- (id)memberBenefitsURL;
- (void)setMemberBenefitsURL:(id)arg1;
- (BOOL)allowPost;
- (void)setAllowPost:(BOOL)arg1;
- (BOOL)allowLive;
- (void)setAllowLive:(BOOL)arg1;
- (unsigned long long)memberCount;
- (void)setMemberCount:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)statisticalInfoList;
- (void)setStatisticalInfoList:(id)arg1;
- (id)livingContentVM;
- (void)setLivingContentVM:(id)arg1;
- (id)liveNoticeParams;
- (void)setLiveNoticeParams:(id)arg1;
- (id)pushParams;
- (void)setPushParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)allowActivity;
- (void)setAllowActivity:(BOOL)arg1;
- (id)memberCenterURL;
- (void)setMemberCenterURL:(id)arg1;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)arg1;
- (void).cxx_destruct;
@end
