@interface SafeModeReportData : NSObject <PBCoding>
{
    BOOL _isKVReport; // +0x8
    BOOL _isReportNow; // +0x9
    BOOL _isKeyLog; // +0xa
    int _ID; // +0xc
    int _key; // +0x10
    int _value; // +0x14
    NSString * _ext; // +0x18
}
+ (void)PBArrayAdd_ID;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_isKVReport;
+ (void)PBArrayAdd_ext;
+ (void)PBArrayAdd_isReportNow;
+ (void)PBArrayAdd_isKeyLog;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (id)initWithID:(int)arg1 ext:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4;
- (int)ID;
- (void)setID:(int)arg1;
- (int)key;
- (void)setKey:(int)arg1;
- (int)value;
- (void)setValue:(int)arg1;
- (BOOL)isKVReport;
- (void)setIsKVReport:(BOOL)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
- (BOOL)isReportNow;
- (void)setIsReportNow:(BOOL)arg1;
- (BOOL)isKeyLog;
- (void)setIsKeyLog:(BOOL)arg1;
- (void).cxx_destruct;
@end

