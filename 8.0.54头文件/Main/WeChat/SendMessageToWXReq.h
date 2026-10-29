@interface SendMessageToWXReq : BaseReq
{
    BOOL bText; // +0x18
    int scene; // +0x1c
    NSString * text; // +0x20
    WXMediaMessage * message; // +0x28
    NSString * toUserOpenId; // +0x30
    WXSceneDataObject * _sceneDataObject; // +0x38
}
- (id)init;
- (id)text;
- (void)setText:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (BOOL)bText;
- (void)setBText:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)toUserOpenId;
- (void)setToUserOpenId:(id)arg1;
- (id)sceneDataObject;
- (void)setSceneDataObject:(id)arg1;
- (void).cxx_destruct;
@end

