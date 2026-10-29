@interface BrandFlowListBaseCellModel : NSObject
{
    BOOL _needSupplyData; // +0x8
    unsigned long long _type; // +0x10
    unsigned long long _fromScene; // +0x18
    NSString * _m_nsUserName; // +0x20
    FlowListItemData * _flutterItemData; // +0x28
    NSString * _recInfo; // +0x30
    NSArray * _negativeFeedbackReason; // +0x38
    NSString * _negativeFeedbackTitle; // +0x40
    NSString * _recommendExtraData; // +0x48
}
- (id)getArticleUrl;
- (id)getFinderFeedContentVM;
- (id)finderExportId;
- (void)refreshWithFinderDataItem:(id)arg1;
- (unsigned int)flowListItemTypeForReport;
- (unsigned int)itemShowType;
- (void)fillRecommendProperty:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (BOOL)needSupplyData;
- (void)setNeedSupplyData:(BOOL)arg1;
- (id)flutterItemData;
- (void)setFlutterItemData:(id)arg1;
- (id)recInfo;
- (void)setRecInfo:(id)arg1;
- (id)negativeFeedbackReason;
- (void)setNegativeFeedbackReason:(id)arg1;
- (id)negativeFeedbackTitle;
- (void)setNegativeFeedbackTitle:(id)arg1;
- (id)recommendExtraData;
- (void)setRecommendExtraData:(id)arg1;
- (void).cxx_destruct;
@end

