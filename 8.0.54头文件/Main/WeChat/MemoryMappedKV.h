@interface MemoryMappedKV : NSObject
{
    NSRecursiveLock * m_lock; // +0x8
    NSMutableDictionary * m_dic; // +0x10
    void * m_plainDic; // +0x18
    NSString * m_path; // +0x20
    NSString * m_crcPath; // +0x28
    NSString * m_mmapID; // +0x30
    void * m_file; // +0x38
    unsigned long long m_actualSize; // +0x40
    unsigned long long m_initSize; // +0x48
    CodedOutputData * m_output; // +0x50
    AESCrypt * m_cryptor; // +0x58
    BOOL m_needLoadFromFile; // +0x60
    BOOL m_isFirstCreated; // +0x61
    unsigned int m_crcDigest; // +0x64
    MMKVMetaInfo m_metaInfo; // +0x68
    void * m_metaFile; // +0xe8
    unsigned long long m_recoverStrategic; // +0xf0
    unsigned long long m_lastAccessTime; // +0xf8
    BOOL m_isUsingNSData; // +0x100
    unsigned int m_itemSizeLimit; // +0x104
    BOOL m_isSecondLoad; // +0x108
    BOOL m_enableKeyExipre; // +0x109
    unsigned int m_expiredInSeconds; // +0x10c
}
+ (void)reportLengthFail;
+ (void)reportConfirmedLengthFail;
+ (void)reportMetaLengthGreater;
+ (void)reportMetaLengthSmaller;
+ (void)reportConfirmedLengthFailFinal;
+ (void)reportCRCCheckFail;
+ (void)reportConfirmedCRCCheckFail;
+ (void)reportCRCCheckFailFinal;
+ (void)reportTruncateFail;
+ (void)reportMMapFail;
+ (void)reportDecodeError;
+ (void)reportMetaFileReadError;
+ (id)WCCC_mmkv;
+ (id)CCO_coverageMMKV;
+ (id)CCO_settingMMKV;
+ (id)VoIPTerimation_mmkv;
+ (id)VoIPIntent_mmkv;
+ (void)initialize;
+ (void)setCurrentAppState:(long long)arg1;
+ (id)defaultMemoryMappedKV;
+ (id)sharedDefaultMemoryMappedKV;
+ (id)memoryMappedKVWithID:(id)arg1;
+ (id)memoryMappedKVWithID:(id)arg1 initSize:(unsigned long long)arg2;
+ (id)memoryMappedKVWithID:(id)arg1 itemSizeLimit:(unsigned int)arg2;
+ (id)memoryMappedKVWithID:(id)arg1 cryptKey:(id)arg2;
+ (id)memoryMappedKVWithID:(id)arg1 recoverStrategic:(unsigned long long)arg2 hasError:(BOOL *)arg3;
+ (id)memoryMappedKVWithID:(id)arg1 recoverStrategic:(unsigned long long)arg2 cryptKey:(id)arg3 itemSizeLimit:(unsigned int)arg4 initSize:(unsigned long long)arg5 hasError:(BOOL *)arg6;
+ (void)tryCleanUpInstanceByLRU;
+ (void)didEnterBackground;
+ (void)didBecomeActive;
+ (id)mappedKVPathWithID:(id)arg1;
+ (id)crcPathWithMappedKVPath:(id)arg1;
+ (BOOL)isFileValid:(id)arg1;
- (void)VoIPTermination_setIsInterrputted:(BOOL)arg1;
- (BOOL)VoIPTermination_isInterrputted;
- (void)VoIPTermination_setMaybeSuspend:(BOOL)arg1;
- (BOOL)VoIPTermination_maybeSuspend;
- (void)VoIPTermination_setIsMainThreadLagged:(BOOL)arg1;
- (BOOL)VoIPTermination_isMainThreadLagged;
- (void)VoIPTerimation_setIsOpened:(BOOL)arg1;
- (BOOL)VoIPTerimation_isOpened;
- (void)VoIPTerimation_setIsCaller:(BOOL)arg1;
- (BOOL)VoIPTerimation_isCaller;
- (void)VoIPTerimation_setIsAccepted:(BOOL)arg1;
- (BOOL)VoIPTerimation_isAccepted;
- (void)VoIPTerimation_setRemoteUsername:(id)arg1;
- (id)VoIPTerimation_remoteUsername;
- (void)VoIPTerimation_setRoomID:(unsigned long long)arg1;
- (unsigned long long)VoIPTerimation_roomID;
- (void)VoIPTerimation_setRoomKey:(long long)arg1;
- (long long)VoIPTerimation_roomKey;
- (void)VoIPTerimation_setInviteType:(unsigned int)arg1;
- (unsigned int)VoIPTerimation_inviteType;
- (void)VoIPTerimation_setInviteID:(unsigned int)arg1;
- (unsigned int)VoIPTerimation_inviteID;
- (void)VoIPTerimation_setLaunchTimestamp:(unsigned int)arg1;
- (unsigned int)VoIPTerimation_launchTimestamp;
- (void)VoIPTerimation_setAcceptedRoomKey:(long long)arg1;
- (long long)VoIPTerimation_acceptedRoomKey;
- (void)VoIPTerimation_setStartTime:(unsigned int)arg1;
- (unsigned int)VoIPTerimation_startTime;
- (void)VoIPTerimation_setTalkingTime:(unsigned int)arg1;
- (unsigned int)VoIPTerimation_talkingTime;
- (void)VoIPTerimation_setCreateTimestamp:(unsigned int)arg1;
- (unsigned int)VoIPTerimation_createTimestamp;
- (void)VoIPTerimation_setIsIlink:(BOOL)arg1;
- (BOOL)VoIPTerimation_isIlink;
- (BOOL)shouldReissueRequest;
- (void)VoIPTerimation_reissueCancelInviteRequestIfNeedWithPBMessageObserverDelegate:(id)arg1;
- (void)VoIPTerimation_reissueShutdownRequestIfNeedWithPBMessageObserverDelegate:(id)arg1;
- (void)VoIPTerimation_supplementMsgIfNeed;
- (void)VoIPIntent_setIsReceivedNotificationFromAPNS:(BOOL)arg1;
- (BOOL)VoIPIntent_isReceivedNotificationFromAPNS;
- (id)initWithMMapID:(id)arg1 recoverStrategic:(unsigned long long)arg2 cryptKey:(id)arg3 itemSizeLimit:(unsigned int)arg4 initSize:(unsigned long long)arg5 hasError:(BOOL *)arg6;
- (void)dealloc;
- (unsigned int)itemSizeLimit;
- (void)onMemoryWarning;
- (BOOL)checkMetaFileDiskError;
- (void)loadMetaInfoAndCheck;
- (void)loadFromFile:(BOOL *)arg1;
- (void)checkDataValid:(BOOL *)arg1 loadFromFile:(BOOL *)arg2 needFullWriteBack:(BOOL *)arg3;
- (void)checkLoadData;
- (void)clearAll;
- (void)clearMemoryState;
- (void)doClearMemoryState:(BOOL)arg1;
- (void)close;
- (void)trim;
- (void)gentleTrimAfterFullWriteback:(unsigned long long)arg1;
- (BOOL)truncate:(unsigned long long)arg1;
- (BOOL)ensureMemorySize:(unsigned long long)arg1 needFilterKeys:(BOOL)arg2;
- (unsigned long long)readActualSize;
- (BOOL)oldStyleWriteActualSize:(unsigned long long)arg1;
- (BOOL)writeActualSize:(unsigned long long)arg1 andCRC:(unsigned int)arg2 andIV:(const char *)arg3 increaseSequence:(BOOL)arg4;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 isDataHolder:(BOOL)arg3;
- (BOOL)setDataWrap:(const NormalBufferWrap *)arg1 forKey:(id)arg2 isDataHolder:(BOOL)arg3;
- (BOOL)setPlainDicDataWrap:(const NormalBufferWrap *)arg1 forKey:(id)arg2 isDataHolder:(BOOL)arg3;
- (pair<bool, KeyValueHolder>)appendData:(const NormalBufferWrap *)arg1 forKey:(id)arg2 isDataHolder:(BOOL)arg3;
- (pair<bool, KeyValueHolder>)appendData:(const NormalBufferWrap *)arg1 withKey:(KeyValueHolder *)arg2 isDataHolder:(BOOL)arg3;
- (pair<bool, KeyValueHolder>)doAppendData:(const NormalBufferWrap *)arg1 withKey:(id)arg2 isDataHolder:(BOOL)arg3 originKeyLength:(unsigned int)arg4;
- (pair<bool, KeyValueHolder>)overrideData:(const NormalBufferWrap *)arg1 forKey:(id)arg2 isDataHolder:(BOOL)arg3;
- (pair<bool, KeyValueHolder>)overrideData:(const NormalBufferWrap *)arg1 withKey:(KeyValueHolder *)arg2 isDataHolder:(BOOL)arg3;
- (pair<bool, KeyValueHolder>)doOverrideData:(const NormalBufferWrap *)arg1 withKey:(id)arg2 isDataHolder:(BOOL)arg3 originKeyLength:(unsigned int)arg4;
- (BOOL)checkSizeForOverride:(unsigned long long)arg1;
- (id)getRawDataForKey:(id)arg1;
- (BOOL)fullWriteback:(AESCrypt *)arg1 needFilterKeys:(BOOL)arg2;
- (BOOL)doFullWriteBack:(pair<NSData *, unsigned long>)arg1 crypter:(AESCrypt *)arg2;
- (BOOL)isFileValid;
- (BOOL)checkFileWithSize:(unsigned long long)arg1 toCRCDigest:(unsigned int)arg2;
- (void)recaculateCRCDigestWithIV:(const char *)arg1;
- (void)recaculateCRCDigestOnly;
- (void)updateCRCDigest:(const char *)arg1 withSize:(unsigned long long)arg2;
- (id)cryptKey;
- (BOOL)reKey:(id)arg1;
- (void)lock;
- (void)unlock;
- (id)getGeneralRawDataForKey:(id)arg1;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setPBObject:(id)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setPBData:(id)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setInt32:(int)arg1 forKey:(id)arg2;
- (BOOL)setInt32:(int)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (BOOL)setUInt32:(unsigned int)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setInt64:(long long)arg1 forKey:(id)arg2;
- (BOOL)setInt64:(long long)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (BOOL)setUInt64:(unsigned long long)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setFloat:(float)arg1 forKey:(id)arg2;
- (BOOL)setFloat:(float)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (BOOL)setDouble:(double)arg1 forKey:(id)arg2;
- (BOOL)setDouble:(double)arg1 forKey:(id)arg2 expireDuration:(unsigned int)arg3;
- (id)getObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)getArrayOfValueType:(Class)arg1 forKey:(id)arg2;
- (BOOL)getBoolForKey:(id)arg1;
- (BOOL)getBoolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (int)getInt32ForKey:(id)arg1;
- (int)getInt32ForKey:(id)arg1 defaultValue:(int)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (unsigned int)getUInt32ForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (long long)getInt64ForKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (unsigned long long)getUInt64ForKey:(id)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (float)getFloatForKey:(id)arg1;
- (float)getFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)getDoubleForKey:(id)arg1;
- (double)getDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (id)getStringForKey:(id)arg1;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDateForKey:(id)arg1;
- (id)getDateForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDataForKey:(id)arg1;
- (id)getDataForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)containsKey:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)totalSize;
- (void)enumerateKeys:(id /* block */)arg1;
- (id)allKeys;
- (void)removeValueForKey:(id)arg1;
- (void)removeValuesForKeys:(id)arg1;
- (BOOL)doSync:(BOOL)arg1;
- (BOOL)sync;
- (BOOL)async;
- (id)path;
- (void)enableAutoKeyExpire:(unsigned int)arg1;
- (void)disableAutoKeyExpire;
- (unsigned int)getExpireTimeForKey:(id)arg1;
- (id)getRawDataWithoutMTimeForKey:(id)arg1;
- (void)filterExpiredKeys;
- (id).cxx_construct;
@end

