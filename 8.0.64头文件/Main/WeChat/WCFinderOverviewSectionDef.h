@interface WCFinderOverviewSectionDef : NSObject
{
    BOOL _enableClosure; // +0x8
    int _pbSectionId; // +0xc
    int _jumpToTabId; // +0x10
    long long _secType; // +0x18
    NSString * _sectionTitle; // +0x20
    long long _moreBtnType; // +0x28
    NSString * _reportName; // +0x30
    NSString * _reportTabName; // +0x38
    id /* block */ _saveCache; // +0x40
    id /* block */ _fromCache; // +0x48
    id /* block */ _contentChecker; // +0x50
    id /* block */ _fromPBSection; // +0x58
    Class _syncPageClass; // +0x60
    id /* block */ _syncDataFromPage; // +0x68
    id /* block */ _shouldShowTotalCount; // +0x70
    id /* block */ _readSectionInfo; // +0x78
    id /* block */ _showMoreButtonCondition; // +0x80
}
- (id)init;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (int)pbSectionId;
- (void)setPbSectionId:(int)arg1;
- (int)jumpToTabId;
- (void)setJumpToTabId:(int)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (long long)moreBtnType;
- (void)setMoreBtnType:(long long)arg1;
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
- (BOOL)enableClosure;
- (void)setEnableClosure:(BOOL)arg1;
- (id /* block */)readSectionInfo;
- (void)setReadSectionInfo:(id /* block */)arg1;
- (id /* block */)showMoreButtonCondition;
- (void)setShowMoreButtonCondition:(id /* block */)arg1;
- (void).cxx_destruct;
@end
