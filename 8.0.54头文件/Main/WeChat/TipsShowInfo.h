@interface TipsShowInfo : MMObject <PBCoding>
{
    BOOL _bHadShow; // +0x8
    unsigned int _tipsId; // +0xc
    unsigned long long _tipsShowType; // +0x10
    NSString * _title; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _path; // +0x28
    NSMutableArray * _arrParents; // +0x30
    NSArray * _arrShowingTips; // +0x38
}
+ (void)PBArrayAdd_tipsShowType;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_arrParents;
+ (void)PBArrayAdd_bHadShow;
+ (void)initialize;
- (id)arrParents;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)tipsId;
- (void)setTipsId:(unsigned int)arg1;
- (unsigned long long)tipsShowType;
- (void)setTipsShowType:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void)setArrParents:(id)arg1;
- (id)arrShowingTips;
- (void)setArrShowingTips:(id)arg1;
- (BOOL)bHadShow;
- (void)setBHadShow:(BOOL)arg1;
- (void).cxx_destruct;
@end

