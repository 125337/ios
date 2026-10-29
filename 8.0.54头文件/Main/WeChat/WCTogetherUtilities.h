@interface WCTogetherUtilities : NSObject
+ (void)adjustPrivacyForUploadTask:(id)arg1;
+ (BOOL)equalTogetherUsersWithDataItem1:(id)arg1 dataItem2:(id)arg2;
+ (BOOL)containsTogetherUsername:(id)arg1 inDataItem:(id)arg2;
+ (void)enumerateContainingDataItemFromDataItems:(id)arg1 withQueryIDs:(id)arg2 usingBlock:(id /* block */)arg3;
+ (id)containingIndexesFromDataItems:(id)arg1 withQueryIDs:(id)arg2;
@end

