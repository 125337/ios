@interface CmtBrowseData : NSObject
{
    NSString * _feedID; // +0x8
    NSString * _cmtID; // +0x10
    long long _expCnt; // +0x18
    long long _clkCnt; // +0x20
    long long _cmtType; // +0x28
    long long _clkEmoCnt; // +0x30
    long long _clkPicCnt; // +0x38
    long long _cmtTextLength; // +0x40
}
- (id)init;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)cmtID;
- (void)setCmtID:(id)arg1;
- (long long)expCnt;
- (void)setExpCnt:(long long)arg1;
- (long long)clkCnt;
- (void)setClkCnt:(long long)arg1;
- (long long)cmtType;
- (void)setCmtType:(long long)arg1;
- (long long)clkEmoCnt;
- (void)setClkEmoCnt:(long long)arg1;
- (long long)clkPicCnt;
- (void)setClkPicCnt:(long long)arg1;
- (long long)cmtTextLength;
- (void)setCmtTextLength:(long long)arg1;
- (void).cxx_destruct;
@end
