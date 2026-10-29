@interface OTMTimeFormatter : NSObject
+ (id)formatHHMMSS:(id)arg1;
+ (id)formatMMSS:(id)arg1;
+ (id)formatMSS:(id)arg1;
+ (id)formatMSSWithSimplification:(id)arg1;
+ (id)formatMSSWithPrimeSeperator:(id)arg1;
+ (id)FormatTimecodeEndingCentis:(id)arg1;
+ (id)FormatTimecodeEndingFrames:(id)arg1 frameDuration:(id)arg2;
+ (id)formatHHMMSSForTimeInterval:(double)arg1;
+ (id)formatMMSSForTimeInterval:(double)arg1;
+ (id)formatMSSWithSimplificationForTimeInterval:(double)arg1;
+ (id)formatMSSForTimeInterval:(double)arg1;
+ (id)formatMSSWithPrimeSeperatorForTimeInterval:(double)arg1;
@end

