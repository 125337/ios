@interface WATaskBarPlaceholderManager : MMUserService <MMServiceProtocol>
{
    BOOL _canShowInCurrentSession; // +0x8
    BOOL _fetchedFreshInCurrentSession; // +0x9
    BOOL _consumedInSession; // +0xa
    id /* block */ _placeholderReadyHandler; // +0x10
    unsigned long long _exposureReportedMask; // +0x18
    NSString * _dropdownSessionId; // +0x20
    NSDictionary * _lastConsumedReportInfo; // +0x28
    long long _requestGeneration; // +0x30
    NSDictionary * _activeSnapshot; // +0x38
}
- (void)fetchPlaceholderIfNeeded;
- (void)handleResponse:(id)arg1 requestId:(id)arg2;
- (void)notifyPlaceholderReady;
- (id)applyPlaceholderIfReady;
- (id)currentSessionPlaceholder;
- (BOOL)currentPlaceholderIsLight;
- (BOOL)currentPlaceholderIsAlignLeft;
- (id)currentSessionPlaceholderQuery;
- (id)currentDefaultWording;
- (id)displayableCacheInCurrentSession;
- (id)markConsumedAndGetPlaceholderWithMixerContext:(id *)arg1 guideMixerContext:(id *)arg2;
- (void)resetAppliedState;
- (id)defaultHintText;
- (id)generateClickIdWithSearchId:(id)arg1;
- (id)fallbackDocInfoWithText:(id)arg1;
- (void)reportPlaceholderExposure;
- (void)reportDefaultHintExposure;
- (void)reportClick;
- (id)jsonStringOfDict:(id)arg1;
- (id /* block */)placeholderReadyHandler;
- (void)setPlaceholderReadyHandler:(id /* block */)arg1;
- (BOOL)canShowInCurrentSession;
- (void)setCanShowInCurrentSession:(BOOL)arg1;
- (BOOL)fetchedFreshInCurrentSession;
- (void)setFetchedFreshInCurrentSession:(BOOL)arg1;
- (unsigned long long)exposureReportedMask;
- (void)setExposureReportedMask:(unsigned long long)arg1;
- (id)dropdownSessionId;
- (void)setDropdownSessionId:(id)arg1;
- (id)lastConsumedReportInfo;
- (void)setLastConsumedReportInfo:(id)arg1;
- (long long)requestGeneration;
- (void)setRequestGeneration:(long long)arg1;
- (id)activeSnapshot;
- (void)setActiveSnapshot:(id)arg1;
- (BOOL)consumedInSession;
- (void)setConsumedInSession:(BOOL)arg1;
- (void).cxx_destruct;
@end
