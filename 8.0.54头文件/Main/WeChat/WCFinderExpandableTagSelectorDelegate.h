@interface WCFinderExpandableTagSelectorDelegate : NSObject <WCFinderExpandableTagSelectorDelegate, WCFinderExpandableTagSelectorDataSource>
{
    id <WCFinderFeedBaseViewControllerProtocol> _baseViewProtocol; // +0x8
    WCFinderLifeFilterTag * _tag; // +0x10
    id <WCFinderExpandableTagSelectorAction> _action; // +0x18
}
- (long long)tagSelector:(id)arg1 subItemCountForIdentifier:(id)arg2 indexPath:(id)arg3;
- (id)tagSelector:(id)arg1 groupTitleForIdentifier:(id)arg2 section:(long long)arg3;
- (id)tagSelector:(id)arg1 identifierAtIndex:(id)arg2 forParent:(id)arg3;
- (id)tagSelector:(id)arg1 displayTitleForIdentifier:(id)arg2;
- (long long)tagSelector:(id)arg1 numberOfGroup:(id)arg2;
- (void)tagSelector:(id)arg1 willDisplayView:(id)arg2 withIdentifier:(id)arg3;
- (void)tagSelector:(id)arg1 selectedAdded:(id)arg2 removes:(id)arg3;
- (id)identifierForTag:(id)arg1;
- (unsigned long long)tagIdFromIdentifier:(id)arg1;
- (id)defaultSelected:(id)arg1;
- (void)updateDefaultSelect:(id)arg1 forTag:(id)arg2;
- (BOOL)_updateDefaultSelect:(id)arg1 forTag:(id)arg2;
- (id)baseViewProtocol;
- (void)setBaseViewProtocol:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (void).cxx_destruct;
@end

