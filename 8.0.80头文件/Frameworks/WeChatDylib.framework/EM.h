@interface EM : StatModel
{
    Ptr<cv::ml::EM> _nativePtrEM; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::EM>)arg1;
+ (int)DEFAULT_NCLUSTERS;
+ (int)DEFAULT_MAX_ITERS;
+ (int)START_E_STEP;
+ (int)START_M_STEP;
+ (int)START_AUTO_STEP;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::EM>)arg1;
- (int)getClustersNumber;
- (void)setClustersNumber:(int)arg1;
- (int)getCovarianceMatrixType;
- (void)setCovarianceMatrixType:(int)arg1;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (id)getWeights;
- (id)getMeans;
- (void)getCovs:(id)arg1;
- (float)predict:(id)arg1 results:(id)arg2 flags:(int)arg3;
- (float)predict:(id)arg1 results:(id)arg2;
- (float)predict:(id)arg1;
- (id)predict2:(id)arg1 probs:(id)arg2;
- (BOOL)trainEM:(id)arg1 logLikelihoods:(id)arg2 labels:(id)arg3 probs:(id)arg4;
- (BOOL)trainEM:(id)arg1 logLikelihoods:(id)arg2 labels:(id)arg3;
- (BOOL)trainEM:(id)arg1 logLikelihoods:(id)arg2;
- (BOOL)trainEM:(id)arg1;
- (BOOL)trainE:(id)arg1 means0:(id)arg2 covs0:(id)arg3 weights0:(id)arg4 logLikelihoods:(id)arg5 labels:(id)arg6 probs:(id)arg7;
- (BOOL)trainE:(id)arg1 means0:(id)arg2 covs0:(id)arg3 weights0:(id)arg4 logLikelihoods:(id)arg5 labels:(id)arg6;
- (BOOL)trainE:(id)arg1 means0:(id)arg2 covs0:(id)arg3 weights0:(id)arg4 logLikelihoods:(id)arg5;
- (BOOL)trainE:(id)arg1 means0:(id)arg2 covs0:(id)arg3 weights0:(id)arg4;
- (BOOL)trainE:(id)arg1 means0:(id)arg2 covs0:(id)arg3;
- (BOOL)trainE:(id)arg1 means0:(id)arg2;
- (BOOL)trainM:(id)arg1 probs0:(id)arg2 logLikelihoods:(id)arg3 labels:(id)arg4 probs:(id)arg5;
- (BOOL)trainM:(id)arg1 probs0:(id)arg2 logLikelihoods:(id)arg3 labels:(id)arg4;
- (BOOL)trainM:(id)arg1 probs0:(id)arg2 logLikelihoods:(id)arg3;
- (BOOL)trainM:(id)arg1 probs0:(id)arg2;
- (Ptr<cv::ml::EM>)nativePtrEM;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
