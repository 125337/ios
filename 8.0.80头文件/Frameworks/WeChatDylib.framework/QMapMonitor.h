@interface QMapMonitor : NSObject
{
    QDrawMonitor * _drawMonitor; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)onBeforeDrawframe;
- (void)onAfterDrawframeWithBlock:(id /* block */)arg1;
- (id)drawMonitor;
- (void)setDrawMonitor:(id)arg1;
- (void).cxx_destruct;
@end
