@interface POPAnimator : NSObject
{
    CADisplayLink * _displayLink; // +0x8
    list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> _list; // +0x10
    __CFDictionary * _dict; // +0x28
    NSMutableArray * _observers; // +0x30
    list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> _pendingList; // +0x38
    __CFRunLoopObserver * _pendingListObserver; // +0x50
    double _slowMotionStartTime; // +0x58
    double _slowMotionLastTime; // +0x60
    double _slowMotionAccumulator; // +0x68
    double _beginTime; // +0x70
    os_unfair_lock_s _lock; // +0x78
    BOOL _disableDisplayLink; // +0x7c
    id <POPAnimatorDelegate> _delegate; // +0x80
}
+ (id)sharedAnimator;
+ (BOOL)disableBackgroundThread;
+ (void)setDisableBackgroundThread:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)_processPendingList;
- (void)_clearPendingListObserver;
- (void)_scheduleProcessPendingList;
- (void)_renderTime:(double)arg1 items:(list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>>)arg2;
- (void)_renderTime:(double)arg1 item:(shared_ptr<POPAnimatorItem>)arg2;
- (id)observers;
- (void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(BOOL)arg3;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2;
- (id)animationKeysForObject:(id)arg1;
- (id)animationForObject:(id)arg1 key:(id)arg2;
- (double)_currentRenderTime;
- (void)render;
- (void)renderTime:(double)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableDisplayLink;
- (void)setDisableDisplayLink:(BOOL)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

