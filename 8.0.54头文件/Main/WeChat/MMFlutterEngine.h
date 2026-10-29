@interface MMFlutterEngine : NSObject
{
    NSString * _key; // +0x8
    FlutterEngine * _engine; // +0x10
    UIViewController * _viewController; // +0x18
    NSMutableDictionary * _plugins; // +0x20
    BOOL _isInvokePreloadEnd; // +0x28
    long long _createStart; // +0x30
    long long _createEnd; // +0x38
    id /* block */ _destroyCallback; // +0x40
    NSObject<OS_dispatch_queue> * _destroyQueue; // +0x48
}
+ (id)flutterRevision;
- (id)initWithKey:(id)arg1 engine:(id)arg2;
- (id)key;
- (id)engine;
- (void)destroyEngine:(BOOL)arg1;
- (void)destroyEngine:(BOOL)arg1 isRootEngine:(BOOL)arg2;
- (void)addPlugins:(id)arg1;
- (id)findPlugin:(Class)arg1;
- (void)setViewController:(id)arg1;
- (void)requestPreRender:(id /* block */)arg1 timeOutInMs:(long long)arg2;
- (void)pluginsDetachedFromEngine;
- (long long)createStart;
- (void)setCreateStart:(long long)arg1;
- (long long)createEnd;
- (void)setCreateEnd:(long long)arg1;
- (id /* block */)destroyCallback;
- (void)setDestroyCallback:(id /* block */)arg1;
- (id)destroyQueue;
- (void)setDestroyQueue:(id)arg1;
- (void).cxx_destruct;
@end

