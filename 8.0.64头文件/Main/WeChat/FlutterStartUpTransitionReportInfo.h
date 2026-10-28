@interface FlutterStartUpTransitionReportInfo : NSObject
{
    long long _transitionStartMills; // +0x8
    long long _transitionEndMills; // +0x10
    long long _transitionMode; // +0x18
}
+ (id)makeWithTransitionStartMills:(long long)arg1 transitionEndMills:(long long)arg2 transitionMode:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)transitionStartMills;
- (void)setTransitionStartMills:(long long)arg1;
- (long long)transitionEndMills;
- (void)setTransitionEndMills:(long long)arg1;
- (long long)transitionMode;
- (void)setTransitionMode:(long long)arg1;
@end
