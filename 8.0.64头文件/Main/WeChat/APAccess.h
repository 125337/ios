@interface APAccess : APBase <PBMessageObserverDelegate>
{
    NSURL * _thirdPartyUrl; // +0x70
    id <APAccessDelegate> _delegate; // +0x78
}
- (void)dealloc;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 thirdPartyUrl:(id)arg3 delegate:(id)arg4;
- (void)start;
- (void)cancel;
- (void)didSuccess;
- (void)didFail;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)thirdPartyUrl;
- (void)setThirdPartyUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
