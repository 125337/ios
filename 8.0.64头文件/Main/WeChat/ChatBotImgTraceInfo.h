@interface ChatBotImgTraceInfo : SimpleImgInfo
{
    ChatBotTraceData * _traceData; // +0x20
}
- (id)m_strMsgLocalID;
- (BOOL)isImgMsg;
- (unsigned int)m_uiCreateTime;
- (id)getImgPath;
- (id)traceData;
- (void)setTraceData:(id)arg1;
- (void).cxx_destruct;
@end
