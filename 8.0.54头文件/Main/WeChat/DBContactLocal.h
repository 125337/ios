@interface DBContactLocal : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _chatState; // +0x8
    unsigned int _needUpdate; // +0xc
    unsigned int _metaFlag; // +0x10
    unsigned int _lastUpdateTime; // +0x14
    unsigned int _lastModifyTime; // +0x18
    unsigned int _localCommonFlag; // +0x1c
    unsigned int _localAddContactTime; // +0x20
    NSString * _mobileIdentify; // +0x28
    NSString * _openIMPrivacyAgreementUrl; // +0x30
}
+ (void)PBArrayAdd_chatState;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_mobileIdentify;
+ (void)PBArrayAdd_metaFlag;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_localCommonFlag;
+ (void)PBArrayAdd_openIMPrivacyAgreementUrl;
+ (void)PBArrayAdd_localAddContactTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)chatState;
- (void)setChatState:(unsigned int)arg1;
- (unsigned int)needUpdate;
- (void)setNeedUpdate:(unsigned int)arg1;
- (id)mobileIdentify;
- (void)setMobileIdentify:(id)arg1;
- (unsigned int)metaFlag;
- (void)setMetaFlag:(unsigned int)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (unsigned int)localCommonFlag;
- (void)setLocalCommonFlag:(unsigned int)arg1;
- (id)openIMPrivacyAgreementUrl;
- (void)setOpenIMPrivacyAgreementUrl:(id)arg1;
- (unsigned int)localAddContactTime;
- (void)setLocalAddContactTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

