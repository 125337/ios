@interface WCNewClickPageStatData : MMObject <PBCoding>
{
    unsigned int _errType; // +0x8
    unsigned int _errCnt; // +0xc
    unsigned int _firstEnterTimeStamp; // +0x10
    unsigned int _lastQuitTimeStamp; // +0x14
    NSMutableDictionary * _dicPageDatas; // +0x18
}
+ (void)PBArrayAdd_errType;
+ (void)PBArrayAdd_errCnt;
+ (void)PBArrayAdd_dicPageDatas;
+ (void)PBArrayAdd_firstEnterTimeStamp;
+ (void)PBArrayAdd_lastQuitTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)errType;
- (void)setErrType:(unsigned int)arg1;
- (unsigned int)errCnt;
- (void)setErrCnt:(unsigned int)arg1;
- (id)dicPageDatas;
- (void)setDicPageDatas:(id)arg1;
- (unsigned int)firstEnterTimeStamp;
- (void)setFirstEnterTimeStamp:(unsigned int)arg1;
- (unsigned int)lastQuitTimeStamp;
- (void)setLastQuitTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
