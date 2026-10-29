@interface WSHotListTemplateService : WSTemplateBaseMgr <ISearchConfigDataExt, IMMFontMgrExt>
{
    WSHotListContainerView * _hotListView; // +0x8
}
- (void)onServiceInit;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (BOOL)shouldShowEntry;
- (unsigned long long)entranceExptValue;
- (void)onSearchConfigDataUpdated;
- (id)hotListView;
- (void)setHotListView:(id)arg1;
- (void).cxx_destruct;
@end
