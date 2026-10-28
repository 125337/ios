@interface WCCardLayoutStorage : MMObject <PBCoding>
{
    BOOL _bShowLayoutRed; // +0x8
    unsigned int _layoutRedEndTime; // +0xc
    unsigned int _layoutUpdateTime; // +0x10
    unsigned int _topScene; // +0x14
    unsigned int _homePageCardNum; // +0x18
    NSMutableArray * _expiringList; // +0x20
    NSMutableArray * _memberCardList; // +0x28
    NSMutableArray * _nearbyList; // +0x30
    NSMutableArray * _recentList; // +0x38
    NSMutableArray * _labelList; // +0x40
    NSMutableArray * _firstList; // +0x48
    NSString * _layoutBuff; // +0x50
    NSString * _layoutTip; // +0x58
    NSString * _entrySubTitle; // +0x60
    CardsHomePageList * _cardsHomePageList; // +0x68
    SecEntranceCardList * _secEntranceCardList; // +0x70
}
+ (void)PBArrayAdd_expiringList;
+ (void)PBArrayAdd_memberCardList;
+ (void)PBArrayAdd_nearbyList;
+ (void)PBArrayAdd_layoutBuff;
+ (void)PBArrayAdd_bShowLayoutRed;
+ (void)PBArrayAdd_layoutRedEndTime;
+ (void)PBArrayAdd_layoutTip;
+ (void)PBArrayAdd_layoutUpdateTime;
+ (void)PBArrayAdd_entrySubTitle;
+ (void)PBArrayAdd_topScene;
+ (void)PBArrayAdd_recentList;
+ (void)PBArrayAdd_cardsHomePageList;
+ (void)PBArrayAdd_homePageCardNum;
+ (void)PBArrayAdd_secEntranceCardList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)expiringList;
- (void)setExpiringList:(id)arg1;
- (id)memberCardList;
- (void)setMemberCardList:(id)arg1;
- (id)nearbyList;
- (void)setNearbyList:(id)arg1;
- (id)recentList;
- (void)setRecentList:(id)arg1;
- (id)labelList;
- (void)setLabelList:(id)arg1;
- (id)firstList;
- (void)setFirstList:(id)arg1;
- (id)layoutBuff;
- (void)setLayoutBuff:(id)arg1;
- (BOOL)bShowLayoutRed;
- (void)setBShowLayoutRed:(BOOL)arg1;
- (unsigned int)layoutRedEndTime;
- (void)setLayoutRedEndTime:(unsigned int)arg1;
- (id)layoutTip;
- (void)setLayoutTip:(id)arg1;
- (unsigned int)layoutUpdateTime;
- (void)setLayoutUpdateTime:(unsigned int)arg1;
- (id)entrySubTitle;
- (void)setEntrySubTitle:(id)arg1;
- (unsigned int)topScene;
- (void)setTopScene:(unsigned int)arg1;
- (id)cardsHomePageList;
- (void)setCardsHomePageList:(id)arg1;
- (unsigned int)homePageCardNum;
- (void)setHomePageCardNum:(unsigned int)arg1;
- (id)secEntranceCardList;
- (void)setSecEntranceCardList:(id)arg1;
- (void).cxx_destruct;
@end
