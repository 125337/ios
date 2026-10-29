@interface WCCanvasFloatActionBaseView : MMUIView
{
    WCCanvasComponentItem * _componentItem; // +0x8
    WCCanvasComponent * _component; // +0x10
    long long _orientation; // +0x18
}
+ (id)viewWithFrame:(CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;
- (void)notifyComponentStatusChanged:(BOOL)arg1;
- (void)notifyComponentReportAddExposureCount;
- (void)setActionViewHidden:(BOOL)arg1 animation:(BOOL)arg2;
- (BOOL)isComponentVisible;
- (id)componentItem;
- (void)setComponentItem:(id)arg1;
- (id)component;
- (void)setComponent:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
