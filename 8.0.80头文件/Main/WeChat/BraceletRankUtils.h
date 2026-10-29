@interface BraceletRankUtils : NSObject
+ (id)generateBrandIcon:(id)arg1 color:(id)arg2;
+ (double)calculateSportViewHeightWithSportRecords:(id)arg1 sportGoals:(id)arg2;
+ (id)parseJSONDataFromRecord:(id)arg1;
+ (id)categoryRecordByAppId:(id)arg1;
+ (id)filterSportRecord:(id)arg1;
+ (id)filterSportGoal:(id)arg1;
+ (BOOL)isTimeStampToday:(unsigned int)arg1;
+ (double)maxFontScale;
+ (double)dynamicLen:(double)arg1;
+ (id)dynamicFont:(double)arg1;
+ (id)dynamicFont:(double)arg1 weight:(double)arg2;
- (id)getImageView:(id)arg1 Rank:(unsigned int)arg2 Steps:(unsigned int)arg3;
- (id)generateShareImage:(id)arg1 Rank:(unsigned int)arg2 Steps:(unsigned int)arg3;
- (id)generateUploadTaskByImage:(id)arg1;
- (id)generateShareFriendMessageByImage:(id)arg1;
@end
