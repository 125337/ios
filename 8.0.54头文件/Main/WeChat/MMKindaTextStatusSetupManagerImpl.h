@interface MMKindaTextStatusSetupManagerImpl : NSObject <TextStateBrandLogicDelegate, MMKindaTextStatusSetupManager>
{
    MMVoidBoolStringCallback * _callback; // +0x8
    TextStateBrandLogic * _brandLogic; // +0x10
    MMUIViewController * _currentViewController; // +0x18
    NSString * _transId; // +0x20
}
- (void)setupTextStatusImpl:(id)arg1 transId:(id)arg2 mktSign:(id)arg3 payscene:(int)arg4 finishCallback:(id)arg5;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)textStatusDataReportWithScene:(int)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)brandLogic;
- (void)setBrandLogic:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)transId;
- (void)setTransId:(id)arg1;
- (void).cxx_destruct;
@end

