@interface WCFinderRedDotDictionaryHelper : NSObject
{
    BOOL _useGCDSwitch; // +0x8
    WCFinderRedDotThreadSafeDictionary * _gcdDic; // +0x10
    NSMutableDictionary * _dic; // +0x18
}
- (id)initWithGCDSwitch:(BOOL)arg1 queueName:(id)arg2;
- (id)currentDic;
- (void)containerReset;
- (void)containerSetObject:(id)arg1 forKey:(id)arg2;
- (void)containerRemoveObjectForKey:(id)arg1;
- (void)containerRemoveObjectsForKeys:(id)arg1;
- (id)containerObjectForKey:(id)arg1;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (void)containerEnumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)containerAllValues;
- (BOOL)useGCDSwitch;
- (void)setUseGCDSwitch:(BOOL)arg1;
- (id)gcdDic;
- (void)setGcdDic:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (void).cxx_destruct;
@end

