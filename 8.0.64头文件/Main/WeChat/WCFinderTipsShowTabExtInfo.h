@interface WCFinderTipsShowTabExtInfo : NSObject <PBCoding>
{
    unsigned int _jumpPriority; // +0x8
    NSString * _tipsUuid; // +0x10
    NSString * _reportExtInfo; // +0x18
}
+ (void)PBArrayAdd_jumpPriority;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)initialize;
+ (id)extInfoWith:(id)arg1 tipsUuid:(id)arg2;
- (id)getPBPropertyTable;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (unsigned int)jumpPriority;
- (void)setJumpPriority:(unsigned int)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
