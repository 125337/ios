@interface WCFinderMemberShipZoneIntroduceHeaderData : NSObject <WCFinderLiveExt>
{
    MMFinderProfileLiveNoticeContext * _liveNoticeContext; // +0x8
    BOOL _isAuthor; // +0x10
    BOOL _autoRenewSwitch; // +0x11
    NSString * _zoneTitle; // +0x18
    NSString * _zoneDesc; // +0x20
    NSString * _memberBenefitsURL; // +0x28
    unsigned long long _memberPrice; // +0x30
    unsigned long long _autoMemberPrice; // +0x38
    NSMutableArray * _feedContentVMs; // +0x40
    NSMutableArray * _playbackContentVMs; // +0x48
    NSMutableArray * _activityContentVMs; // +0x50
    unsigned long long _otherVideoNum; // +0x58
    unsigned long long _otherLiveNum; // +0x60
    unsigned long long _totalActivityNum; // +0x68
    NSString * _nickName; // +0x70
    NSString * _billNo; // +0x78
    NSData * _respBuff; // +0x80
    unsigned long long _videoShortNum; // +0x88
    unsigned long long _liveShortNum; // +0x90
    unsigned long long _previewVideoLastUpdateTime; // +0x98
    unsigned long long _previewLiveLastUpdateTime; // +0xa0
    MMFinderLiveContentVM * _livingContentVM; // +0xa8
    WCFinderLiveNoticCardParams * _liveNoticeParams; // +0xb0
    WCFinderMemberShipIntroducePushParams * _pushParams; // +0xb8
    id <WCFinderMemberShipZoneIntroduceHeaderDataDelegate> _delegate; // +0xc0
    NSMutableArray * _moreVideoPreviewThumbURLArray; // +0xc8
    NSMutableArray * _moreLivePreviewThumbURLArray; // +0xd0
    NSData * _videoShortLastBuffer; // +0xd8
    NSData * _liveShortLastBuffer; // +0xe0
    WCFinderMemberCollectionInfo * _memberCollectionInfo; // +0xe8
    NSMutableArray * _statisticalInfoList; // +0xf0
    WCFinderContact * _contact; // +0xf8
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)notifyChanged;
- (void)doNotifyChanged;
- (id)liveNoticeContext;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(BOOL)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)zoneTitle;
- (void)setZoneTitle:(id)arg1;
- (id)zoneDesc;
- (void)setZoneDesc:(id)arg1;
- (id)memberBenefitsURL;
- (void)setMemberBenefitsURL:(id)arg1;
- (unsigned long long)memberPrice;
- (void)setMemberPrice:(unsigned long long)arg1;
- (unsigned long long)autoMemberPrice;
- (void)setAutoMemberPrice:(unsigned long long)arg1;
- (id)feedContentVMs;
- (void)setFeedContentVMs:(id)arg1;
- (id)playbackContentVMs;
- (void)setPlaybackContentVMs:(id)arg1;
- (id)activityContentVMs;
- (void)setActivityContentVMs:(id)arg1;
- (unsigned long long)otherVideoNum;
- (void)setOtherVideoNum:(unsigned long long)arg1;
- (unsigned long long)otherLiveNum;
- (void)setOtherLiveNum:(unsigned long long)arg1;
- (unsigned long long)totalActivityNum;
- (void)setTotalActivityNum:(unsigned long long)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)respBuff;
- (void)setRespBuff:(id)arg1;
- (unsigned long long)videoShortNum;
- (void)setVideoShortNum:(unsigned long long)arg1;
- (unsigned long long)liveShortNum;
- (void)setLiveShortNum:(unsigned long long)arg1;
- (unsigned long long)previewVideoLastUpdateTime;
- (void)setPreviewVideoLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)previewLiveLastUpdateTime;
- (void)setPreviewLiveLastUpdateTime:(unsigned long long)arg1;
- (id)livingContentVM;
- (void)setLivingContentVM:(id)arg1;
- (id)liveNoticeParams;
- (void)setLiveNoticeParams:(id)arg1;
- (id)pushParams;
- (void)setPushParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)moreVideoPreviewThumbURLArray;
- (void)setMoreVideoPreviewThumbURLArray:(id)arg1;
- (id)moreLivePreviewThumbURLArray;
- (void)setMoreLivePreviewThumbURLArray:(id)arg1;
- (BOOL)autoRenewSwitch;
- (void)setAutoRenewSwitch:(BOOL)arg1;
- (id)videoShortLastBuffer;
- (void)setVideoShortLastBuffer:(id)arg1;
- (id)liveShortLastBuffer;
- (void)setLiveShortLastBuffer:(id)arg1;
- (id)memberCollectionInfo;
- (void)setMemberCollectionInfo:(id)arg1;
- (id)statisticalInfoList;
- (void)setStatisticalInfoList:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

