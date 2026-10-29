@interface WCTCancellationSignal : NSObject
{
    shared_ptr<volatile bool> m_signal; // +0x8
}
- (id)init;
- (shared_ptr<volatile bool>)getInnerSignal;
- (void)cancel;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

