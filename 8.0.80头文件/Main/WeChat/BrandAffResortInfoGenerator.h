@interface BrandAffResortInfoGenerator : NSObject
+ (id)genBizMsgResortV2Context;
+ (id)genBizMsgResortV2ContextWithExposeItem:(id)arg1;
+ (BizMsgReSortV2ReqContext)generateResortContext;
+ (BizMsgReSortV2ReqContext)generateResortContextWithExposeItem:(id)arg1;
+ (void)fillSummaryContext:(void *)arg1 withExposeItem:(id)arg2;
+ (id)generateAllTabBoxes;
+ (id)createTabBox:(int)arg1 reddotCount:(int)arg2;
+ (int)getDiscoverTabRedDotCount;
+ (int)getContactTabRedDotCount;
+ (int)getMoreTabRedDotCount;
@end
