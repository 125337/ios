@interface SREReportData : NSObject <PBCoding>
{
    unsigned int siriSessionId; // +0x8
    unsigned int success; // +0xc
    unsigned int siriOpCode; // +0x10
    unsigned int receiverType; // +0x14
    unsigned int matchStatus; // +0x18
    unsigned int multiReceiverOpCode; // +0x1c
}
+ (void)PBArrayAdd_siriSessionId;
+ (void)PBArrayAdd_success;
+ (void)PBArrayAdd_siriOpCode;
+ (void)PBArrayAdd_receiverType;
+ (void)PBArrayAdd_matchStatus;
+ (void)PBArrayAdd_multiReceiverOpCode;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)defaultRecord;
- (void)setupSessionId;
- (unsigned int)siriSessionId;
- (void)setSiriSessionId:(unsigned int)arg1;
- (unsigned int)success;
- (void)setSuccess:(unsigned int)arg1;
- (unsigned int)siriOpCode;
- (void)setSiriOpCode:(unsigned int)arg1;
- (unsigned int)receiverType;
- (void)setReceiverType:(unsigned int)arg1;
- (unsigned int)matchStatus;
- (void)setMatchStatus:(unsigned int)arg1;
- (unsigned int)multiReceiverOpCode;
- (void)setMultiReceiverOpCode:(unsigned int)arg1;
@end

