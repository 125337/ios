@interface WAPermissionActionSheetInfo : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _isOpenComment; // +0x8
    BOOL _isNeedEvaluateBeforeExit; // +0x9
    unsigned int _popEvaluateLeastStayTime; // +0xc
    NSData * _controlBytes; // +0x10
}
+ (void)PBArrayAdd_isOpenComment;
+ (void)PBArrayAdd_isNeedEvaluateBeforeExit;
+ (void)PBArrayAdd_popEvaluateLeastStayTime;
+ (void)PBArrayAdd_controlBytes;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (BOOL)isOpenComment;
- (void)setIsOpenComment:(BOOL)arg1;
- (BOOL)isNeedEvaluateBeforeExit;
- (void)setIsNeedEvaluateBeforeExit:(BOOL)arg1;
- (unsigned int)popEvaluateLeastStayTime;
- (void)setPopEvaluateLeastStayTime:(unsigned int)arg1;
- (id)controlBytes;
- (void)setControlBytes:(id)arg1;
- (void).cxx_destruct;
@end

