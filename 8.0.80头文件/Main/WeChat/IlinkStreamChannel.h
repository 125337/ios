@interface IlinkStreamChannel : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ilink_stream::IlinkStreamChannelCppCover> cpp_cover; // +0x80
    weak_ptr<ilink_stream::IlinkStreamChannelDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ilink_stream::IlinkStreamChannelDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)warmUp:(int)arg1;
- (void)updateSessionInfo:(id)arg1 ilinkNetworkBuffer:(id)arg2;
- (id)createStream:(int)arg1 businessScene:(int)arg2 streamBusinessCtx:(id)arg3;
- (id)createUpStream:(int)arg1 businessScene:(int)arg2 streamBusinessCtx:(id)arg3;
- (id)createDownStream:(int)arg1 businessScene:(int)arg2 streamBusinessCtx:(id)arg3 streamTicket:(id)arg4 resumeInfo:(id)arg5;
- (void)destroyStream:(id)arg1;
- (void)sendStreamFragment:(id)arg1;
- (void)subscribeStreamStateNotifyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStreamStateNotifyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeStreamStateNotifyEvent:(id)arg1;
- (void)subscribeReceiveStreamFragmentEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeReceiveStreamFragmentEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeReceiveStreamFragmentEvent:(id)arg1;
- (void)subscribeStreamReportNotifyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStreamReportNotifyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeStreamReportNotifyEvent:(id)arg1;
- (void)subscribeUpStreamFragmentReportNotifyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeUpStreamFragmentReportNotifyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeUpStreamFragmentReportNotifyEvent:(id)arg1;
- (void)subscribeDownStreamFragmentReportNotifyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDownStreamFragmentReportNotifyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDownStreamFragmentReportNotifyEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
