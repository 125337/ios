@interface SolitaireInfoObj : NSObject
{
    BOOL _bHasHeader; // +0x8
    BOOL _bKeywordQuickCreate; // +0x9
    BOOL _bContainEnKeyword; // +0xa
    BOOL _isHasOccupyKeyword; // +0xb
    BOOL _isDeleteExistInfo; // +0xc
    BOOL _isOnNeedMsg; // +0xd
    BOOL _bFromXmlInfo; // +0xe
    BOOL _bFromOriginEdit; // +0xf
    unsigned int _localId; // +0x10
    unsigned int _createTime; // +0x14
    NSString * _sid; // +0x18
    NSString * _msgClientId; // +0x20
    NSString * _nsKey; // +0x28
    NSString * _nsIdentifier; // +0x30
    unsigned long long _msgSvrID; // +0x38
    NSString * _chatName; // +0x40
    NSString * _fromUserName; // +0x48
    NSString * _activeUserName; // +0x50
    NSString * _nsHeader; // +0x58
    NSString * _nsTail; // +0x60
    NSString * _nsExample; // +0x68
    NSString * _nsSeparator; // +0x70
    NSString * _nsContent; // +0x78
    NSArray * _arrItems; // +0x80
}
- (id)nsSeparator;
- (id)getSolitaireKey;
- (id)nsKey;
- (void)fixHearInfo;
- (id)createSolitaire;
- (id)getText;
- (BOOL)isHasKeyword;
- (id)nsIdentifier;
- (BOOL)isHasCNKeyword;
- (BOOL)isHasENKeyword;
- (BOOL)isMathKeywordWithRegex:(id)arg1;
- (BOOL)isWordExceedMaxCount;
- (id)description;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)msgClientId;
- (void)setMsgClientId:(id)arg1;
- (BOOL)bHasHeader;
- (void)setBHasHeader:(BOOL)arg1;
- (void)setNsKey:(id)arg1;
- (void)setNsIdentifier:(id)arg1;
- (BOOL)bKeywordQuickCreate;
- (void)setBKeywordQuickCreate:(BOOL)arg1;
- (BOOL)bContainEnKeyword;
- (void)setBContainEnKeyword:(BOOL)arg1;
- (BOOL)isHasOccupyKeyword;
- (void)setIsHasOccupyKeyword:(BOOL)arg1;
- (BOOL)isDeleteExistInfo;
- (void)setIsDeleteExistInfo:(BOOL)arg1;
- (BOOL)isOnNeedMsg;
- (void)setIsOnNeedMsg:(BOOL)arg1;
- (BOOL)bFromXmlInfo;
- (void)setBFromXmlInfo:(BOOL)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned long long)msgSvrID;
- (void)setMsgSvrID:(unsigned long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)activeUserName;
- (void)setActiveUserName:(id)arg1;
- (BOOL)bFromOriginEdit;
- (void)setBFromOriginEdit:(BOOL)arg1;
- (id)nsHeader;
- (void)setNsHeader:(id)arg1;
- (id)nsTail;
- (void)setNsTail:(id)arg1;
- (id)nsExample;
- (void)setNsExample:(id)arg1;
- (void)setNsSeparator:(id)arg1;
- (id)nsContent;
- (void)setNsContent:(id)arg1;
- (id)arrItems;
- (void)setArrItems:(id)arg1;
- (void).cxx_destruct;
@end
