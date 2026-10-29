@interface WCFinderMemberShipConsumeViewModel : NSObject <WCFinderMembershipPaymentSelectViewDelegate, WCCoinConsumeLogicDelegate, WCFinderMembershipPaymentConfirmViewDelegate>
{
    BOOL _autoRenewSwitch; // +0x8
    int _reportScene; // +0xc
    id <WCFinderMemberShipConsumeViewModelDelegate> _delegate; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _redirectFeedID; // +0x20
    long long _qrcodeScene; // +0x28
    NSString * _liveNoticeEncryptedId; // +0x30
    NSString * _promoterToken; // +0x38
    unsigned long long _entranceSource; // +0x40
    NSString * _finderNickname; // +0x48
    unsigned long long _memberPrice; // +0x50
    unsigned long long _autoMemberPrice; // +0x58
    NSString * _wecoinProductId; // +0x60
    NSString * _billNo; // +0x68
    NSData * _respBuff; // +0x70
    NSTimer * _pollingTimer; // +0x78
    WCFinderMembershipPaymentSelectView * _selectView; // +0x80
    unsigned long long _visitorStatus; // +0x88
}
- (id)initWithFinderUsername:(id)arg1 finderNickname:(id)arg2 memberPrice:(unsigned long long)arg3 autoMemberPrice:(unsigned long long)arg4 autoRenewSwitch:(BOOL)arg5 wecoinProductId:(id)arg6 redirectFeedID:(id)arg7 reportScene:(int)arg8;
- (void)updateMemberPrice:(unsigned long long)arg1;
- (void)startMemberShipConsume;
- (id)genSubscribeParameter;
- (id)genConsumeParameter;
- (id)genConsumeParameterWithMode:(unsigned long long)arg1;
- (void)fetchFinderMemberShipPayBillWithFinderUsername:(id)arg1 subscriptionType:(unsigned long long)arg2 subscriptionExtInfo:(id)arg3 entranceSource:(unsigned long long)arg4;
- (id)getCurrentViewController;
- (void)onfetchFinderMemberShipPayBillSuccess:(unsigned long long)arg1;
- (void)onfetchFinderMemberShipPayBillFail;
- (void)startConsume:(unsigned long long)arg1;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)followContactIfNeeded;
- (void)updateVisitorStatus;
- (void)onJoinVIPButtonClicked:(unsigned long long)arg1;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipSuccess;
- (void)startPollingCGIWithInterval:(double)arg1;
- (void)pollCGI;
- (void)stopPolling;
- (void)showPayConfirmView;
- (void)onPaymentConfirmButtonClicked;
- (void)pushVCAnimated:(id)arg1 removeSelf:(BOOL)arg2;
- (void)onSafeRemoveSelf;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)redirectFeedID;
- (void)setRedirectFeedID:(id)arg1;
- (long long)qrcodeScene;
- (void)setQrcodeScene:(long long)arg1;
- (id)liveNoticeEncryptedId;
- (void)setLiveNoticeEncryptedId:(id)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
- (unsigned long long)entranceSource;
- (void)setEntranceSource:(unsigned long long)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (unsigned long long)memberPrice;
- (void)setMemberPrice:(unsigned long long)arg1;
- (unsigned long long)autoMemberPrice;
- (void)setAutoMemberPrice:(unsigned long long)arg1;
- (id)wecoinProductId;
- (void)setWecoinProductId:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)respBuff;
- (void)setRespBuff:(id)arg1;
- (BOOL)autoRenewSwitch;
- (void)setAutoRenewSwitch:(BOOL)arg1;
- (id)pollingTimer;
- (void)setPollingTimer:(id)arg1;
- (id)selectView;
- (void)setSelectView:(id)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

