@interface WACronetProgressInfo : NSObject
{
    NSString * _m_nsClientMsgID; // +0x8
    unsigned long long _m_nTotalLength; // +0x10
    unsigned long long _m_nFinishedLegth; // +0x18
}
- (id)initWithClientMediaID:(id)arg1 totalLength:(unsigned long long)arg2 finishLength:(unsigned long long)arg3;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (unsigned long long)m_nTotalLength;
- (void)setM_nTotalLength:(unsigned long long)arg1;
- (unsigned long long)m_nFinishedLegth;
- (void)setM_nFinishedLegth:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
