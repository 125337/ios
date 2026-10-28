@interface AmoebaMultiEventMonitor : NSObject
{
    NSNumber * m_monitorSwitch; // +0x8
    BOOL m_isOpenMonitor; // +0x10
    id <AmoebaMultiEventDelegate> _delegate; // +0x18
}
+ (id)shareInstance;
- (BOOL)isOpenMonitor;
- (void)startMonitor;
- (void)stopMonitor;
- (void)onPbCgiReq:(id)arg1 cgiName:(id)arg2;
- (void)onPbCgiResq:(id)arg1 cgiName:(id)arg2 errCode:(unsigned int)arg3 errMsg:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
