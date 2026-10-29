@interface WAMainListNearByLogic : MMObject <PBMessageObserverDelegate, WAMainListNearByLocationLogicDelegate>
{
    BOOL _clicked; // +0x8
    BOOL _isFirstTimeFetch; // +0x9
    BOOL _isNearByDataLoaded; // +0xa
    WANearByInfo * _nearByInfo; // +0x10
    id <WAMainListNearByLogicDelegate> _delegate; // +0x18
    unsigned long long _status; // +0x20
    WAMainListNearByLocationLogic * _locationLogic; // +0x28
    id /* block */ _updateCompletion; // +0x30
}
- (id)init;
- (void)dealloc;
- (BOOL)isNearByUrlExpired;
- (BOOL)isNearByDataLoaded;
- (BOOL)hasNearByStore;
- (BOOL)isNearByThresholdValid;
- (BOOL)isNearByDataValid;
- (void)updateNearWeApp;
- (void)updateNearWeAppWithCompletion:(id /* block */)arg1;
- (unsigned long long)nearByAppNumber;
- (id)nearByPageUrl;
- (id)nearbyWeappInfo;
- (BOOL)jumpWeapp;
- (id)preViewItems;
- (void)callUpdateCompletion;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)reportWeAppLocation:(CLLocationCoordinate2D)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)parseNearByInfoFromResponse:(id)arg1;
- (id)nearByInfo;
- (void)setNearByInfo:(id)arg1;
- (BOOL)clicked;
- (void)setClicked:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (BOOL)isFirstTimeFetch;
- (void)setIsFirstTimeFetch:(BOOL)arg1;
- (void)setIsNearByDataLoaded:(BOOL)arg1;
- (id)locationLogic;
- (void)setLocationLogic:(id)arg1;
- (id /* block */)updateCompletion;
- (void)setUpdateCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

