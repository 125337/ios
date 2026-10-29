@interface WAUpdatableMsgSessionInfo : NSObject
{
    unsigned int _updatableMsgType; // +0x8
    NSString * _digestContent; // +0x10
}
- (id)digestContent;
- (void)setDigestContent:(id)arg1;
- (unsigned int)updatableMsgType;
- (void)setUpdatableMsgType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
