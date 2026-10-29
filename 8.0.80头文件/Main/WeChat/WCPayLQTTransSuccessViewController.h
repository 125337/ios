@interface WCPayLQTTransSuccessViewController : WCPayBaseViewController <ILinkEventExt>
{
    BOOL _hasResportGuideCell; // +0x98
    id <WCPayLQTTransSuccessViewControllerDelegate> _delegate; // +0xa0
}
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupContentView;
- (BOOL)hasLQTCell;
- (BOOL)hasUpgradeLink;
- (void)tapOnPlanCell;
- (void)confirmBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)reportGuideCellExposureInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasResportGuideCell;
- (void)setHasResportGuideCell:(BOOL)arg1;
- (void).cxx_destruct;
@end
