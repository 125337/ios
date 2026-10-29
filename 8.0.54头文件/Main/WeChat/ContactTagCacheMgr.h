@interface ContactTagCacheMgr : MMObject
{
    NSMutableDictionary * m_dicCache; // +0x8
    BOOL _bIsAlreadyBuildCacheFromContacts; // +0x10
}
- (id)init;
- (void)checkLoadCacheDataFromContacts;
- (void)ModCacheKey:(id)arg1 Value:(id)arg2;
- (void)DelCacheKey:(id)arg1;
- (id)GetCacheValue:(id)arg1;
- (id)GetLabelIDToUserNameList;
- (void).cxx_destruct;
@end

