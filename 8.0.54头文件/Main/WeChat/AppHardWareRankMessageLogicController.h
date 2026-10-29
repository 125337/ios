@interface AppHardWareRankMessageLogicController : NSObject <TextStatePublishViewControllerDelegate>
{
    MMUIViewController * _viewController; // +0x8
    NSString * _stateIconId; // +0x10
    NSString * _stateDesc; // +0x18
    long long _step; // +0x20
    unsigned long long _cgiStartTime; // +0x28
    AppHardWareRankMessageViewModel * _viewModel; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)onClickStateBtn:(id)arg1 onViewContrller:(id)arg2;
- (void)jumpToState:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)stateIconId;
- (void)setStateIconId:(id)arg1;
- (id)stateDesc;
- (void)setStateDesc:(id)arg1;
- (long long)step;
- (void)setStep:(long long)arg1;
- (unsigned long long)cgiStartTime;
- (void)setCgiStartTime:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

