@interface TXLiveBaseAdapterDelegateWrapper : NSObject
{
    id <TXLiveBaseAdapterDelegete> _delegate; // +0x8
    long long _businessType; // +0x10
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)businessType;
- (void)setBusinessType:(long long)arg1;
- (void).cxx_destruct;
@end
