@interface BTRecommendMsgData : NSObject
{
    BOOL _hasWeight; // +0x8
    BOOL _shouldCheckSubscription; // +0x9
    int _weight; // +0xc
    unsigned int _pos; // +0x10
    unsigned int _createTime; // +0x14
    int _style; // +0x18
    unsigned int _topRightShowMode; // +0x1c
    NSString * _msgTitle; // +0x20
    NSArray * _arrAccountData; // +0x28
    BTRecommendFeedbackInfo * _feedBackInfo; // +0x30
    NSString * _versonInfo; // +0x38
    unsigned long long _recId; // +0x40
    NSString * _recSummary; // +0x48
    NSString * _recReason; // +0x50
    NSString * _aggregationUrl; // +0x58
    NSString * _aggregationTitle; // +0x60
    NSString * _event; // +0x68
    NSString * _cardId; // +0x70
    NSString * _exptType; // +0x78
    NSString * _extraData; // +0x80
    BTRecommendFinderDataWrapper * _finderDataWrapper; // +0x88
}
- (id)firstAccountData;
- (id)msgTitle;
- (void)setMsgTitle:(id)arg1;
- (id)arrAccountData;
- (void)setArrAccountData:(id)arg1;
- (id)feedBackInfo;
- (void)setFeedBackInfo:(id)arg1;
- (int)weight;
- (void)setWeight:(int)arg1;
- (BOOL)hasWeight;
- (void)setHasWeight:(BOOL)arg1;
- (unsigned int)pos;
- (void)setPos:(unsigned int)arg1;
- (id)versonInfo;
- (void)setVersonInfo:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned long long)recId;
- (void)setRecId:(unsigned long long)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)recSummary;
- (void)setRecSummary:(id)arg1;
- (id)recReason;
- (void)setRecReason:(id)arg1;
- (id)aggregationUrl;
- (void)setAggregationUrl:(id)arg1;
- (id)aggregationTitle;
- (void)setAggregationTitle:(id)arg1;
- (unsigned int)topRightShowMode;
- (void)setTopRightShowMode:(unsigned int)arg1;
- (BOOL)shouldCheckSubscription;
- (void)setShouldCheckSubscription:(BOOL)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)exptType;
- (void)setExptType:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)finderDataWrapper;
- (void)setFinderDataWrapper:(id)arg1;
- (void).cxx_destruct;
@end
