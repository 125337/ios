@interface POPAnimation : NSObject <NSCopying>
{
    _POPAnimationState * _state; // +0x8
    void * _solver; // +0x10
    id _currentValue; // +0x18
    NSArray * _progressMarkers; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (id)_init;
- (void)_initState;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPaused;
- (void)setPaused:(BOOL)arg1;
- (long long)repeatCount;
- (void)setRepeatCount:(long long)arg1;
- (BOOL)autoreverses;
- (void)setAutoreverses:(BOOL)arg1;
- (int)type;
- (id /* block */)animationDidStartBlock;
- (void)setAnimationDidStartBlock:(id /* block */)arg1;
- (id /* block */)animationDidReachToValueBlock;
- (void)setAnimationDidReachToValueBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)animationDidApplyBlock;
- (void)setAnimationDidApplyBlock:(id /* block */)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (BOOL)removedOnCompletion;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (BOOL)repeatForever;
- (void)setRepeatForever:(BOOL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)description;
- (id)debugDescription;
- (BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
- (void *)solver;
- (void)setSolver:(void *)arg1;
- (id)currentValue;
- (id)progressMarkers;
- (void)setProgressMarkers:(id)arg1;
- (void).cxx_destruct;
@end

