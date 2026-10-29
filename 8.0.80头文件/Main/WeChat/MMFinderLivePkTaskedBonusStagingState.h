@interface MMFinderLivePkTaskedBonusStagingState : NSObject <MMFinderLivePkTaskedBonusStateDescriptor>
{
    BOOL _tasksTargetGiftFetchAttempted; // +0x8
}
- (BOOL)isVisual;
- (Class)backgroundViewClass;
- (Class)contentViewClass;
- (BOOL)enableGiftingForAudience;
- (Class)projectedNextStateClassForModel:(id)arg1;
- (BOOL)tasksTargetGiftFetchAttempted;
- (void)setTasksTargetGiftFetchAttempted:(BOOL)arg1;
@end
