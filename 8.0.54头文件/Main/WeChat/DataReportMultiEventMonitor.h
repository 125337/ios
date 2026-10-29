@interface DataReportMultiEventMonitor : MMUserService <MMServiceProtocol>
{
    NSNumber * m_monitorSwitch; // +0x8
    BOOL m_isOpenMonitor; // +0x10
    id <DataReportMultiEventDelegate> _delegate; // +0x18
}
- (BOOL)isOpenMonitor;
- (void)startMonitor;
- (void)stopMonitor;
- (void)messageStart:(id)arg1 event:(unsigned int)arg2;
- (void)messageReturn:(id)arg1 event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

