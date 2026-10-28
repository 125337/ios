@interface MainFrameCellData : NSObject <PBCoding>
{
    MMSessionInfo * m_sessionInfo; // +0x8
    BOOL m_isNeedUpdateDataForUI; // +0x10
    BOOL m_bIsNeedSaveCellData; // +0x11
    BOOL m_bIsModifyContact; // +0x12
    long long m_lastUnReadCount; // +0x18
    NSString * m_cpKeyForNickname; // +0x20
    NSString * m_cpKeyForMessage; // +0x28
    BOOL m_isNicknameUnsafe; // +0x30
    BOOL m_isMessageUnsafe; // +0x31
    BOOL m_isFirstInitTimeText; // +0x32
    BOOL m_isHavenInitedWithSessionInfo; // +0x33
    BOOL _m_timeIsMoreThanAWeek; // +0x34
    BOOL _m_bIsSenderFromSelf; // +0x35
    BOOL _m_bIsRoomDisplayEmpty; // +0x36
    BOOL _m_bContainsEmoji; // +0x37
    BOOL _isPositionChanged; // +0x38
    float _m_widthForMessageLabelText; // +0x3c
    float _m_widthForGreenLabelText; // +0x40
    float _m_widthForTimeLabelText; // +0x44
    float _m_widthForNameLabelText; // +0x48
    int _m_widthCacheVersion; // +0x4c
    NSString * m_oldTextForNameLabel; // +0x50
    NSString * m_nsRealUsrName; // +0x58
    unsigned long long _m_n64MesSvrID; // +0x60
    NSString * _m_nsHeadImgUsrName; // +0x68
    NSString * _m_nsHeadImgUrl; // +0x70
    NSString * _m_textForNameLabel; // +0x78
    NSString * _m_textForMessageLabel; // +0x80
    NSString * _m_textForGreenLabel; // +0x88
    NSString * _m_textForTimeLabel; // +0x90
    NSString * _m_prefixTextForQuoteMessage; // +0x98
    NSIndexPath * _currIndexPath; // +0xa0
}
+ (void)PBArrayAdd_m_nsHeadImgUsrName;
+ (void)PBArrayAdd_m_nsHeadImgUrl;
+ (void)PBArrayAdd_m_timeIsMoreThanAWeek;
+ (void)PBArrayAdd_m_widthForTimeLabelText;
+ (void)PBArrayAdd_m_widthForNameLabelText;
+ (void)PBArrayAdd_m_bIsSenderFromSelf;
+ (void)PBArrayAdd_m_textForNameLabel;
+ (void)PBArrayAdd_m_textForMessageLabel;
+ (void)PBArrayAdd_m_textForGreenLabel;
+ (void)PBArrayAdd_m_textForTimeLabel;
+ (void)PBArrayAdd_m_prefixTextForQuoteMessage;
+ (void)PBArrayAdd_m_widthForMessageLabelText;
+ (void)PBArrayAdd_m_widthForGreenLabelText;
+ (void)PBArrayAdd_m_bIsRoomDisplayEmpty;
+ (void)PBArrayAdd_m_widthCacheVersion;
+ (void)PBArrayAdd_m_n64MesSvrID;
+ (void)PBArrayAdd_m_bContainsEmoji;
+ (void)initialize;
+ (id)digestForMsg:(id)arg1;
+ (id)digestForMsg:(id)arg1 withSender:(id)arg2;
+ (id)getReplaceContentForLinkText:(id)arg1;
+ (id)pathForCellData:(id)arg1;
+ (id)dirForCellDataFile;
+ (id)dirNameForCurrentEnvironment;
+ (void)deleteCellDataFromLocal:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithSessionInfo:(id)arg1;
- (void)updateTimeField:(unsigned int)arg1;
- (int)currentVersion;
- (void)checkDataIsValid;
- (void)updateExtensionRegister:(id)arg1;
- (void)makeTextForNameLabel;
- (void)makeTextForMessageLabel;
- (void)tryMakeTemplateMessageLabel:(id)arg1;
- (float)m_widthForGreenLabelText;
- (float)m_widthForMessageLabelText;
- (id)getGroupName;
- (void)makeTextSession:(id)arg1;
- (id)getAppName:(id)arg1;
- (void)makeTextForQuoteMessage;
- (void)makeTextForPluginMessage;
- (void)updateDataAfterPBDecode:(id)arg1;
- (void)updateData:(id)arg1;
- (void)updateDataFieldForUI;
- (void)updateTextForTimeLabel;
- (void)updateWidthForNameLabel;
- (void)setCurrIndexPath:(id)arg1;
- (id)cpKeyForNickname;
- (id)cpKeyForMessage;
- (BOOL)isNicknameUnsafe;
- (BOOL)isMessageUnsafe;
- (id)m_sessionInfo;
- (void)setM_sessionInfo:(id)arg1;
- (BOOL)m_isFirstInitTimeText;
- (void)setM_isFirstInitTimeText:(BOOL)arg1;
- (BOOL)m_isHavenInitedWithSessionInfo;
- (id)m_oldTextForNameLabel;
- (void)setM_oldTextForNameLabel:(id)arg1;
- (id)m_nsRealUsrName;
- (void)setM_nsRealUsrName:(id)arg1;
- (long long)m_lastUnReadCount;
- (void)setM_lastUnReadCount:(long long)arg1;
- (BOOL)m_bIsModifyContact;
- (void)setM_bIsModifyContact:(BOOL)arg1;
- (BOOL)m_bIsNeedSaveCellData;
- (void)setM_bIsNeedSaveCellData:(BOOL)arg1;
- (void)setCpKeyForNickname:(id)arg1;
- (void)setCpKeyForMessage:(id)arg1;
- (void)setIsNicknameUnsafe:(BOOL)arg1;
- (void)setIsMessageUnsafe:(BOOL)arg1;
- (unsigned long long)m_n64MesSvrID;
- (void)setM_n64MesSvrID:(unsigned long long)arg1;
- (id)m_nsHeadImgUsrName;
- (void)setM_nsHeadImgUsrName:(id)arg1;
- (id)m_nsHeadImgUrl;
- (void)setM_nsHeadImgUrl:(id)arg1;
- (BOOL)m_timeIsMoreThanAWeek;
- (void)setM_timeIsMoreThanAWeek:(BOOL)arg1;
- (BOOL)m_bIsSenderFromSelf;
- (void)setM_bIsSenderFromSelf:(BOOL)arg1;
- (id)m_textForNameLabel;
- (void)setM_textForNameLabel:(id)arg1;
- (id)m_textForMessageLabel;
- (void)setM_textForMessageLabel:(id)arg1;
- (id)m_textForGreenLabel;
- (void)setM_textForGreenLabel:(id)arg1;
- (id)m_textForTimeLabel;
- (void)setM_textForTimeLabel:(id)arg1;
- (id)m_prefixTextForQuoteMessage;
- (void)setM_prefixTextForQuoteMessage:(id)arg1;
- (void)setM_widthForMessageLabelText:(float)arg1;
- (void)setM_widthForGreenLabelText:(float)arg1;
- (float)m_widthForTimeLabelText;
- (void)setM_widthForTimeLabelText:(float)arg1;
- (float)m_widthForNameLabelText;
- (void)setM_widthForNameLabelText:(float)arg1;
- (int)m_widthCacheVersion;
- (void)setM_widthCacheVersion:(int)arg1;
- (BOOL)m_bIsRoomDisplayEmpty;
- (void)setM_bIsRoomDisplayEmpty:(BOOL)arg1;
- (BOOL)m_bContainsEmoji;
- (void)setM_bContainsEmoji:(BOOL)arg1;
- (id)currIndexPath;
- (BOOL)isPositionChanged;
- (void)setIsPositionChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
