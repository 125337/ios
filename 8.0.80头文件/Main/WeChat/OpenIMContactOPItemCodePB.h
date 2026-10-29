@interface OpenIMContactOPItemCodePB : NSObject <PBCoding>
{
    BOOL _isNeedSync; // +0x8
    unsigned int _oPLogType; // +0xc
    NSData * _oPLogData; // +0x10
    NSString * _oPLogId; // +0x18
}
+ (void)PBArrayAdd_oPLogType;
+ (void)PBArrayAdd_oPLogData;
+ (void)PBArrayAdd_oPLogId;
+ (void)PBArrayAdd_isNeedSync;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)oPLogType;
- (void)setOPLogType:(unsigned int)arg1;
- (id)oPLogData;
- (void)setOPLogData:(id)arg1;
- (id)oPLogId;
- (void)setOPLogId:(id)arg1;
- (BOOL)isNeedSync;
- (void)setIsNeedSync:(BOOL)arg1;
- (void).cxx_destruct;
@end
