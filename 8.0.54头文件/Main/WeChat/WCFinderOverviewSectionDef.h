@interface WCFinderOverviewSectionDef : NSObject
{
    int _pbSectionId; // +0x8
    int _jumpToTabId; // +0xc
    long long _secType; // +0x10
    NSString * _reportName; // +0x18
    NSString * _reportTabName; // +0x20
    id /* block */ _saveCache; // +0x28
    id /* block */ _fromCache; // +0x30
    id /* block */ _contentChecker; // +0x38
    id /* block */ _fromPBSection; // +0x40
    Class _syncPageClass; // +0x48
    id /* block */ _syncDataFromPage; // +0x50
    id /* block */ _shouldShowTotalCount; // +0x58
    id /* block */ _showMoreButtonCondition; // +0x60
}
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (int)pbSectionId;
- (void)setPbSectionId:(int)arg1;
- (int)jumpToTabId;
- (void)setJumpToTabId:(int)arg1;
- (id)reportName;
- (void)setReportName:(id)arg1;
- (id)reportTabName;
- (void)setReportTabName:(id)arg1;
- (id /* block */)saveCache;
- (void)setSaveCache:(id /* block */)arg1;
- (id /* block */)fromCache;
- (void)setFromCache:(id /* block */)arg1;
- (id /* block */)contentChecker;
- (void)setContentChecker:(id /* block */)arg1;
- (id /* block */)fromPBSection;
- (void)setFromPBSection:(id /* block */)arg1;
- (Class)syncPageClass;
- (void)setSyncPageClass:(Class)arg1;
- (id /* block */)syncDataFromPage;
- (void)setSyncDataFromPage:(id /* block */)arg1;
- (id /* block */)shouldShowTotalCount;
- (void)setShouldShowTotalCount:(id /* block */)arg1;
- (id /* block */)showMoreButtonCondition;
- (void)setShowMoreButtonCondition:(id /* block */)arg1;
- (void).cxx_destruct;
@end

