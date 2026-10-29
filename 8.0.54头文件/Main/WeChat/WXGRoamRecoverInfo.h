@interface WXGRoamRecoverInfo : NSObject <PBCoding>
{
    NSMutableDictionary * _recoverMap; // +0x8
    NSRecursiveLock * _markLock; // +0x10
}
+ (void)PBArrayAdd_recoverMap;
+ (void)initialize;
+ (id)loadRecoverInfoFromFile;
+ (BOOL)saveRecoverInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)getRecoverTimeForKey:(id)arg1;
- (void)saveRecoverTime:(unsigned long long)arg1 withKey:(id)arg2;
- (id)recoverMap;
- (void)setRecoverMap:(id)arg1;
- (id)markLock;
- (void)setMarkLock:(id)arg1;
- (void).cxx_destruct;
@end

