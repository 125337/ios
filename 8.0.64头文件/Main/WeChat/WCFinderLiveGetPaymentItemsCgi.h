@interface WCFinderLiveGetPaymentItemsCgi : WCFinderLiveBaseCgi
{
    NSString * _eventTitle; // +0x8
    NSString * _eventDescription; // +0x10
    NSString * _referenceId; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithPaymentBuffer:(id)arg1 eventTitle:(id)arg2 eventDescription:(id)arg3 referenceId:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithPaymentBuffer:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)eventTitle;
- (void)setEventTitle:(id)arg1;
- (id)eventDescription;
- (void)setEventDescription:(id)arg1;
- (id)referenceId;
- (void)setReferenceId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
