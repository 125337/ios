@interface WCRedEnvelopesHistoryInfo : NSObject
{
    long long m_lRecTotalNum; // +0x8
    long long m_lRecTotalAmount; // +0x10
    long long m_lSendTotalNum; // +0x18
    long long m_lSendTotalAmount; // +0x20
    long long m_lTotalGameCount; // +0x28
    NSMutableArray * m_arrRecList; // +0x30
    NSMutableArray * m_arrSendList; // +0x38
    BOOL m_bHasMoreValue; // +0x40
    NSString * m_nsCurrentYear; // +0x48
    NSArray * m_arrAllowSelectYear; // +0x50
    NSString * m_nsHeaderImageClickedUrl; // +0x58
    NSString * m_nsProcessContent; // +0x60
}
- (id)m_arrRecList;
- (void)setM_arrRecList:(id)arg1;
- (id)m_arrSendList;
- (void)setM_arrSendList:(id)arg1;
- (long long)m_lRecTotalAmount;
- (void)setM_lRecTotalAmount:(long long)arg1;
- (long long)m_lRecTotalNum;
- (void)setM_lRecTotalNum:(long long)arg1;
- (long long)m_lSendTotalAmount;
- (void)setM_lSendTotalAmount:(long long)arg1;
- (long long)m_lSendTotalNum;
- (void)setM_lSendTotalNum:(long long)arg1;
- (long long)m_lTotalGameCount;
- (void)setM_lTotalGameCount:(long long)arg1;
- (BOOL)m_bHasMoreValue;
- (void)setM_bHasMoreValue:(BOOL)arg1;
- (id)m_arrAllowSelectYear;
- (void)setM_arrAllowSelectYear:(id)arg1;
- (id)m_nsCurrentYear;
- (void)setM_nsCurrentYear:(id)arg1;
- (id)m_nsHeaderImageClickedUrl;
- (void)setM_nsHeaderImageClickedUrl:(id)arg1;
- (id)m_nsProcessContent;
- (void)setM_nsProcessContent:(id)arg1;
- (void).cxx_destruct;
@end
