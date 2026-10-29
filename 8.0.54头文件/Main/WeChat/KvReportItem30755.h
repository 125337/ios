@interface KvReportItem30755 : KvReportBaseItem
{
    BOOL _isRecommand_34; // +0x8
    BOOL _isSubscribed_36; // +0x9
    unsigned int _scene_21; // +0xc
    unsigned int _sessionId_22; // +0x10
    unsigned int _flowListItemType_23; // +0x14
    unsigned int _itemPos_24; // +0x18
    unsigned int _actionType_25; // +0x1c
    unsigned int _bizUin_29; // +0x20
    unsigned int _itemIdx_31; // +0x24
    unsigned int _itemShowType_32; // +0x28
    unsigned long long _stayTimeInMs_26; // +0x30
    NSString * _bizUserName_27; // +0x38
    NSString * _articleUrl_28; // +0x40
    unsigned long long _msgId_30; // +0x48
    NSString * _finderFeedId_33; // +0x50
    NSString * _recInfo_35; // +0x58
    unsigned long long _actionTimeInMs_37; // +0x60
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)scene_21;
- (void)setScene_21:(unsigned int)arg1;
- (unsigned int)sessionId_22;
- (void)setSessionId_22:(unsigned int)arg1;
- (unsigned int)flowListItemType_23;
- (void)setFlowListItemType_23:(unsigned int)arg1;
- (unsigned int)itemPos_24;
- (void)setItemPos_24:(unsigned int)arg1;
- (unsigned int)actionType_25;
- (void)setActionType_25:(unsigned int)arg1;
- (unsigned long long)stayTimeInMs_26;
- (void)setStayTimeInMs_26:(unsigned long long)arg1;
- (id)bizUserName_27;
- (void)setBizUserName_27:(id)arg1;
- (id)articleUrl_28;
- (void)setArticleUrl_28:(id)arg1;
- (unsigned int)bizUin_29;
- (void)setBizUin_29:(unsigned int)arg1;
- (unsigned long long)msgId_30;
- (void)setMsgId_30:(unsigned long long)arg1;
- (unsigned int)itemIdx_31;
- (void)setItemIdx_31:(unsigned int)arg1;
- (unsigned int)itemShowType_32;
- (void)setItemShowType_32:(unsigned int)arg1;
- (id)finderFeedId_33;
- (void)setFinderFeedId_33:(id)arg1;
- (BOOL)isRecommand_34;
- (void)setIsRecommand_34:(BOOL)arg1;
- (id)recInfo_35;
- (void)setRecInfo_35:(id)arg1;
- (BOOL)isSubscribed_36;
- (void)setIsSubscribed_36:(BOOL)arg1;
- (unsigned long long)actionTimeInMs_37;
- (void)setActionTimeInMs_37:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

