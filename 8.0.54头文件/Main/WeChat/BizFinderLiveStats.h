@interface BizFinderLiveStats : NSObject
{
    NSNumber * _finderObjId; // +0x8
    NSNumber * _liveId; // +0x10
    NSString * _username; // +0x18
    NSNumber * _onlineCount; // +0x20
    NSNumber * _liveStatus; // +0x28
}
+ (id)makeWithFinderObjId:(id)arg1 liveId:(id)arg2 username:(id)arg3 onlineCount:(id)arg4 liveStatus:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderObjId;
- (void)setFinderObjId:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)onlineCount;
- (void)setOnlineCount:(id)arg1;
- (id)liveStatus;
- (void)setLiveStatus:(id)arg1;
- (void).cxx_destruct;
@end

