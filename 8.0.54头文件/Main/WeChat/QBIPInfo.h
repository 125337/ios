@interface QBIPInfo : NSObject <NSCoding>
{
    int _eIPType; // +0x8
    int _iTotalPollNum; // +0xc
    int _currPollNum; // +0x10
    int _currIpIndex; // +0x14
    double _lifeTimeSince1970; // +0x18
    NSArray * _ipArrays; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (int)eIPType;
- (void)setEIPType:(int)arg1;
- (int)iTotalPollNum;
- (void)setITotalPollNum:(int)arg1;
- (int)currPollNum;
- (void)setCurrPollNum:(int)arg1;
- (double)lifeTimeSince1970;
- (void)setLifeTimeSince1970:(double)arg1;
- (id)ipArrays;
- (void)setIpArrays:(id)arg1;
- (int)currIpIndex;
- (void)setCurrIpIndex:(int)arg1;
@end

