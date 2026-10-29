@interface BTRecoFlowMsgOpenParams : MMObject
{
    BOOL _isOpenAggregationUrl; // +0x8
    BOOL _hasItemShowType; // +0x9
    unsigned int _itemShowType; // +0xc
    unsigned int _style; // +0x10
    NSString * _aggregationUrl; // +0x18
    NSString * _contentUrl; // +0x20
    NSString * _title; // +0x28
    NSString * _digest; // +0x30
    NSString * _userName; // +0x38
    NSString * _nickName; // +0x40
    NSString * _finderFeedXml; // +0x48
}
- (BOOL)isValid;
- (BOOL)isOpenAggregationValid;
- (id)genWithRecommendItemMsg:(id)arg1;
- (BOOL)isOpenAggregationUrl;
- (void)setIsOpenAggregationUrl:(BOOL)arg1;
- (id)aggregationUrl;
- (void)setAggregationUrl:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (id)finderFeedXml;
- (void)setFinderFeedXml:(id)arg1;
- (void).cxx_destruct;
@end

