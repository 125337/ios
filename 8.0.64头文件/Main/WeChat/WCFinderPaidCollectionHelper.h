@interface WCFinderPaidCollectionHelper : NSObject
+ (id)tryOutTipsContentWithPaidCollection:(id)arg1;
+ (id)reportURLWithPaidCollection:(id)arg1;
+ (id)collectionTypeTagWithPaidCollection:(id)arg1;
+ (id)feedCountDescWithPaidCollection:(id)arg1;
+ (id)consumeButtonTitleWithPaidCollection:(id)arg1;
+ (id)feedWatchProgressTextWithContentVM:(id)arg1 forchComplete:(BOOL)arg2;
+ (void)openPaidCollectionWithJumpParams:(id)arg1;
+ (void)openPaidCollectionDetailWithJumpParams:(id)arg1;
+ (void)openPaidCollectionFeedListWithJumpParams:(id)arg1;
+ (void)openPaidCollectionWithShareItem:(id)arg1 shareScene:(unsigned long long)arg2;
+ (void)openPaidCollectionWithShareItem:(id)arg1 shareScene:(unsigned long long)arg2 viewController:(id)arg3;
+ (void)reportProfilePaidCollection:(id)arg1 event:(id)arg2 commentScene:(int)arg3 position:(unsigned long long)arg4;
@end
