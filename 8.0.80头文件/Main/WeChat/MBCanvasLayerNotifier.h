@interface MBCanvasLayerNotifier : NSObject <MBCanvasLayerDelegate>
{
    unsigned long long _envId; // +0x8
}
- (id)initWithEnvId:(unsigned long long)arg1;
- (void)notifyLayerCreatedWithCanvasId:(unsigned long long)arg1 layer:(id)arg2;
- (void)notifyLayerChangedWithCanvasId:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3;
- (void)notifyLayerDestroyedWithCanvasId:(unsigned long long)arg1;
- (BOOL)notifyTouchEventWithCanvasId:(unsigned long long)arg1 action:(long long)arg2 touches:(id)arg3 allTouches:(id)arg4 inView:(id)arg5;
- (unsigned long long)envId;
@end
