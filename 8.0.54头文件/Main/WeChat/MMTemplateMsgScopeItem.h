@interface MMTemplateMsgScopeItem : MMObject <PBCoding, NSCopying>
{
    BOOL _isScopeRecv; // +0x8
    BOOL _isShowInSetting; // +0x9
    BOOL _isBan; // +0xa
    BOOL _isAudioTemplate; // +0xb
    BOOL _isAcceptWithAudio; // +0xc
    BOOL _isForceNotifyTemplate; // +0xd
    BOOL _isAcceptWithForceNotify; // +0xe
    unsigned int _maxValidTime; // +0x10
    unsigned int _templateType; // +0x14
    unsigned int _tid; // +0x18
    unsigned int _businessType; // +0x1c
    NSString * _scopeID; // +0x20
    NSString * _scopeName; // +0x28
    NSMutableArray * _kvList; // +0x30
    NSString * _audioTemplateUrl; // +0x38
}
+ (void)PBArrayAdd_scopeID;
+ (void)PBArrayAdd_scopeName;
+ (void)PBArrayAdd_isScopeRecv;
+ (void)PBArrayAdd_isShowInSetting;
+ (void)PBArrayAdd_maxValidTime;
+ (void)PBArrayAdd_kvList;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_isBan;
+ (void)PBArrayAdd_isAudioTemplate;
+ (void)PBArrayAdd_isAcceptWithAudio;
+ (void)PBArrayAdd_audioTemplateUrl;
+ (void)PBArrayAdd_isForceNotifyTemplate;
+ (void)PBArrayAdd_isAcceptWithForceNotify;
+ (void)PBArrayAdd_businessType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)scopeID;
- (void)setScopeID:(id)arg1;
- (id)scopeName;
- (void)setScopeName:(id)arg1;
- (BOOL)isScopeRecv;
- (void)setIsScopeRecv:(BOOL)arg1;
- (BOOL)isShowInSetting;
- (void)setIsShowInSetting:(BOOL)arg1;
- (unsigned int)maxValidTime;
- (void)setMaxValidTime:(unsigned int)arg1;
- (id)kvList;
- (void)setKvList:(id)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (unsigned int)tid;
- (void)setTid:(unsigned int)arg1;
- (BOOL)isBan;
- (void)setIsBan:(BOOL)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (BOOL)isAudioTemplate;
- (void)setIsAudioTemplate:(BOOL)arg1;
- (BOOL)isAcceptWithAudio;
- (void)setIsAcceptWithAudio:(BOOL)arg1;
- (id)audioTemplateUrl;
- (void)setAudioTemplateUrl:(id)arg1;
- (BOOL)isForceNotifyTemplate;
- (void)setIsForceNotifyTemplate:(BOOL)arg1;
- (BOOL)isAcceptWithForceNotify;
- (void)setIsAcceptWithForceNotify:(BOOL)arg1;
- (void).cxx_destruct;
@end

