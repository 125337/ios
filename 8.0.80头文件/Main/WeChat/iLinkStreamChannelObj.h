@interface iLinkStreamChannelObj : NSObject
{
    int _businessType; // +0x8
    NSHashTable * _observerList; // +0x10
    IlinkStreamChannel * _channel; // +0x18
}
- (id)initWithBizType:(int)arg1;
- (void)dealloc;
- (void)createChannel;
- (id)createStream:(id)arg1 businessScene:(unsigned int)arg2 streamBusinessCtx:(id)arg3;
- (id)createDownStream:(id)arg1 businessScene:(unsigned int)arg2 streamBusinessCtx:(id)arg3 streamTicket:(id)arg4;
- (void)sendStreamFragment:(id)arg1;
- (void)destroyStream:(id)arg1;
- (id)observerList;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserver:(id /* block */)arg1;
- (void)warmUp;
- (void)setObserverList:(id)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
