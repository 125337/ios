@interface IamBizPersonalCenterRedDotManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizPersonalCenterRedDotManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizPersonalCenterRedDotManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizPersonalCenterRedDotManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)setServiceProxyType:(int)arg1;
- (void)getRedDotCountAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getRedDotCountAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getRedDotBufferAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getRedDotBufferAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getCreatorTextRedDotAsync:(id /* block */)arg1;
- (void)getCreatorTextRedDotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCreatorWxaDataAsync:(id /* block */)arg1;
- (void)getCreatorWxaDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCreatorHasRedDotAsync:(id /* block */)arg1;
- (void)getCreatorHasRedDotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCreatorRedDotTimestampAsync:(id /* block */)arg1;
- (void)getCreatorRedDotTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getGreetMsgRedDotTimestampAsync:(id /* block */)arg1;
- (void)getGreetMsgRedDotTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)cleanRedDot:(int)arg1;
- (void)updateRedDotInfo:(BOOL)arg1;
- (void)updateFansMsgRedDotCount:(id)arg1 count:(int)arg2 incrementWording:(id)arg3 shouldUpdateIncrementTimestamp:(BOOL)arg4;
- (void)updateGreetMsgRedDotCount:(id)arg1 hasRedDot:(BOOL)arg2 timestamp:(unsigned long long)arg3;
- (void)updateConsumerNotifyRedDotCount:(int)arg1 wording:(id)arg2 timestamp:(unsigned long long)arg3 richTextWording:(id)arg4;
- (void)recordEnterWorksEntryTimestamp;
- (void)getLastEnterWorksEntryTimestampAsync:(id /* block */)arg1;
- (void)getLastEnterWorksEntryTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyEnterWorksEntryTimestampChanged:(unsigned long long)arg1;
- (void)subscribeEnterWorksEntryTimestampChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeEnterWorksEntryTimestampChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeEnterWorksEntryTimestampChangedEvent:(id)arg1;
- (void)recordEnterPersonalCenterTimestampAsync:(id /* block */)arg1;
- (void)recordEnterPersonalCenterTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getLastEnterPersonalCenterTimestampAsync:(id /* block */)arg1;
- (void)getLastEnterPersonalCenterTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyEnterPersonalCenterTimestampChangedAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)notifyEnterPersonalCenterTimestampChangedAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)subscribeEnterPersonalCenterTimestampChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeEnterPersonalCenterTimestampChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeEnterPersonalCenterTimestampChangedEvent:(id)arg1;
- (void)getClearRedDotsInStagesEnabledAsync:(id /* block */)arg1;
- (void)getClearRedDotsInStagesEnabledAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getRedDotEnableAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getRedDotEnableAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)setRedDotEnable:(int)arg1 enable:(BOOL)arg2;
- (void)getRedDotUpdateTimestampAsync:(id /* block */)arg1;
- (void)getRedDotUpdateTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyRedDotInfoUpdated:(id)arg1;
- (void)getRedDotUpdateInfoAsync:(id /* block */)arg1;
- (void)getRedDotUpdateInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getRedDotInfoAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getRedDotInfoAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)subscribeRedDotUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeRedDotUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeRedDotUpdatedEvent:(id)arg1;
- (void)notifyCreatorTextRedDotUpdated:(id)arg1;
- (void)subscribeCreatorTextRedDotUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeCreatorTextRedDotUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeCreatorTextRedDotUpdatedEvent:(id)arg1;
- (void)notifyCreatorRedPointUpdated:(BOOL)arg1;
- (void)subscribeCreatorRedPointUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeCreatorRedPointUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeCreatorRedPointUpdatedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
