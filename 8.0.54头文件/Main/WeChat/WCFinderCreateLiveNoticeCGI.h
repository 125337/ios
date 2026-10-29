@interface WCFinderCreateLiveNoticeCGI : WCFinderBaseCgi
{
    unsigned int _optype; // +0x8
    NSString * _finderUserName; // +0x10
    NSString * _delReason; // +0x18
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failureBlock; // +0x30
    NSArray * _couponsStockIDs; // +0x38
    FinderLivePaymentSetting * _paymentSetting; // +0x40
    unsigned long long _reportingSourceScene; // +0x48
    NSString * _modReason; // +0x50
    unsigned long long _modifyFieldFlag; // +0x58
}
- (id)initWithFinderUserName:(id)arg1 liveNoticeInfo:(id)arg2 optype:(unsigned int)arg3 paymentSetting:(id)arg4 couponsStockIDs:(id)arg5 delReason:(id)arg6 modifyReason:(id)arg7 modifyFieldFlag:(unsigned long long)arg8 reportingSourceScene:(unsigned long long)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)delReason;
- (void)setDelReason:(id)arg1;
- (id)liveNoticeInfo;
- (void)setLiveNoticeInfo:(id)arg1;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id)couponsStockIDs;
- (void)setCouponsStockIDs:(id)arg1;
- (id)paymentSetting;
- (void)setPaymentSetting:(id)arg1;
- (unsigned long long)reportingSourceScene;
- (void)setReportingSourceScene:(unsigned long long)arg1;
- (id)modReason;
- (void)setModReason:(id)arg1;
- (unsigned long long)modifyFieldFlag;
- (void)setModifyFieldFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

