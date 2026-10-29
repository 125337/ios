@interface MMLiveBubbleBodyComponent : NSObject <MMLiveBubbleComponent>
{
    MMLiveBubbleBodyComponentInfo * _info; // +0x8
    NSString * _infoRawJSON; // +0x10
    id <MMLiveBubbleComponentEventHandler> _eventHandler; // +0x18
}
- (void)updateWithJSONString:(id)arg1;
- (void)setEventHandler:(id)arg1;
- (void)fireTapEvent;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (id)eventHandler;
- (void).cxx_destruct;
@end
