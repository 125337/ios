@interface WCHKWorkoutLogic : NSObject <IWCDeviceBrandMgrExt>
{
    BOOL _bHadObserverWorkout; // +0x8
    BOOL _bHKWorkoutAccessAuthStatus; // +0x9
    id <WCHKWorkoutLogicDelegate> _delegate; // +0x10
    HKHealthStore * _healthStore; // +0x18
    NSMutableDictionary * _dicActivityType; // +0x20
    NSMutableSet * _hadUploadActivity; // +0x28
}
- (id)init;
- (BOOL)p_canTryUploadWorkout;
- (void)updateHealthStoreData;
- (BOOL)getHKWorkoutSourceAccessStatus;
- (void)setHKWorkoutSourceAccessStatus:(BOOL)arg1;
- (void)tryDoObserverWorkout;
- (void)retrieveWorkouts;
- (void)querySourceWithCompletion:(id /* block */)arg1;
- (void)queryWorkoutWithActivityType:(int)arg1 legalSources:(id)arg2;
- (void)onQueryCompeletedWithResult:(id)arg1 activityType:(unsigned long long)arg2;
- (void)onUploadSportRecordReponse:(id)arg1 success:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bHadObserverWorkout;
- (void)setBHadObserverWorkout:(BOOL)arg1;
- (BOOL)bHKWorkoutAccessAuthStatus;
- (void)setBHKWorkoutAccessAuthStatus:(BOOL)arg1;
- (id)healthStore;
- (void)setHealthStore:(id)arg1;
- (id)dicActivityType;
- (void)setDicActivityType:(id)arg1;
- (id)hadUploadActivity;
- (void)setHadUploadActivity:(id)arg1;
- (void).cxx_destruct;
@end
