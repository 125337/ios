@interface DTrees : StatModel
{
    Ptr<cv::ml::DTrees> _nativePtrDTrees; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::DTrees>)arg1;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::DTrees>)arg1;
- (int)getMaxCategories;
- (void)setMaxCategories:(int)arg1;
- (int)getMaxDepth;
- (void)setMaxDepth:(int)arg1;
- (int)getMinSampleCount;
- (void)setMinSampleCount:(int)arg1;
- (int)getCVFolds;
- (void)setCVFolds:(int)arg1;
- (BOOL)getUseSurrogates;
- (void)setUseSurrogates:(BOOL)arg1;
- (BOOL)getUse1SERule;
- (void)setUse1SERule:(BOOL)arg1;
- (BOOL)getTruncatePrunedTree;
- (void)setTruncatePrunedTree:(BOOL)arg1;
- (float)getRegressionAccuracy;
- (void)setRegressionAccuracy:(float)arg1;
- (id)getPriors;
- (void)setPriors:(id)arg1;
- (Ptr<cv::ml::DTrees>)nativePtrDTrees;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
