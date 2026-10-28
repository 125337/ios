@interface MMLivePAGAnimationPerfMonitorRecord : MMLiveAnimationPerfMonitorRecord
+ (id)getMonitorPAGViewKey:(id)arg1;
- (id)initWithPAGView:(id)arg1;
- (CGRect)currPresentFrame;
- (void)parseAnimation;
- (BOOL)isAnimationValid;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (id)pagView;
@end
