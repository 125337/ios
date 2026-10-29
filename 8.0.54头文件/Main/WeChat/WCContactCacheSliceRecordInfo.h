@interface WCContactCacheSliceRecordInfo : NSObject <PBCoding>
{
    BOOL _isHadNotSave; // +0x8
    unsigned int _recordTime; // +0xc
    NSMutableSet * _setUserName; // +0x10
}
+ (void)PBArrayAdd_recordTime;
+ (void)PBArrayAdd_setUserName;
+ (void)PBArrayAdd_isHadNotSave;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)recordTime;
- (void)setRecordTime:(unsigned int)arg1;
- (id)setUserName;
- (void)setSetUserName:(id)arg1;
- (BOOL)isHadNotSave;
- (void)setIsHadNotSave:(BOOL)arg1;
- (void).cxx_destruct;
@end

