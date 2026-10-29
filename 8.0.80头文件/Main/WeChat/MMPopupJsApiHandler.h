@interface MMPopupJsApiHandler : NSObject
{
    id <MMPopupJsApiHandlerDelegate> _delegate; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)setupApiWithJSContext:(id)arg1;
- (void)addApi_popup:(id)arg1;
- (void)addApi_close:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
