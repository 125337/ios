@interface WAJSEventHandler_genRedPackageCover : WAJSEventHandler_BaseEvent
{
    NSDictionary * m_extraData; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)handleActionByChatBotWithParam:(id)arg1;
- (void)showChatBotQuickReply:(id)arg1;
- (void)chooseAlbumLastPohto;
- (void)finishJSEventWithGeneratedCover:(id)arg1 msgId:(long long)arg2;
- (void)finishWithNoOperation;
- (void)dealloc;
- (void).cxx_destruct;
@end
