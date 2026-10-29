@interface MMFinderLiveCommentAssistantDataService : NSObject
+ (void)getLiveRoomCommentAssistantList:(id)arg1 completion:(id /* block */)arg2;
+ (void)addLiveRoomCommentAssistants:(id)arg1 liveTaskId:(id)arg2 completion:(id /* block */)arg3;
+ (void)removeLiveRoomCommentAssistants:(id)arg1 liveTaskId:(id)arg2 completion:(id /* block */)arg3;
@end

