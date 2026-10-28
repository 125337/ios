@interface WAJSEventShareCurrentFinderLiveParams : NSObject
{
    unsigned long long _liveID; // +0x8
    WAJSEventShareCurrentFinderLiveParamsInstantDiscountActivityExtra * _instantDiscountActivityExtra; // +0x10
}
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (id)instantDiscountActivityExtra;
- (void)setInstantDiscountActivityExtra:(id)arg1;
- (void).cxx_destruct;
@end
