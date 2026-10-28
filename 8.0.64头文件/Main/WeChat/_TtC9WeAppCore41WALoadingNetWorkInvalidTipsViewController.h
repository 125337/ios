@interface _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController : MMUIViewController <WACapsuleMenuDelegate>
{
     tipIcon; // +0x8
     tipMsgLabel; // +0x10
     retryBtn; // +0x18
     capsuleMenu; // +0x20
     tipsMsg; // +0x28
     showCapsuleMenu; // +0x38
     onRetryAction; // +0x40
}
- (id)tipsMsg;
- (void)setTipsMsg:(id)arg1;
- (BOOL)showCapsuleMenu;
- (void)setShowCapsuleMenu:(BOOL)arg1;
- (id /* block */)onRetryAction;
- (void)setOnRetryAction:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onRetry:(id)arg1;
- (void)onMenuExit:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
