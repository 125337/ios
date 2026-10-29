@interface MMAirPlayManager : MMUserService <WCAirPlayCenterExt, MMServiceProtocol>
{
    NSMutableDictionary * _mutedToastRecords; // +0x8
}
- (id)init;
- (BOOL)canShowMutedToastForScene:(long long)arg1;
- (BOOL)showMutedToastForScene:(long long)arg1;
- (void)resetMutedToastRecordsForScene:(long long)arg1;
- (void)resetMutedToastRecordsForAllScenes;
- (void)airPlayCenter:(id)arg1 routeDidChange:(id)arg2;
- (void).cxx_destruct;
@end

