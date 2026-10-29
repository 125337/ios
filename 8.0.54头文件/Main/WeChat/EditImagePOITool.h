@interface EditImagePOITool : EditImageWidgetTool <WCTimelinePOIPickerViewControllerDelegate>
{
    WCLocationInfo * _locationInfo; // +0x68
    NSString * _poiReportStr4Commit; // +0x70
    UIView * _backgroundView; // +0x78
    WCTimelinePOIPickerViewController * _poiPickerViewController; // +0x80
    id /* block */ _hiddenStateChangeBlock; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setHiddenStateChangeBlock:(id /* block */)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(CGPoint)arg1;
- (id)exportAnimatedLayer;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)addShadow:(id)arg1;
- (id)backgroundView;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)poiReportStr4Commit;
- (void)setPoiReportStr4Commit:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (id)poiPickerViewController;
- (void)setPoiPickerViewController:(id)arg1;
- (id /* block */)hiddenStateChangeBlock;
- (void).cxx_destruct;
@end

