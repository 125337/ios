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
    NSDictionary * _extDict; // +0xa8
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
- (id)extDict;
- (void)setExtDict:(id)arg1;
- (void).cxx_destruct;
@end
