@interface WAAgentCmdMsgInfo : NSObject
{
    unsigned int _type; // +0x8
    WAAgentAsrInfo * _asrInfo; // +0x10
    NSData * _content; // +0x18
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)asrInfo;
- (void)setAsrInfo:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
