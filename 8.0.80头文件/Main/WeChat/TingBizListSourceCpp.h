@interface TingBizListSourceCpp : TingPlayTaskServiceCpp <TingBizListSource>
+ (id)createWithSingleItem:(id)arg1;
+ (id)createWithItems:(id)arg1;
- (id)getInitialItem;
- (void)setRecommendCategoryItem:(id)arg1 enableRecommend:(BOOL)arg2;
- (void)enableRecommend;
- (void)disableRecommend:(int)arg1;
@end
