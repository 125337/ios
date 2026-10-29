@interface WCFinderTipsPathInfo : NSObject
{
    NSString * _nsPathKey; // +0x8
    NSMutableSet * _tipsUuidSet; // +0x10
}
- (id)init;
- (id)tipsUuidSet;
- (void)uuidContainerAddObject:(id)arg1;
- (void)uuidContainerRemoveObject:(id)arg1;
- (id)uuidContainerMutableCopy;
- (unsigned long long)uuidContainerCount;
- (void)uuidContainerEnumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)_synchronizedAddObjectToTipsUuidSet:(id)arg1;
- (void)_synchronizedRemoveObjectToTipsUuidSet:(id)arg1;
- (id)_synchronizedMutableCopyTipsUuidSet;
- (id)nsPathKey;
- (void)setNsPathKey:(id)arg1;
- (void)setTipsUuidSet:(id)arg1;
- (void).cxx_destruct;
@end
