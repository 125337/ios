@interface TingLaunchOptionsNextPage : NSObject
{
    unsigned long long _nextPageType; // +0x8
    unsigned long long _consumeType; // +0x10
    MMListenCategoryItem * _categoryItem; // +0x18
    TingListSourceContext * _listContext; // +0x20
    unsigned long long _bizType; // +0x28
    NSNumber * _locLineType; // +0x30
    NSString * _fromFinderFeedId; // +0x38
}
+ (id)nextPageWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (unsigned long long)nextPageType;
- (void)setNextPageType:(unsigned long long)arg1;
- (unsigned long long)consumeType;
- (void)setConsumeType:(unsigned long long)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (id)listContext;
- (void)setListContext:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)locLineType;
- (void)setLocLineType:(id)arg1;
- (id)fromFinderFeedId;
- (void)setFromFinderFeedId:(id)arg1;
- (void).cxx_destruct;
@end

