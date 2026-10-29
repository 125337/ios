@interface RedPointInfo : NSObject <PBCoding>
{
    unsigned int _redPointID; // +0x8
    unsigned int _mustClearInSameTime; // +0xc
    unsigned int _recieveTime; // +0x10
    NSString * _redPointPath; // +0x18
    NSString * _extInfoString; // +0x20
}
+ (void)PBArrayAdd_redPointPath;
+ (void)PBArrayAdd_redPointID;
+ (void)PBArrayAdd_mustClearInSameTime;
+ (void)PBArrayAdd_recieveTime;
+ (void)PBArrayAdd_extInfoString;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)redPointPath;
- (void)setRedPointPath:(id)arg1;
- (unsigned int)redPointID;
- (void)setRedPointID:(unsigned int)arg1;
- (unsigned int)mustClearInSameTime;
- (void)setMustClearInSameTime:(unsigned int)arg1;
- (unsigned int)recieveTime;
- (void)setRecieveTime:(unsigned int)arg1;
- (id)extInfoString;
- (void)setExtInfoString:(id)arg1;
- (void).cxx_destruct;
@end

