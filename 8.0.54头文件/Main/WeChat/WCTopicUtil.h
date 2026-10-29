@interface WCTopicUtil : MMObject
+ (id)searchTagInfoFromWCDataItem:(id)arg1 commentItem:(id)arg2;
+ (id)topicSearchRegex;
+ (id)topicRangeArrWithNsContent:(id)arg1 inRange:(_NSRange)arg2;
+ (id)topicStringArrWithNsContent:(id)arg1 inRange:(_NSRange)arg2;
+ (id)topicSearchViewControllerWithDelegate:(id)arg1 context:(id)arg2;
+ (void)showTopicSearchControllerInHalfScreen:(id)arg1 inViewController:(id)arg2;
+ (id)topicQueryInfoFromText:(id)arg1;
+ (BOOL)isContentMayContainTopic:(id)arg1;
+ (id)topicContentWithoutTag:(id)arg1;
@end

