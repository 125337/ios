@interface EmoticonServerNotifyTask : MMObject
{
    unsigned long long _opcode; // +0x8
    unsigned long long _type; // +0x10
    NSArray * _md5ObjectArray; // +0x18
    id <EmoticonServerNotifyTaskDelegate> _delegate; // +0x20
}
- (id)initWithOpcode:(unsigned long long)arg1 emoticonType:(unsigned long long)arg2 md5ObjectArray:(id)arg3 andDelegate:(id)arg4;
- (BOOL)resumeLogic;
- (BOOL)resumeRecoverFromServerLogic;
- (unsigned long long)opcode;
- (void)setOpcode:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)md5ObjectArray;
- (void)setMd5ObjectArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

