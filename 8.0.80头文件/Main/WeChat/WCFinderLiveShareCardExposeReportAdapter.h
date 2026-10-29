@interface WCFinderLiveShareCardExposeReportAdapter : NSObject
{
    BOOL _isLastEventAppear; // +0x8
    id /* block */ _reportAction; // +0x10
    NSDate * _lastAppearDate; // +0x18
}
- (void)onAppear;
- (void)onDisappear;
- (id /* block */)reportAction;
- (void)setReportAction:(id /* block */)arg1;
- (id)lastAppearDate;
- (void)setLastAppearDate:(id)arg1;
- (BOOL)isLastEventAppear;
- (void)setIsLastEventAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
