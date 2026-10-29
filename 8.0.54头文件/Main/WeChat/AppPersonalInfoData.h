@interface AppPersonalInfoData : NSObject
{
    BOOL shouldBold; // +0x8
    unsigned int rankWeight; // +0xc
    NSString * rank; // +0x10
}
- (id)init;
- (id)rank;
- (void)setRank:(id)arg1;
- (BOOL)shouldBold;
- (void)setShouldBold:(BOOL)arg1;
- (unsigned int)rankWeight;
- (void)setRankWeight:(unsigned int)arg1;
- (void).cxx_destruct;
@end

