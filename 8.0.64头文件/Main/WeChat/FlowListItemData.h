@interface FlowListItemData : NSObject
{
    NSNumber * _type; // +0x8
    NSNumber * _hasLocalMsg; // +0x10
    FlowListArticleItemData * _articleData; // +0x18
    FlowListFinderItemData * _finderData; // +0x20
}
+ (id)makeWithType:(id)arg1 hasLocalMsg:(id)arg2 articleData:(id)arg3 finderData:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)hasLocalMsg;
- (void)setHasLocalMsg:(id)arg1;
- (id)articleData;
- (void)setArticleData:(id)arg1;
- (id)finderData;
- (void)setFinderData:(id)arg1;
- (void).cxx_destruct;
@end
