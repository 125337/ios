@interface MMFinderLivePkTaskedBonusResultState : NSObject <MMFinderLivePkTaskedBonusStateDescriptor>
- (BOOL)isVisual;
- (Class)backgroundViewClass;
- (Class)contentViewClass;
- (BOOL)enableGiftingForAudience;
- (Class)projectedNextStateClassForModel:(id)arg1;
@end
