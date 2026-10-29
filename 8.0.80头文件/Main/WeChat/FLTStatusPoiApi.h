@interface FLTStatusPoiApi : NSObject <WCTimelinePOIPickerViewControllerDelegate, PlatformPoiApi>
{
    id /* block */ _selectPoiCompletion; // +0x8
}
- (id)init;
- (void)selectPoiCurrent:(id)arg1 completion:(id /* block */)arg2;
- (void)jumpPoiMapPageX:(double)arg1 y:(double)arg2 scale:(long long)arg3 label:(id)arg4 mapType:(id)arg5 poiName:(id)arg6 poiId:(id)arg7 completion:(id /* block */)arg8;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIPickerCancel;
- (id)convertWCLocationInfoToLbsLife:(id)arg1;
- (id)convertLbsLifeToWCLocationInfo:(id)arg1;
- (id /* block */)selectPoiCompletion;
- (void)setSelectPoiCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
