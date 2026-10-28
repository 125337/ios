@interface MPPageSlovMetaData : NSObject <PBCoding>
{
    unsigned int _referMsgSendTime; // +0x8
    unsigned int _firstMsgSendTime; // +0xc
    unsigned int _lastMsgSendTime; // +0x10
}
+ (void)PBArrayAdd_referMsgSendTime;
+ (void)PBArrayAdd_firstMsgSendTime;
+ (void)PBArrayAdd_lastMsgSendTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)referMsgSendTime;
- (void)setReferMsgSendTime:(unsigned int)arg1;
- (unsigned int)firstMsgSendTime;
- (void)setFirstMsgSendTime:(unsigned int)arg1;
- (unsigned int)lastMsgSendTime;
- (void)setLastMsgSendTime:(unsigned int)arg1;
@end
