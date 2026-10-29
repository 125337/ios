@interface HardWareItem : MMObject <NSCopying>
{
    unsigned int uiHardWareShowType; // +0x8
    NSString * nsRankID; // +0x10
    NSString * nsRankTitle; // +0x18
    NSString * nsRankDisplay; // +0x20
    NSString * nsScoreTitle; // +0x28
    NSString * nsScoreDisplay; // +0x30
    NSString * nsTipDisplay; // +0x38
    NSString * nsColor; // +0x40
    NSString * nsHighLightColor; // +0x48
    NSString * nsLineColor; // +0x50
    NSString * nsHighLightLineColor; // +0x58
    NSString * nsFontColor; // +0x60
    NSString * nsChampionUsername; // +0x68
    NSString * nsDisplayUserName; // +0x70
    NSString * nsThumbUrl; // +0x78
    NSString * nsNotifyTitle; // +0x80
    unsigned int uiTimeStamp; // +0x88
    NSString * stateIconId; // +0x90
    NSString * stateText; // +0x98
    unsigned int stateExpireTime; // +0xa0
    unsigned int _uiTargetClockInNum; // +0xa4
    unsigned int _uiFocusFirstClockInNum; // +0xa8
    unsigned int _uiFocusNums; // +0xac
    unsigned int _uiTargetRemindSeq; // +0xb0
    NSString * _nsTargetClockIn; // +0xb8
    NSString * _nsTargetClockInType; // +0xc0
    NSString * _nsTargetClockInImage; // +0xc8
    NSString * _nsFocusFirstNickName; // +0xd0
    NSString * _nsFocusFirstStep; // +0xd8
    NSString * _nsFocusFirstClockIn; // +0xe0
    NSString * _nsFocusFirstClockInType; // +0xe8
    NSString * _nsFocusFirstClockInImage; // +0xf0
    NSString * _nsTargetRemindTitle; // +0xf8
    NSDictionary * _extDict; // +0x100
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)IsExpired;
- (unsigned int)uiHardWareShowType;
- (void)setUiHardWareShowType:(unsigned int)arg1;
- (id)nsRankID;
- (void)setNsRankID:(id)arg1;
- (id)nsRankTitle;
- (void)setNsRankTitle:(id)arg1;
- (id)nsRankDisplay;
- (void)setNsRankDisplay:(id)arg1;
- (id)nsScoreTitle;
- (void)setNsScoreTitle:(id)arg1;
- (id)nsScoreDisplay;
- (void)setNsScoreDisplay:(id)arg1;
- (id)nsTipDisplay;
- (void)setNsTipDisplay:(id)arg1;
- (unsigned int)uiTimeStamp;
- (void)setUiTimeStamp:(unsigned int)arg1;
- (id)nsColor;
- (void)setNsColor:(id)arg1;
- (id)nsHighLightColor;
- (void)setNsHighLightColor:(id)arg1;
- (id)nsLineColor;
- (void)setNsLineColor:(id)arg1;
- (id)nsHighLightLineColor;
- (void)setNsHighLightLineColor:(id)arg1;
- (id)nsFontColor;
- (void)setNsFontColor:(id)arg1;
- (id)nsChampionUsername;
- (void)setNsChampionUsername:(id)arg1;
- (id)nsDisplayUserName;
- (void)setNsDisplayUserName:(id)arg1;
- (id)nsThumbUrl;
- (void)setNsThumbUrl:(id)arg1;
- (id)nsNotifyTitle;
- (void)setNsNotifyTitle:(id)arg1;
- (unsigned int)stateExpireTime;
- (void)setStateExpireTime:(unsigned int)arg1;
- (id)stateIconId;
- (void)setStateIconId:(id)arg1;
- (id)stateText;
- (void)setStateText:(id)arg1;
- (id)nsTargetClockIn;
- (void)setNsTargetClockIn:(id)arg1;
- (unsigned int)uiTargetClockInNum;
- (void)setUiTargetClockInNum:(unsigned int)arg1;
- (id)nsTargetClockInType;
- (void)setNsTargetClockInType:(id)arg1;
- (id)nsTargetClockInImage;
- (void)setNsTargetClockInImage:(id)arg1;
- (id)nsFocusFirstNickName;
- (void)setNsFocusFirstNickName:(id)arg1;
- (id)nsFocusFirstStep;
- (void)setNsFocusFirstStep:(id)arg1;
- (id)nsFocusFirstClockIn;
- (void)setNsFocusFirstClockIn:(id)arg1;
- (unsigned int)uiFocusFirstClockInNum;
- (void)setUiFocusFirstClockInNum:(unsigned int)arg1;
- (id)nsFocusFirstClockInType;
- (void)setNsFocusFirstClockInType:(id)arg1;
- (id)nsFocusFirstClockInImage;
- (void)setNsFocusFirstClockInImage:(id)arg1;
- (unsigned int)uiFocusNums;
- (void)setUiFocusNums:(unsigned int)arg1;
- (id)nsTargetRemindTitle;
- (void)setNsTargetRemindTitle:(id)arg1;
- (unsigned int)uiTargetRemindSeq;
- (void)setUiTargetRemindSeq:(unsigned int)arg1;
- (id)extDict;
- (void)setExtDict:(id)arg1;
- (void).cxx_destruct;
@end
