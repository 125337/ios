@interface WCMomentsFinderRecommendationInfo : NSObject
{
    WCFinderRedDotCtrlInfo * _finderCtrlInfo; // +0x8
    NSArray * _usernames; // +0x10
    unsigned long long _userCount; // +0x18
    NSString * _customizedSeparatorTips; // +0x20
}
+ (id)recommendationInfoWithFinderCtrlInfo:(id)arg1;
- (id)initWithFinderCtrlInfo:(id)arg1;
- (id)finderShowInfo;
- (id)finderDataItem;
- (BOOL)isValid;
- (id)finderCtrlInfo;
- (id)usernames;
- (unsigned long long)userCount;
- (id)customizedSeparatorTips;
- (void)setCustomizedSeparatorTips:(id)arg1;
- (void).cxx_destruct;
@end

