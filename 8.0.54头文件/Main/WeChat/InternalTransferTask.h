@interface InternalTransferTask : NSObject
{
    id <InternalTransferTaskDelegate> _m_delegate; // +0x8
}
- (void)startTask;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

