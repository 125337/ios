@interface QMCPreprocessedCommonData : NSObject
{
    NSDictionary * _mergedController; // +0x8
    NSDictionary * _mergedBase; // +0x10
    NSDictionary * _mergedNormalState; // +0x18
    NSDictionary * _mergedSelectedState; // +0x20
}
- (id)initWithMergedController:(id)arg1 mergedBase:(id)arg2 mergedNormalState:(id)arg3 mergedSelectedState:(id)arg4;
- (id)mergedController;
- (void)setMergedController:(id)arg1;
- (id)mergedBase;
- (void)setMergedBase:(id)arg1;
- (id)mergedNormalState;
- (void)setMergedNormalState:(id)arg1;
- (id)mergedSelectedState;
- (void)setMergedSelectedState:(id)arg1;
- (void).cxx_destruct;
@end
