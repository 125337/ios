@interface _TtC6WeChat22MMFinderLiveFPSMonitor : NSObject
{
     interval; // +0x8
     commentScene; // +0x10
     callback; // +0x18
     link; // +0x28
     count; // +0x30
     lastTime; // +0x38
     avgFps; // +0x40
     fpsRecord; // +0x48
}
- (BOOL)fpsSwitch;
- (id)resultRecords;
- (id)initWithInterval:(double)arg1 commentScene:(int)arg2 callback:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (void)report;
- (void)tickWithLink:(id)arg1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end

