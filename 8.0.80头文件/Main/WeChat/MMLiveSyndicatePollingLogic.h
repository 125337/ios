@interface MMLiveSyndicatePollingLogic : NSObject
{
    id <MMLiveSyndicatePollingLogicDelegate> _delegate; // +0x8
    NSString * _finderUsername; // +0x10
    MMLiveSyndicateModel * _model; // +0x18
    unsigned long long _version; // +0x20
    double _startNextCycleIn; // +0x28
    NSString * _cycleId; // +0x30
    MMTimer * _timer; // +0x38
}
- (id)initWithFinderUsername:(id)arg1 initialModel:(id)arg2;
- (void)dealloc;
- (void)pollImmediatelyInvalidatingInvitationLink:(BOOL)arg1;
- (void)poll;
- (void)pollInvalidatingInvitationLink:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (double)startNextCycleIn;
- (void)setStartNextCycleIn:(double)arg1;
- (id)cycleId;
- (void)setCycleId:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
