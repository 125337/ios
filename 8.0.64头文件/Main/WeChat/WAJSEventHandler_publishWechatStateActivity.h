@interface WAJSEventHandler_publishWechatStateActivity : WAJSEventHandler_BaseEvent <TextStateBrandLogicDelegate>
{
    TextStateBrandLogic * _brandLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
- (id)brandLogic;
- (void)setBrandLogic:(id)arg1;
- (void).cxx_destruct;
@end
