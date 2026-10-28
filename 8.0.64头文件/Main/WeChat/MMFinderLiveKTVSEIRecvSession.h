@interface MMFinderLiveKTVSEIRecvSession : NSObject
{
    NSString * _actorUserId; // +0x8
    NSString * _songUniqueId; // +0x10
    NSString * _actorSongUniqueId; // +0x18
    NSString * _actUniqueId; // +0x20
}
+ (id)createSessionWithActor:(id)arg1 song:(id)arg2 singByActor:(BOOL)arg3 actUId:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)actorUserId;
- (void)setActorUserId:(id)arg1;
- (id)songUniqueId;
- (void)setSongUniqueId:(id)arg1;
- (id)actorSongUniqueId;
- (void)setActorSongUniqueId:(id)arg1;
- (id)actUniqueId;
- (void)setActUniqueId:(id)arg1;
- (void).cxx_destruct;
@end
