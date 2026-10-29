@interface WAJSEventHandler_openMyAddress : WAJSEventHandler_BaseEvent
{
    BOOL _isFromManage; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onAddressEditEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)startEditAddress:(id)arg1;
- (BOOL)isFromManage;
- (void)setIsFromManage:(BOOL)arg1;
@end
