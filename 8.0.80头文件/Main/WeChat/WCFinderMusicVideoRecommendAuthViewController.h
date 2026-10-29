@interface WCFinderMusicVideoRecommendAuthViewController : MMUIHalfScreenViewController
{
    id /* block */ _cancelHandler; // +0x70
    id /* block */ _confirmHandler; // +0x78
    NSDictionary * _reportParams; // +0x80
}
+ (BOOL)presentWithCancelHandler:(id /* block */)arg1 confirmHandler:(id /* block */)arg2 reportParams:(id)arg3;
- (id)init;
- (void)viewDidLoad;
- (BOOL)needCloseOnOrientationChanged;
- (void)onCancel;
- (void)onConfirm;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id /* block */)confirmHandler;
- (void)setConfirmHandler:(id /* block */)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
