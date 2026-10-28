@interface EcsTimeMonitor : NSObject
{
    long long _type; // +0x8
    EcsTimeMonitorStep * _step; // +0x10
}
+ (id /* block */)start;
+ (id /* block */)step;
+ (id /* block */)end;
+ (id /* block */)_createETM:(long long)arg1;
- (id)init;
- (id /* block */)sceneId;
- (id /* block */)log;
- (id /* block */)print;
- (id /* block */)skip;
- (id /* block */)done;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)step;
- (void).cxx_destruct;
@end
