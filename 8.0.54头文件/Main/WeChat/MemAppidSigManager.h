@interface MemAppidSigManager : NSObject <NSCoding>
{
    NSMutableDictionary * appidSigDic; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)setMemSig:(id)arg1;
- (id)memSigByAppid:(unsigned int)arg1 andName:(id)arg2;
- (void)removeMemSigByAppid:(unsigned int)arg1;
- (void)setMemPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (unsigned int)expireTimeByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (unsigned int)sigTimeByAppid:(unsigned int)arg1;
- (unsigned int)topPriorityAppid;
- (void)printAppidSigAll;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end

