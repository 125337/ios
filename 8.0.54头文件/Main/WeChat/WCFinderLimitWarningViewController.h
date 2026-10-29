@interface WCFinderLimitWarningViewController : MMUIViewController <WCFinderFeedDetailStatusViewDelegate>
{
    WCFinderFeedDetailStatusView * _statusView; // +0x68
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (id)statusView;
- (void)onClickCloseLeftItem;
- (void)didClickBack:(id)arg1;
- (void)setStatusView:(id)arg1;
- (void).cxx_destruct;
@end

