@interface WCFinderPanelJumpInfoCarouselModel : NSObject <PBCoding>
{
    int _businessType; // +0x8
    NSString * _feedId; // +0x10
    NSMutableArray * _showTimeStampArray; // +0x18
}
+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_showTimeStampArray;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)showTimeStampArray;
- (long long)getMaxTimeStamp;
- (id)getTodayTimeStamps;
- (id)maxValueInArray:(id)arg1;
- (id)todayTimeStampsInArray:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (void)setShowTimeStampArray:(id)arg1;
- (void).cxx_destruct;
@end

