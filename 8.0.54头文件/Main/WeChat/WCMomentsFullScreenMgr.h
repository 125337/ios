@interface WCMomentsFullScreenMgr : MMUserService <WCImageFullScreeViewMgrExt, WCPlayerConfigFullScreenViewControllerExt, MJTemplateFullScreenViewControllerExt, MMLiveTaskMgrExt, MMServiceProtocol>
{
    NSString * _fullScreenTid; // +0x8
    NSString * _fullScreenMid; // +0x10
    WCDataItem * _dataItem; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExt;
- (void)unRegisterExt;
- (void)recordFullScreenDataItem:(id)arg1 mid:(id)arg2;
- (void)recordFullScreenTid:(id)arg1 mid:(id)arg2;
- (void)removeFullScreenTid:(id)arg1 mid:(id)arg2;
- (BOOL)isFullScreenShow:(id)arg1;
- (BOOL)isFullScreenShow:(id)arg1 mid:(id)arg2;
- (void)reset;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
- (void)playerViewControllerCloseAnimationComplete:(id)arg1;
- (void)templateFullScreenViewController:(id)arg1 closeFullScreenComplete:(id)arg2;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)onWillExitLiveWithLiveTask:(id)arg1;
- (void)resetRecordDataIfNeededWithLiveTask:(id)arg1;
- (BOOL)isCurrentDataItemOpenedLiveTask:(id)arg1;
- (id)fullScreenTid;
- (void)setFullScreenTid:(id)arg1;
- (id)fullScreenMid;
- (void)setFullScreenMid:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

