@interface WCMicroMerchantAdVideoControlView : WCPlayerControlView
{
    id <WCMicroMerchantAdVideoControlDelegate> _delegate; // +0x8
    unsigned long long _playerMode; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 andPlayerMode:(unsigned long long)arg2;
- (void)onVideoDidPlayToEndTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)playerMode;
- (void)setPlayerMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
