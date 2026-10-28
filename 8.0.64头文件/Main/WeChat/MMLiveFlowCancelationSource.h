@interface MMLiveFlowCancelationSource : NSObject
{
    MMLiveFlowCancelationToken * _token; // +0x8
    MMLiveFlowCancelationStatus * _cancelationStatus; // +0x10
}
- (id)init;
- (id)identifier;
- (BOOL)cancelationRequested;
- (void)cancel;
- (id)token;
- (void)setToken:(id)arg1;
- (id)cancelationStatus;
- (void)setCancelationStatus:(id)arg1;
- (void).cxx_destruct;
@end
