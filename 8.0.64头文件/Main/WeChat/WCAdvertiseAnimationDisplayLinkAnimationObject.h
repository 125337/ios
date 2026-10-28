@interface WCAdvertiseAnimationDisplayLinkAnimationObject : NSObject
{
    BOOL _isPersisted; // +0x8
    BOOL _didNoticeFinishedEvent; // +0x9
    NSString * _animationKey; // +0x10
    unsigned long long _keyPath; // +0x18
    UIView * _relatedView; // +0x20
    double _beginTime; // +0x28
    double _duration; // +0x30
    NSArray * _values; // +0x38
    NSArray * _keyTimes; // +0x40
    NSArray * _timingFunctions; // +0x48
}
- (id)animationKey;
- (void)setAnimationKey:(id)arg1;
- (unsigned long long)keyPath;
- (void)setKeyPath:(unsigned long long)arg1;
- (id)relatedView;
- (void)setRelatedView:(id)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)values;
- (void)setValues:(id)arg1;
- (id)keyTimes;
- (void)setKeyTimes:(id)arg1;
- (id)timingFunctions;
- (void)setTimingFunctions:(id)arg1;
- (BOOL)isPersisted;
- (void)setIsPersisted:(BOOL)arg1;
- (BOOL)didNoticeFinishedEvent;
- (void)setDidNoticeFinishedEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end
