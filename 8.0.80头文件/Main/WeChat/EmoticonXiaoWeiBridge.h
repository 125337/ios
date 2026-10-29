@interface EmoticonXiaoWeiBridge : NSObject
{
    NSObject * _eventSinkOwner; // +0x8
    id /* block */ _eventSink; // +0x10
}
+ (id)sharedBridge;
+ (void)registerEventSink:(id /* block */)arg1 owner:(id)arg2;
+ (void)registerEventSinkWithCommunicator:(id)arg1 owner:(id)arg2;
+ (void)unregisterEventSinkForOwner:(id)arg1;
+ (void)notifyXiaoWeiEntryAction:(long long)arg1;
+ (void)notifyFeaturedEmojiEntryClick;
+ (void)emitEvent:(id)arg1 params:(id)arg2;
- (id)eventSinkOwner;
- (void)setEventSinkOwner:(id)arg1;
- (id /* block */)eventSink;
- (void)setEventSink:(id /* block */)arg1;
- (void).cxx_destruct;
@end
