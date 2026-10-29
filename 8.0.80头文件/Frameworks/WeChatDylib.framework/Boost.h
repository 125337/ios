@interface Boost : DTrees
{
    Ptr<cv::ml::Boost> _nativePtrBoost; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::Boost>)arg1;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::Boost>)arg1;
- (int)getBoostType;
- (void)setBoostType:(int)arg1;
- (int)getWeakCount;
- (void)setWeakCount:(int)arg1;
- (double)getWeightTrimRate;
- (void)setWeightTrimRate:(double)arg1;
- (Ptr<cv::ml::Boost>)nativePtrBoost;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
