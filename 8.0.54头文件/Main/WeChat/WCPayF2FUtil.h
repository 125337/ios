@interface WCPayF2FUtil : NSObject
+ (unsigned long long)getTimeFormatFromSvrRetType:(unsigned long long)arg1;
+ (id)getDateDisplayContentWithTimestamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
+ (id)getDateAndTimeDisplayContentWithTimestamp:(unsigned long long)arg1;
+ (id)dateYearOnlyFormat:(id)arg1;
+ (id)dateYearAndMonthFormat:(id)arg1;
+ (id)dateYearAndMonthAndDayFormat:(id)arg1;
+ (void)reportFacingReceiveIDKeyWithKeyValue:(unsigned int)arg1;
@end

