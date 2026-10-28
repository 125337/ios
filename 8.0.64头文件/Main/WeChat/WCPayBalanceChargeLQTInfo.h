@interface WCPayBalanceChargeLQTInfo : NSObject <PBCoding>
{
    BOOL _isLqtUser; // +0x8
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
    WCPayBalanceLQTOpenInfo * _openLqtInfo; // +0x20
    NSString * _lqtOperateId; // +0x28
    NSString * _lqtTraceInfo; // +0x30
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_isLqtUser;
+ (void)PBArrayAdd_openLqtInfo;
+ (void)PBArrayAdd_lqtOperateId;
+ (void)PBArrayAdd_lqtTraceInfo;
+ (void)initialize;
+ (id)genFromDict:(id)arg1;
+ (id)genFromCache;
+ (void)clearCache;
- (id)getPBPropertyTable;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)isLqtUser;
- (void)setIsLqtUser:(BOOL)arg1;
- (id)openLqtInfo;
- (void)setOpenLqtInfo:(id)arg1;
- (id)lqtOperateId;
- (void)setLqtOperateId:(id)arg1;
- (id)lqtTraceInfo;
- (void)setLqtTraceInfo:(id)arg1;
- (void).cxx_destruct;
@end
