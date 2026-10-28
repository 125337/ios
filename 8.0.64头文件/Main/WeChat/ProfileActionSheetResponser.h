@interface ProfileActionSheetResponser : NSObject <WCActionSheetDelegate>
{
    NSString * _cpuProfileFile; // +0x8
    WAWebViewController * _vc; // +0x10
}
- (void)onShareFilePath:(id)arg1 inView:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendFileToFileHelper;
- (void)sendViaAirDrop;
- (void)showTips:(id)arg1;
- (void)showToast:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (void).cxx_destruct;
@end
