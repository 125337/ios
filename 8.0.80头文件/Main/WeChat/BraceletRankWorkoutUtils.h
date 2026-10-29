@interface BraceletRankWorkoutUtils : NSObject
+ (BOOL)enableCheckInWorkout;
+ (id)genReportSessionId;
+ (double)calculateStepScoreViewHeight:(id)arg1;
+ (id)unitStringForTargetValueUnit:(int)arg1;
+ (id)displayAmountTextForTargetValue:(unsigned int)arg1;
+ (unsigned int)targetValueFromAmountText:(id)arg1;
+ (BOOL)isValidAmountInput:(id)arg1 maxIntegerDigitLength:(unsigned long long)arg2;
+ (BOOL)isValidAmountValue:(id)arg1 maxIntegerDigitLength:(unsigned long long)arg2;
+ (id)cloneWeRunTarget:(id)arg1;
+ (id)sportRecordFromTarget:(id)arg1 checkedCount:(unsigned int)arg2;
+ (id)p_orderedCheckedTargetsFromTargets:(id)arg1 preferredTargets:(id)arg2;
+ (id)workoutSportRecordsFromTargets:(id)arg1;
+ (id)workoutSportRecordsFromTargets:(id)arg1 preferredTargets:(id)arg2;
+ (id)recordsByReplacingWorkoutRecordsInRecords:(id)arg1 withTargets:(id)arg2;
+ (id)recordsByReplacingWorkoutRecordsInRecords:(id)arg1 withTargets:(id)arg2 preferredTargets:(id)arg3;
@end
