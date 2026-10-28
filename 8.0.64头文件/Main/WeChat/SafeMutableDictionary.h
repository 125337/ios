@interface SafeMutableDictionary : NSObject
{
    NSMutableDictionary * _m_dic; // +0x8
    NSRecursiveLock * _m_lock; // +0x10
}
- (id)init;
- (void)dictionaryReset;
- (void)dictionarySetObject:(id)arg1 key:(id)arg2;
- (id)dictionaryGetObjectForKey:(id)arg1;
- (void)dictionaryRemoveObjectForKey:(id)arg1;
- (id)dictionaryAllKeys;
- (id)m_dic;
- (void)setM_dic:(id)arg1;
- (id)m_lock;
- (void)setM_lock:(id)arg1;
- (void).cxx_destruct;
@end
