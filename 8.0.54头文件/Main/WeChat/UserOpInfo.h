@interface UserOpInfo : NSObject
{
    unsigned int module; // +0x8
    unsigned long long timestamp; // +0x10
    unsigned int seq; // +0x18
    int currentPage; // +0x1c
    int opType; // +0x20
    NSString * dataflowSourceInfo; // +0x28
    NSString * dataflowResultInfo; // +0x30
    NSString * statusDesc1; // +0x38
    NSString * statusDesc2; // +0x40
}
- (id)init;
- (id)genStatInfo;
- (void)resetStatus;
- (unsigned int)module;
- (void)setModule:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (int)currentPage;
- (void)setCurrentPage:(int)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id)dataflowSourceInfo;
- (void)setDataflowSourceInfo:(id)arg1;
- (id)dataflowResultInfo;
- (void)setDataflowResultInfo:(id)arg1;
- (id)statusDesc1;
- (void)setStatusDesc1:(id)arg1;
- (id)statusDesc2;
- (void)setStatusDesc2:(id)arg1;
- (void).cxx_destruct;
@end

