@interface MMLiveFlowCancelationStatus : NSObject
{
    atomic<bool> _cancelationRequested; // +0x8
    NSString * _identifier; // +0x10
}
- (id)init;
- (BOOL)cancelationRequested;
- (BOOL)cancel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
