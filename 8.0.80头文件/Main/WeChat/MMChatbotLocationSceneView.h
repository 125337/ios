@interface MMChatbotLocationSceneView : UIView <MMChatbotCardSceneBusiness>
{
    BOOL _readyReported; // +0x8
    MMChatbotCardSceneContext * _sceneCtx; // +0x10
    CommonMessageCellView * _cellView; // +0x18
}
- (id)initWithSceneContext:(id)arg1;
- (void)onUpdate:(id)arg1;
- (void)buildCellView;
- (id)createMessageWrapFromXml:(id)arg1 messageType:(id)arg2;
- (void)didMoveToWindow;
- (id)stringFromObject:(id)arg1;
- (id)sceneCtx;
- (void)setSceneCtx:(id)arg1;
- (BOOL)readyReported;
- (void)setReadyReported:(BOOL)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void).cxx_destruct;
@end
