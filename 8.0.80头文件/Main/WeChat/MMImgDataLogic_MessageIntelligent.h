@interface MMImgDataLogic_MessageIntelligent : MMImgDataLogic_Message
- (id)initWithMsgArray:(id)arg1 currentMsg:(id)arg2;
- (void)preloadIfNeed:(id)arg1 complete:(id /* block */)arg2;
- (id)asyncLoadSomeImg:(BOOL)arg1;
@end
