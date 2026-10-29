@interface RTrees : DTrees
{
    Ptr<cv::ml::RTrees> _nativePtrRTrees; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::RTrees>)arg1;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::RTrees>)arg1;
- (BOOL)getCalculateVarImportance;
- (void)setCalculateVarImportance:(BOOL)arg1;
- (int)getActiveVarCount;
- (void)setActiveVarCount:(int)arg1;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (id)getVarImportance;
- (void)getVotes:(id)arg1 results:(id)arg2 flags:(int)arg3;
- (double)getOOBError;
- (Ptr<cv::ml::RTrees>)nativePtrRTrees;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
