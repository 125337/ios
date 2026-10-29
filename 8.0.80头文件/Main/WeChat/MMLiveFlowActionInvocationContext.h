@interface MMLiveFlowActionInvocationContext : NSObject
{
    NSString * _invocationId; // +0x8
    MMLiveFlowCancelationToken * _cancelationToken; // +0x10
}
- (id)description;
- (id)invocationId;
- (void)setInvocationId:(id)arg1;
- (id)cancelationToken;
- (void)setCancelationToken:(id)arg1;
- (void).cxx_destruct;
@end
