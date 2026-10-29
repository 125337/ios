@interface IntelligentMsgImgFullScreenMsgImgDataLogic : MsgImgDataLogic
{
    NSArray * m_arrResultMsg; // +0x48
}
- (id)asyncLoadSomeImg:(BOOL)arg1;
- (void)preLoad:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (unsigned int)getIndexFor:(id)arg1;
- (unsigned int)getIndexForSimpleMsg:(id)arg1;
- (id)getMsgArray;
- (id)getSimpleMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (void)setMsgArray:(id)arg1;
- (void)updateMsgArray;
- (void)resetMsgArray;
- (void).cxx_destruct;
@end

