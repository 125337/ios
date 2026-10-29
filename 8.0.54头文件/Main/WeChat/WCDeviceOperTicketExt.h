@interface WCDeviceOperTicketExt : MMObject
{
    WCDevice * _device; // +0x8
    unsigned int _operType; // +0x10
    NSString * _ticket; // +0x18
    JSEvent * _callBackEvent; // +0x20
}
- (id)device;
- (void)setDevice:(id)arg1;
- (unsigned int)operType;
- (void)setOperType:(unsigned int)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)callBackEvent;
- (void)setCallBackEvent:(id)arg1;
- (void).cxx_destruct;
@end

