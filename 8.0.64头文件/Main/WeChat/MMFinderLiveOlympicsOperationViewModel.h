@interface MMFinderLiveOlympicsOperationViewModel : NSObject
{
    unsigned long long _participateButtonOperation; // +0x8
    unsigned long long _certificateId; // +0x10
    unsigned long long _participantCount; // +0x18
    TorchCert * _torchCert; // +0x20
}
- (id)init;
- (void)observeKeyPath:(id)arg1 callbackBlock:(id /* block */)arg2;
- (void)unobserveAll;
- (unsigned long long)participateButtonOperation;
- (void)setParticipateButtonOperation:(unsigned long long)arg1;
- (unsigned long long)certificateId;
- (void)setCertificateId:(unsigned long long)arg1;
- (unsigned long long)participantCount;
- (void)setParticipantCount:(unsigned long long)arg1;
- (id)torchCert;
- (void)setTorchCert:(id)arg1;
- (void).cxx_destruct;
@end
