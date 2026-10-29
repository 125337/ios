@interface FinderPaidCollectionInfo : WXPBGeneratedMessage
+ (id)paidCollectionWithCourse:(id)arg1;
+ (id)paidCollectionWithDrama:(id)arg1;
+ (void)initialize;
- (int)collectionType;
- (id)collectionName;
- (unsigned long long)collectionTopicID;
- (unsigned long long)collectionPrice;
- (BOOL)purchaseState;
- (BOOL)existProcessingOrder;
- (id)coverImgUrl;
- (id)collectionDesc;
- (unsigned int)buyCount;
- (unsigned int)feedSortID;
- (id)contact;
- (BOOL)isInvalid;
- (unsigned int)tryOutFlag;
@end

