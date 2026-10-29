@interface WCHKWorkoutLogic : NSObject <IWCDeviceBrandMgrExt>
{
    BOOL _bHadObserverWorkout; // +0x8
    BOOL _bHKWorkoutAccessAuthStatus; // +0x9
    BOOL _controlHKQuery; // +0xa
    id <WCHKWorkoutLogicDelegate> _delegate; // +0x10
    HKHealthStore * _healthStore; // +0x18
    NSMutableDictionary * _dicActivityType; // +0x20
    HKObserverQuery * _workoutObserverQuery; // +0x28
    HKSourceQuery * _sourceQuery; // +0x30
    NSMutableDictionary * _sampleQueries; // +0x38
    NSMutableDictionary * _sampleQueryTokens; // +0x40
    unsigned long long _sourceQueryToken; // +0x48
    unsigned long long _sampleQueryToken; // +0x50
    NSMutableSet * _hadUploadActivity; // +0x58
}
- (id)init;
- (void)dealloc;
- (BOOL)p_canTryUploadWorkout;
- (void)updateHealthStoreData;
- (BOOL)getHKWorkoutSourceAccessStatus;
- (void)setHKWorkoutSourceAccessStatus:(BOOL)arg1;
- (void)tryDoObserverWorkoutNew;
- (void)tryDoObserverWorkout;
- (void)retrieveWorkouts;
- (void)querySourceWithCompletionNew:(id /* block */)arg1;
- (void)querySourceWithCompletion:(id /* block */)arg1;
- (void)queryWorkoutWithActivityTypeNew:(int)arg1 legalSources:(id)arg2;
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
- (id)workoutObserverQuery;
- (void)setWorkoutObserverQuery:(id)arg1;
- (id)sourceQuery;
- (void)setSourceQuery:(id)arg1;
- (id)sampleQueries;
- (void)setSampleQueries:(id)arg1;
- (id)sampleQueryTokens;
- (void)setSampleQueryTokens:(id)arg1;
- (unsigned long long)sourceQueryToken;
- (void)setSourceQueryToken:(unsigned long long)arg1;
- (unsigned long long)sampleQueryToken;
- (void)setSampleQueryToken:(unsigned long long)arg1;
- (BOOL)controlHKQuery;
- (void)setControlHKQuery:(BOOL)arg1;
- (id)hadUploadActivity;
- (void)setHadUploadActivity:(id)arg1;
- (void).cxx_destruct;
@end
