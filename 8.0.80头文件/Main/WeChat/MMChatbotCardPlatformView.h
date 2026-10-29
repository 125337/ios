@interface MMChatbotCardPlatformView : NSObject <ChatbotCardHostApi, FlutterPlatformView>
{
    long long _viewId; // +0x8
    NSString * _suffix; // +0x10
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x18
    ChatbotCardFlutterApi * _flutterApi; // +0x20
    NSDictionary * _creationParams; // +0x28
    NSString * _scene; // +0x30
    NSString * _itemId; // +0x38
    UIViewController * _attachedViewController; // +0x40
    UIView * _contentView; // +0x48
    UIView<MMChatbotCardSceneBusiness> * _sceneBusiness; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 viewId:(long long)arg2 binaryMessenger:(id)arg3 creationParams:(id)arg4 viewController:(id)arg5;
- (void)dealloc;
- (id)view;
- (void)buildAndAttachScene;
- (void)attachFallback:(id)arg1;
- (void)attachSubview:(id)arg1;
- (void)disposeWithError:(id *)arg1;
- (void)updatePayload:(id)arg1 error:(id *)arg2;
- (void)getExpandUrlWithCompletion:(id /* block */)arg1;
- (void)invokeErrorWithCode:(unsigned long long)arg1 message:(id)arg2;
- (id)stringFromParams:(id)arg1 key:(id)arg2;
- (id)dictFromParams:(id)arg1 key:(id)arg2;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)suffix;
- (void)setSuffix:(id)arg1;
- (id)messenger;
- (void)setMessenger:(id)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)creationParams;
- (void)setCreationParams:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)attachedViewController;
- (void)setAttachedViewController:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)sceneBusiness;
- (void)setSceneBusiness:(id)arg1;
- (void).cxx_destruct;
@end
