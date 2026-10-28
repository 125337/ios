@interface WCFinderFullScreenImgBrowserVCInitParams : NSObject
{
    BOOL _showActionSheet; // +0x8
    BOOL _enableDragLeftRightToClose; // +0x9
    BOOL _notTriggerParentVCLifeCycleFunc; // +0xa
    UIView * _startView; // +0x10
    WCFinderFullImgBrowserDataReportInitParams * _dataReportParams; // +0x18
}
- (id)startView;
- (void)setStartView:(id)arg1;
- (BOOL)showActionSheet;
- (void)setShowActionSheet:(BOOL)arg1;
- (id)dataReportParams;
- (void)setDataReportParams:(id)arg1;
- (BOOL)enableDragLeftRightToClose;
- (void)setEnableDragLeftRightToClose:(BOOL)arg1;
- (BOOL)notTriggerParentVCLifeCycleFunc;
- (void)setNotTriggerParentVCLifeCycleFunc:(BOOL)arg1;
- (void).cxx_destruct;
@end
