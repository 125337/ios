@interface WCFinderLiveShareInstantDiscountActivityExtra : NSObject <NSCoding, PBCoding>
{
    NSString * _activityKey; // +0x8
    NSString * _coverMaskImageURL; // +0x10
}
+ (void)PBArrayAdd_activityKey;
+ (void)PBArrayAdd_coverMaskImageURL;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)activityKey;
- (void)setActivityKey:(id)arg1;
- (id)coverMaskImageURL;
- (void)setCoverMaskImageURL:(id)arg1;
- (void).cxx_destruct;
@end

