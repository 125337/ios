@interface SnsAdNetSceneManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<sns_ad::SnsAdNetSceneManagerCppCover> cpp_cover; // +0x80
    weak_ptr<sns_ad::SnsAdNetSceneManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<sns_ad::SnsAdNetSceneManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onReceiveNewXmlPushAsync:(id)arg1 msgSubType:(id)arg2 xmlMsg:(id)arg3 createTime:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)onReceiveNewXmlPushAsync:(id)arg1 msgSubType:(id)arg2 xmlMsg:(id)arg3 createTime:(unsigned long long)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)onReceiveAdCommonPushAsync:(id)arg1 msgSubType:(id)arg2 xmlMsg:(id)arg3 createTime:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)onReceiveAdCommonPushAsync:(id)arg1 msgSubType:(id)arg2 xmlMsg:(id)arg3 createTime:(unsigned long long)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)requestUpdateAdDetailAsync:(unsigned long long)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)requestUpdateAdDetailAsync:(unsigned long long)arg1 scene:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)handleSnsSyncAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSnsSyncAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)requestUpdateAdDetailForAtMsgAsync:(unsigned long long)arg1 scene:(int)arg2 remindFriendsInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)requestUpdateAdDetailForAtMsgAsync:(unsigned long long)arg1 scene:(int)arg2 remindFriendsInfo:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)reqHateAdAsync:(unsigned long long)arg1 adSource:(int)arg2 uxinfo:(id)arg3 unlikeReasonList:(id)arg4 completion:(id /* block */)arg5;
- (void)reqHateAdAsync:(unsigned long long)arg1 adSource:(int)arg2 uxinfo:(id)arg3 unlikeReasonList:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)sendAdCommentAsync:(unsigned long long)arg1 scene:(int)arg2 commentType:(int)arg3 commentFlag:(int)arg4 contentObj:(id)arg5 adUserName:(id)arg6 adNickName:(id)arg7 commentUserName:(id)arg8 commentNickName:(id)arg9 replyUserName:(id)arg10 replyNickName:(id)arg11 replyCommentId2:(unsigned long long)arg12 completion:(id /* block */)arg13;
- (void)sendAdCommentAsync:(unsigned long long)arg1 scene:(int)arg2 commentType:(int)arg3 commentFlag:(int)arg4 contentObj:(id)arg5 adUserName:(id)arg6 adNickName:(id)arg7 commentUserName:(id)arg8 commentNickName:(id)arg9 replyUserName:(id)arg10 replyNickName:(id)arg11 replyCommentId2:(unsigned long long)arg12 on:(id)arg13 completion:(id /* block */)arg14;
- (void)reqCancelLikeAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)reqCancelLikeAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)reqDeleteCommentAsync:(unsigned long long)arg1 comment:(id)arg2 completion:(id /* block */)arg3;
- (void)reqDeleteCommentAsync:(unsigned long long)arg1 comment:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)reqSnsAdCanvasAsync:(unsigned long long)arg1 scene:(int)arg2 canvasKey:(id)arg3 uxinfo:(id)arg4 capability:(id)arg5 vangoghLibVersion:(id)arg6 canvasDynamicInfo:(id)arg7 completion:(id /* block */)arg8;
- (void)reqSnsAdCanvasAsync:(unsigned long long)arg1 scene:(int)arg2 canvasKey:(id)arg3 uxinfo:(id)arg4 capability:(id)arg5 vangoghLibVersion:(id)arg6 canvasDynamicInfo:(id)arg7 on:(id)arg8 completion:(id /* block */)arg9;
- (void)adChannelReportAsync:(id)arg1 content:(id)arg2 completion:(id /* block */)arg3;
- (void)adChannelReportAsync:(id)arg1 content:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
