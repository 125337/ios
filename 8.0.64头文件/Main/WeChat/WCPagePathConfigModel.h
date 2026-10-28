@interface WCPagePathConfigModel : MMObject <PBCoding>
{
    BOOL _isNeedReportSingle; // +0x8
    unsigned int _prePageCount; // +0xc
    NSString * _sid; // +0x10
    NSString * _pagePathId; // +0x18
    unsigned long long _type; // +0x20
    NSMutableArray * _pagePathUnits; // +0x28
    NSString * _logId; // +0x30
    NSMutableArray * _vagueBusinessParams; // +0x38
    NSMutableArray * _vagueViewOperations; // +0x40
    NSString * _originalJson; // +0x48
    NSMutableDictionary * _viewOperationsDicForKey; // +0x50
    NSMutableDictionary * _viewOperationsDicForViewID; // +0x58
}
+ (void)PBArrayAdd_sid;
+ (void)PBArrayAdd_pagePathId;
+ (void)PBArrayAdd_pagePathUnits;
+ (void)PBArrayAdd_logId;
+ (void)PBArrayAdd_isNeedReportSingle;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_prePageCount;
+ (void)PBArrayAdd_vagueBusinessParams;
+ (void)PBArrayAdd_vagueViewOperations;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)initCacheDictionary;
- (id)toString;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)pagePathId;
- (void)setPagePathId:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)pagePathUnits;
- (void)setPagePathUnits:(id)arg1;
- (unsigned int)prePageCount;
- (void)setPrePageCount:(unsigned int)arg1;
- (id)logId;
- (void)setLogId:(id)arg1;
- (id)vagueBusinessParams;
- (void)setVagueBusinessParams:(id)arg1;
- (id)vagueViewOperations;
- (void)setVagueViewOperations:(id)arg1;
- (BOOL)isNeedReportSingle;
- (void)setIsNeedReportSingle:(BOOL)arg1;
- (id)originalJson;
- (void)setOriginalJson:(id)arg1;
- (id)viewOperationsDicForKey;
- (void)setViewOperationsDicForKey:(id)arg1;
- (id)viewOperationsDicForViewID;
- (void)setViewOperationsDicForViewID:(id)arg1;
- (void).cxx_destruct;
@end
