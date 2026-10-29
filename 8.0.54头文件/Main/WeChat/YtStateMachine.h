@interface YtStateMachine : NSObject
{
    _opaque_pthread_mutex_t stateLock; // +0x8
    unsigned char isStarted; // +0x48
    YtEventData * currentData; // +0x50
    NSMutableArray * eventQueue; // +0x58
    NSLock * eventLock; // +0x60
    NSThread * eventHandleThread; // +0x68
    unsigned char startEventHandler; // +0x70
    unsigned long long timeTickPrev; // +0x78
    unsigned long long totalDeltaTime; // +0x80
    int timeTickCount; // +0x88
    float _currentFrameLux; // +0x8c
    id /* block */ _onEventBlock; // +0x90
    long long _workMode; // +0x98
    id <YtDeviceDelegate> _cameraDevice; // +0xa0
    UIView * _shapeView; // +0xa8
    id /* block */ _onRequestBlock; // +0xb0
    BaseState * _currentState; // +0xb8
    NSString * _firstStateName; // +0xc0
    NSMutableDictionary * _stateMap; // +0xc8
}
+ (id)sharedInstance;
+ (void)clearInstance;
- (id)init;
- (void)deInit;
- (void)start:(id)arg1 threadPriority:(float)arg2;
- (void)reset;
- (void)stop;
- (void)update:(Mat)arg1 withDepth:(id)arg2;
- (void)update:(Mat)arg1;
- (void)updateSDKSetting:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)registerState:(id)arg1;
- (void)transitNow:(id)arg1;
- (void)transitNextRound:(id)arg1;
- (id)getStateByName:(id)arg1;
- (void)handlePause;
- (void)handleResume;
- (void)sendUIEvent:(id)arg1;
- (void)sendStateEvent:(id)arg1;
- (void)sendCameraEvent:(id)arg1;
- (BOOL)isRunning;
- (void)eventHandler;
- (void)cleanUpQueue;
- (id /* block */)onEventBlock;
- (void)setOnEventBlock:(id /* block */)arg1;
- (long long)workMode;
- (void)setWorkMode:(long long)arg1;
- (id)cameraDevice;
- (void)setCameraDevice:(id)arg1;
- (float)currentFrameLux;
- (void)setCurrentFrameLux:(float)arg1;
- (id)shapeView;
- (void)setShapeView:(id)arg1;
- (id /* block */)onRequestBlock;
- (void)setOnRequestBlock:(id /* block */)arg1;
- (id)currentState;
- (void)setCurrentState:(id)arg1;
- (id)firstStateName;
- (void)setFirstStateName:(id)arg1;
- (id)stateMap;
- (void)setStateMap:(id)arg1;
- (void).cxx_destruct;
@end

