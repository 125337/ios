@interface MMEasterEggMgr : MMUserService <MMEmoticonResExt, MMServiceProtocol>
{
    BOOL m_isShowEgg; // +0x8
    unsigned int m_uiEasterEggLastUpdateTime; // +0xc
    NSMutableArray * m_arrEgg; // +0x10
    NSMutableSet * m_disabledAppIdSet; // +0x18
}
- (void)initEggWithConfigDirPath:(id)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)onEmoticonResDeleteForSubType:(unsigned int)arg1;
- (id)parseTopAnimationFromTopAnimNode:(XmlReaderNode_t *)arg1 dirPath:(id)arg2;
- (id)parseEggAnimationFromAnimTypeNode:(XmlReaderNode_t *)arg1 dirPath:(id)arg2 clientEggVersion:(long long)arg3 ignoreImageName:(BOOL)arg4;
- (void)encodeDisabledAppIdList;
- (void)decodeDisabledAppIdList;
- (id)disabledAppIdListKey;
- (id)init;
- (BOOL)isShowEasterEgg;
- (void)setupEasterEggAttributesToMessage:(id)arg1;
- (id)easterEggWithMessage:(id)arg1;
- (void)disableEasterEggWithAppId:(id)arg1;
- (id)disabledAppIdSet;
- (void)setDisabledAppIdSet:(id)arg1;
- (void).cxx_destruct;
@end
