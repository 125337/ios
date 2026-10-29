@interface CBTCoopV2HorizontalCardGroupCoordinator : NSObject
+ (BOOL)isHorizontalCapableViewModel:(id)arg1;
+ (BOOL)viewModel:(id)arg1 belongsToSameAnswerAs:(id)arg2;
+ (BOOL)viewModel:(id)arg1 canGroupWith:(id)arg2;
+ (void)setHorizontalStyle:(BOOL)arg1 forViewModel:(id)arg2;
+ (id)groupInfoForIndex:(long long)arg1 viewModels:(id)arg2;
@end
