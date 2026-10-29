@interface MMFinderLiveRecommendReasonInfo : NSObject
{
    BOOL _isRecommendReasonShowInLiveComment; // +0x8
    NSString * _recommendReason; // +0x10
}
+ (id)createRecommendReasonInfo:(id)arg1 showInLiveComment:(BOOL)arg2;
- (BOOL)needShowInLiveComment;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (BOOL)isRecommendReasonShowInLiveComment;
- (void)setIsRecommendReasonShowInLiveComment:(BOOL)arg1;
- (void).cxx_destruct;
@end
