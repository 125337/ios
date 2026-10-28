@interface LiveHybridOpenNativeParams : NSObject
{
    long long _type; // +0x8
    LiveHybridOpenNativeProfile * _openProfile; // +0x10
    LiveHybridOpenNativeLiveRoom * _openLiveRoom; // +0x18
    long long _commentScene; // +0x20
}
+ (id)makeWithType:(long long)arg1 openProfile:(id)arg2 openLiveRoom:(id)arg3 commentScene:(long long)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)openProfile;
- (void)setOpenProfile:(id)arg1;
- (id)openLiveRoom;
- (void)setOpenLiveRoom:(id)arg1;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (void).cxx_destruct;
@end
