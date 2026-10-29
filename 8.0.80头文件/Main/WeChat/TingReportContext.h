@interface TingReportContext : WXPBGeneratedMessage
+ (id)contextWithAction:(int)arg1;
+ (id)contextWithAction:(int)arg1 scene:(int)arg2;
+ (void)initialize;
- (void)fillWithListenItem:(id)arg1 belongsToCategory:(id)arg2;
- (void)fillWithTingItem:(id)arg1 belongsToCategory:(id)arg2;
- (void)fillWithCategory:(id)arg1;
@end
