@interface WCStorySyncEventHandler : ProtobufEventHandler
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)syncStoryCommentToLocal:(id)arg1;
@end
