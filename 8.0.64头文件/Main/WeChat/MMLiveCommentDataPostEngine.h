@interface MMLiveCommentDataPostEngine : NSObject <MMGroupLiveMgrExt, MMLiveTaskMgrExt>
{
    MMLiveTaskId * _taskId; // +0x8
    NSMutableDictionary * _postQueueDict; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)postLiveCommentWithContent:(id)arg1 localSeq:(double)arg2 clientMsgId:(id)arg3 taskId:(id)arg4 msgType:(unsigned int)arg5 nickName:(id)arg6 externInfo:(id)arg7;
- (void)postNextTaskForBox:(unsigned int)arg1;
- (id)tryExtractPostingTaskWithPostTaskID:(unsigned long long)arg1 boxType:(unsigned int)arg2;
- (id)postQueueDict;
- (id)getPostQueueWithBoxType:(unsigned int)arg1;
- (BOOL)applyPostLiveMessageWithPostTask:(id)arg1;
- (void)handleOnPostLiveMessageResult:(id)arg1 taskId:(id)arg2 postTaskID:(unsigned long long)arg3 boxType:(unsigned int)arg4;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setPostQueueDict:(id)arg1;
- (void).cxx_destruct;
@end
