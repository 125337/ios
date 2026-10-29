@interface SREReportData : NSObject <PBCoding>
{
    unsigned int _siriSessionId; // +0x8
    unsigned int _success; // +0xc
    unsigned int _siriOpCode; // +0x10
    unsigned int _receiverType; // +0x14
    unsigned int _matchStatus; // +0x18
    unsigned int _multiReceiverOpCode; // +0x1c
}
+ (void)PBArrayAdd_siriSessionId;
+ (void)PBArrayAdd_success;
+ (void)PBArrayAdd_siriOpCode;
+ (void)PBArrayAdd_receiverType;
+ (void)PBArrayAdd_matchStatus;
+ (void)PBArrayAdd_multiReceiverOpCode;
+ (void)initialize;
- (id)getPBPropertyTable;
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

