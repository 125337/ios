@interface FlutterLaunchEngine : NSObject
{
    BOOL _didTakeEngine; // +0x8
    FlutterEngine * _engine; // +0x10
}
- (id)init;
- (id)engine;
- (id)takeEngine;
- (void).cxx_destruct;
@end
