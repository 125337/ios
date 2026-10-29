@interface MMChatbotCardSceneContext : NSObject
{
    NSDictionary * _creationParams; // +0x8
    NSDictionary * _payload; // +0x10
    NSDictionary * _layout; // +0x18
    NSDictionary * _theme; // +0x20
    ChatbotCardFlutterApi * _flutterApi; // +0x28
    NSString * _itemId; // +0x30
}
- (id)initWithCreationParams:(id)arg1 payload:(id)arg2 layout:(id)arg3 theme:(id)arg4 flutterApi:(id)arg5 itemId:(id)arg6;
- (id)creationParams;
- (id)payload;
- (id)layout;
- (id)theme;
- (id)flutterApi;
- (id)itemId;
- (void).cxx_destruct;
@end
