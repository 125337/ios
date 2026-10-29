@interface MMLiveVideoFrameWidgetManageLogic : NSObject
{
    OrderedDictionary * _renderWidgetDict; // +0x8
    OrderedDictionary * _transmitWidgetDict; // +0x10
    NSObject<OS_dispatch_semaphore> * _renderWidgetDictLock; // +0x18
    NSObject<OS_dispatch_semaphore> * _transmitWidgetDictLock; // +0x20
}
- (id)init;
- (void)initDefaultData;
- (void)addRenderVideoFrameWidget:(id)arg1;
- (void)insertRenderVideoFrameWidgetToBack:(id)arg1;
- (void)removeRenderVideoFrameWidget:(id)arg1;
- (void)removeRenderVideoFrameWidgetWithId:(id)arg1;
- (id)getVideoFrameWidgetListBeforeRender;
- (void)addTransmitVideoFrameWidget:(id)arg1;
- (void)insertTransmitVideoFrameWidgetToBack:(id)arg1;
- (void)removeTransmitVideoFrameWidget:(id)arg1;
- (void)removeTransmitVideoFrameWidgetWithId:(id)arg1;
- (id)getVideoFrameWidgetListBeforeTransmit;
- (id)renderWidgetDict;
- (void)setRenderWidgetDict:(id)arg1;
- (id)transmitWidgetDict;
- (void)setTransmitWidgetDict:(id)arg1;
- (id)renderWidgetDictLock;
- (void)setRenderWidgetDictLock:(id)arg1;
- (id)transmitWidgetDictLock;
- (void)setTransmitWidgetDictLock:(id)arg1;
- (void).cxx_destruct;
@end

