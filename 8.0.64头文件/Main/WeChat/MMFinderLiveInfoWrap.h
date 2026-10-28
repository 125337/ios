@interface MMFinderLiveInfoWrap : NSObject
{
    NSString * _tid; // +0x8
    WCFinderLiveInfo * _finderLiveInfo; // +0x10
    unsigned long long _liveInfoUpdateTime; // +0x18
    unsigned long long _activityType; // +0x20
    unsigned long long _activityTypeUpdateTime; // +0x28
    MMFinderLiveStreamTypeInfo * _finderLiveStreamTypeInfo; // +0x30
}
- (id)tid;
- (void)setTid:(id)arg1;
- (id)finderLiveInfo;
- (void)setFinderLiveInfo:(id)arg1;
- (unsigned long long)liveInfoUpdateTime;
- (void)setLiveInfoUpdateTime:(unsigned long long)arg1;
- (unsigned long long)activityType;
- (void)setActivityType:(unsigned long long)arg1;
- (unsigned long long)activityTypeUpdateTime;
- (void)setActivityTypeUpdateTime:(unsigned long long)arg1;
- (id)finderLiveStreamTypeInfo;
- (void)setFinderLiveStreamTypeInfo:(id)arg1;
- (void).cxx_destruct;
@end
