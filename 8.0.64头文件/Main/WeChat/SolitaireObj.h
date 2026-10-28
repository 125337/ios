@interface SolitaireObj : NSObject <PBCoding, NSCopying>
{
    BOOL _bJustSendPlainText; // +0x8
    BOOL _bNeedAddOccupyWhenTapTips; // +0x9
    BOOL _isActived; // +0xa
    BOOL _hasHeader; // +0xb
    BOOL _isCreateType; // +0xc
    BOOL _canQuickShowTips; // +0xd
    BOOL _bFromCallLaunch; // +0xe
    unsigned int _matchCount; // +0x10
    unsigned int _activeTime; // +0x14
    unsigned int _createTime; // +0x18
    NSString * _nsSolitaireHeader; // +0x20
    NSString * _nsSolitaireTail; // +0x28
    NSString * _nsExample; // +0x30
    NSString * _nsSeparator; // +0x38
    NSString * _nsActiveUserName; // +0x40
    NSString * _nsChatName; // +0x48
    NSString * _nsIdentifier; // +0x50
    NSString * _nsContent; // +0x58
    NSArray * _arrNewItems; // +0x60
    long long _firstSvrId; // +0x68
    unsigned long long _editScene; // +0x70
    unsigned long long _activeScene; // +0x78
    NSMutableDictionary * _dicSolitaireItem; // +0x80
    NSMutableSet * _invalidSolitaireKeySet; // +0x88
    NSMutableDictionary * _dicInvalidMsg; // +0x90
}
+ (void)PBArrayAdd_nsSolitaireHeader;
+ (void)PBArrayAdd_nsSolitaireTail;
+ (void)PBArrayAdd_nsExample;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_nsActiveUserName;
+ (void)PBArrayAdd_nsChatName;
+ (void)PBArrayAdd_hasHeader;
+ (void)PBArrayAdd_isCreateType;
+ (void)PBArrayAdd_canQuickShowTips;
+ (void)PBArrayAdd_matchCount;
+ (void)PBArrayAdd_dicSolitaireItem;
+ (void)PBArrayAdd_invalidSolitaireKeySet;
+ (void)PBArrayAdd_activeTime;
+ (void)PBArrayAdd_firstSvrId;
+ (void)PBArrayAdd_dicInvalidMsg;
+ (void)PBArrayAdd_activeScene;
+ (void)PBArrayAdd_nsIdentifier;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)dicSolitaireItem;
- (id)invalidSolitaireKeySet;
- (id)dicInvalidMsg;
- (id)getSolitaireKey;
- (void)setNsExample:(id)arg1;
- (id)nsIdentifier;
- (BOOL)editContentIFInSameNumWith:(id)arg1 Item:(id)arg2;
- (id)getDiffNewAndMergeItemsWithContents:(id)arg1;
- (void)addInvalidMsgWithItem:(id)arg1;
- (void)invalidAllItem;
- (void)addSolitaireItemsWithSolitaireInfo:(id)arg1;
- (id)getSolitaireResultWithNewLine:(BOOL)arg1;
- (id)getRangeWithContent:(id)arg1;
- (void)fixSolitaireInfo;
- (void)fixExampleInfo;
- (void)fixHeaderInfo;
- (id)getSolitaireXmlInfo;
- (void)mergeNewItems;
- (id)genSortItemsWithNewArr:(BOOL)arg1;
- (BOOL)updateDicSolitaireItemByArray:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)updateSelfInfoWithSolitaireObj:(id)arg1;
- (unsigned int)getCreateTime;
- (id)description;
- (id)nsSolitaireHeader;
- (void)setNsSolitaireHeader:(id)arg1;
- (id)nsSolitaireTail;
- (void)setNsSolitaireTail:(id)arg1;
- (id)nsExample;
- (id)nsSeparator;
- (void)setNsSeparator:(id)arg1;
- (id)nsActiveUserName;
- (void)setNsActiveUserName:(id)arg1;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (void)setNsIdentifier:(id)arg1;
- (id)nsContent;
- (void)setNsContent:(id)arg1;
- (id)arrNewItems;
- (void)setArrNewItems:(id)arg1;
- (BOOL)bJustSendPlainText;
- (void)setBJustSendPlainText:(BOOL)arg1;
- (BOOL)bNeedAddOccupyWhenTapTips;
- (void)setBNeedAddOccupyWhenTapTips:(BOOL)arg1;
- (BOOL)isActived;
- (void)setIsActived:(BOOL)arg1;
- (BOOL)hasHeader;
- (void)setHasHeader:(BOOL)arg1;
- (BOOL)isCreateType;
- (void)setIsCreateType:(BOOL)arg1;
- (BOOL)canQuickShowTips;
- (void)setCanQuickShowTips:(BOOL)arg1;
- (BOOL)bFromCallLaunch;
- (void)setBFromCallLaunch:(BOOL)arg1;
- (unsigned int)matchCount;
- (void)setMatchCount:(unsigned int)arg1;
- (unsigned int)activeTime;
- (void)setActiveTime:(unsigned int)arg1;
- (long long)firstSvrId;
- (void)setFirstSvrId:(long long)arg1;
- (unsigned long long)editScene;
- (void)setEditScene:(unsigned long long)arg1;
- (unsigned long long)activeScene;
- (void)setActiveScene:(unsigned long long)arg1;
- (void)setDicSolitaireItem:(id)arg1;
- (void)setInvalidSolitaireKeySet:(id)arg1;
- (void)setDicInvalidMsg:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
