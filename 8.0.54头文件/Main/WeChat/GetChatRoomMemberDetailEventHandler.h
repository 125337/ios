@interface GetChatRoomMemberDetailEventHandler : ProtobufEventHandler
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)batchCheckAndUpdataOpenImResource:(id)arg1;
- (id)HandleMemContact:(id)arg1;
@end

