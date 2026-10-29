@interface TemplateMsgRecvStateItem : NSObject
{
    NSString * _templateId; // +0x8
    unsigned int _recvState; // +0x10
    NSString * _templateTitle; // +0x18
}
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (unsigned int)recvState;
- (void)setRecvState:(unsigned int)arg1;
- (id)templateTitle;
- (void)setTemplateTitle:(id)arg1;
- (void).cxx_destruct;
@end

