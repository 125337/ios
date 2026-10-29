@interface WARemoteDebugRecvInterval : NSObject
{
    unsigned int _start; // +0x8
    unsigned int _end; // +0xc
    NSMutableArray * _messageList; // +0x10
}
- (void)mergeRecvInterval:(id)arg1;
- (id)description;
- (unsigned int)start;
- (void)setStart:(unsigned int)arg1;
- (unsigned int)end;
- (void)setEnd:(unsigned int)arg1;
- (id)messageList;
- (void)setMessageList:(id)arg1;
- (void).cxx_destruct;
@end

