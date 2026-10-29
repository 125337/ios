@interface WCFinderPaidCollectionConsumeLogic : NSObject <WCCoinConsumeLogicDelegate, WCFinderPaidCollectionExt>
{
    BOOL _waitingBillProcess; // +0x8
    int _reportScene; // +0xc
    id <WCFinderPaidCollectionConsumeLogicDelegate> _delegate; // +0x10
    NSString * _finderUsername; // +0x18
    FinderPaidCollectionInfo * _paidCollection; // +0x20
    WCFinderPaidCollectionConsumeAdapter * _consumeAdapter; // +0x28
    NSString * _sourceFeedID; // +0x30
    NSString * _billNo; // +0x38
    NSData * _respBuff; // +0x40
    unsigned long long _billWaitStartTimestamp; // +0x48
    MMTimer * _waitBillTimeoutTimer; // +0x50
}
- (id)initWithFinderUsername:(id)arg1 paidCollection:(id)arg2 sourceFeedID:(id)arg3 reportScene:(int)arg4;
- (void)startPaidCollectionConsume;
- (void)fetchPaidCollectionPayBill;
- (void)onfetchPiadCollectionPayBillSuccess;
- (void)onfetchFPaidCollectionPayBillFail;
- (void)startWeCoinConsume;
- (id)genConsumeParameterWithMode:(unsigned long long)arg1;
- (void)reportWeCoinPanelWithEvent:(id)arg1;
- (void)onPurchaseFailWithMsg:(id)arg1;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)startWaitBillProcessing;
- (id)getCurrentViewController;
- (void)startLoadingOnCurrentVC;
- (void)endLoadingOnCurrentVC;
- (void)invalidTimeoutTimer;
- (void)billProcessTimeout;
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (id)consumeAdapter;
- (void)setConsumeAdapter:(id)arg1;
- (id)sourceFeedID;
- (void)setSourceFeedID:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)respBuff;
- (void)setRespBuff:(id)arg1;
- (BOOL)waitingBillProcess;
- (void)setWaitingBillProcess:(BOOL)arg1;
- (unsigned long long)billWaitStartTimestamp;
- (void)setBillWaitStartTimestamp:(unsigned long long)arg1;
- (id)waitBillTimeoutTimer;
- (void)setWaitBillTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end

