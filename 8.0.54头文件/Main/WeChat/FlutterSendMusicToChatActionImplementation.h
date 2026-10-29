@interface FlutterSendMusicToChatActionImplementation : NSObject <FlutterSendMusicToChatAction, MMFlutterPlugin>
{
    NSString * _toUsername; // +0x8
    id /* block */ _handler; // +0x10
}
- (id)initWithToUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)sendMusicToChatRequest:(id)arg1 error:(id *)arg2;
- (id)getChatUserNameWithError:(id *)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

