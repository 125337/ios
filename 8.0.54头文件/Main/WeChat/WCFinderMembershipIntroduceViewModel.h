@interface WCFinderMembershipIntroduceViewModel : WCFinderMemberShipBaseVM <ForwardMessageLogicDelegate>
{
    BOOL _isPreviewMode; // +0x8
    BOOL _isBlocked; // +0x9
    id <WCFinderMembershipIntroduceViewModelDelegate> _delegate; // +0x10
    WCFinderMemberShipZoneIntroduceHeaderData * _headerData; // +0x18
    WCFinderMemberShipIntroducePushParams * _params; // +0x20
    WCFinderContact * _contact; // +0x28
    unsigned long long _memberShipStatus; // +0x30
    unsigned long long _unsubscribeMsId; // +0x38
    NSString * _wecoinProductId; // +0x40
    ForwardMessageLogicController * _forwardLogic; // +0x48
    unsigned long long _visitorStatus; // +0x50
    NSMutableSet * _tidContainSet; // +0x58
}
- (id)blockTitleStr;
- (id)blockDescStr;
- (id)initWithParams:(id)arg1;
- (void)getLocalDatas;
- (void)getRemoteDatas;
- (void)onGetDetailInfo:(id)arg1;
- (void)shareNameCardToFriend;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)transformFinderDataItemToContentVM:(id)arg1 uiModel:(BOOL)arg2;
- (id)transformPreviewInfoToMediaWrap:(id)arg1;
- (void)handleLiveNoticeForUser:(id)arg1 successBlock:(id /* block */)arg2;
- (id)headerData;
- (BOOL)isAuthorPerspective;
- (unsigned int)profileEnterType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeaderData:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)memberShipStatus;
- (void)setMemberShipStatus:(unsigned long long)arg1;
- (unsigned long long)unsubscribeMsId;
- (void)setUnsubscribeMsId:(unsigned long long)arg1;
- (id)wecoinProductId;
- (void)setWecoinProductId:(id)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (void).cxx_destruct;
@end

