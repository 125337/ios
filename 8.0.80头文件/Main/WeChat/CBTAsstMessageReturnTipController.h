@interface CBTAsstMessageReturnTipController : NSObject <MMEdgeTipsViewDelegate>
{
    id <CBTAsstMessageReturnTipControllerDelegate> _delegate; // +0x8
    long long _anchorSvrId; // +0x10
    CBTAsstBoardDataController * _dataController; // +0x18
    MMEdgeTipsView * _tipView; // +0x20
}
- (id)initWithDataController:(id)arg1;
- (void)showForAnchorMessageWithSvrId:(long long)arg1 title:(id)arg2;
- (void)updateForCurrentScrollPosition;
- (void)updateTipPosition;
- (void)dismissAnimated:(BOOL)arg1;
- (void)onClickEdgeTipsView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)anchorSvrId;
- (void)setAnchorSvrId:(long long)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)tipView;
- (void)setTipView:(id)arg1;
- (void).cxx_destruct;
@end
