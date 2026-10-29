@interface EmoticonDownloadMd5ListCgi : MMObject
{
    BOOL _isActive; // +0x8
    BOOL _m_hasStartRequestOnce; // +0x9
    id <EmoticonDownloadMd5ListCgiDelegate> _delegate; // +0x10
    unsigned long long _m_type; // +0x18
    NSString * _logPrefix; // +0x20
    NSData * _reqBuff; // +0x28
    NSDictionary * _validEmojiInfoObjDic; // +0x30
    NSMutableArray * _md5List; // +0x38
    NSMutableSet * _needUpateMd5Set; // +0x40
    OrderedDictionary * _md5ObjectOrderedList; // +0x48
    NSString * _versionKey; // +0x50
}
- (id)initWithType:(unsigned long long)arg1 reqBuff:(id)arg2 validEmojiInfoObjDic:(id)arg3;
- (void)startRequest;
- (void)continueRequestMd5List;
- (void)requestAllEmojiInfoList;
- (void)callFailedDelegate;
- (void)restartDownloadAllMd5;
- (void)callOkDelegate;
- (id)convertMd5List:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (unsigned long long)m_type;
- (void)setM_type:(unsigned long long)arg1;
- (BOOL)m_hasStartRequestOnce;
- (void)setM_hasStartRequestOnce:(BOOL)arg1;
- (id)logPrefix;
- (void)setLogPrefix:(id)arg1;
- (id)reqBuff;
- (void)setReqBuff:(id)arg1;
- (id)validEmojiInfoObjDic;
- (void)setValidEmojiInfoObjDic:(id)arg1;
- (id)md5List;
- (void)setMd5List:(id)arg1;
- (id)needUpateMd5Set;
- (void)setNeedUpateMd5Set:(id)arg1;
- (id)md5ObjectOrderedList;
- (void)setMd5ObjectOrderedList:(id)arg1;
- (id)versionKey;
- (void)setVersionKey:(id)arg1;
- (void).cxx_destruct;
@end
