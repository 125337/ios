@interface WCRedEnvelopesRewardInfo : NSObject <NSCoding, PBCoding>
{
    unsigned int _resoureId; // +0x8
    unsigned int _reportId; // +0xc
    unsigned int _reportKey; // +0x10
    NSMutableArray * _arrRewardItem; // +0x18
}
+ (void)PBArrayAdd_resoureId;
+ (void)PBArrayAdd_arrRewardItem;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_reportKey;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasRewardForMe;
- (unsigned int)resoureId;
- (void)setResoureId:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (unsigned int)reportKey;
- (void)setReportKey:(unsigned int)arg1;
- (id)arrRewardItem;
- (void)setArrRewardItem:(id)arg1;
- (void).cxx_destruct;
@end
