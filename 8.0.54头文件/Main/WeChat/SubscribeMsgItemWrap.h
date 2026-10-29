@interface SubscribeMsgItemWrap : MMObject
{
    BOOL _isHandling; // +0x8
    SubscribeMsgItem * _msgItem; // +0x10
}
- (id)msgItem;
- (void)setMsgItem:(id)arg1;
- (BOOL)isHandling;
- (void)setIsHandling:(BOOL)arg1;
- (void).cxx_destruct;
@end

