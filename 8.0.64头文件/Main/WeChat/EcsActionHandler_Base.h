@interface EcsActionHandler_Base : NSObject
{
    id <EcsActionHandlerDelegate> _jsEventHandler; // +0x8
    unsigned long long _scene; // +0x10
}
- (void)dealloc;
- (id)initWithJsEventHandler:(id)arg1;
- (void)handleAction:(id)arg1;
- (id)jsEventHandler;
- (void)setJsEventHandler:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
