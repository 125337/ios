@interface EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewModel : NSObject
{
    BOOL _showTitle; // +0x8
    BOOL _showRecommendPrivacy; // +0x9
    NSString * _title; // +0x10
    NSString * _packageId; // +0x18
    NSString * _introduceLabel; // +0x20
    unsigned long long _recommendPrivacyViewType; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (id)introduceLabel;
- (void)setIntroduceLabel:(id)arg1;
- (BOOL)showTitle;
- (void)setShowTitle:(BOOL)arg1;
- (BOOL)showRecommendPrivacy;
- (void)setShowRecommendPrivacy:(BOOL)arg1;
- (unsigned long long)recommendPrivacyViewType;
- (void)setRecommendPrivacyViewType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
