@interface MMPickLocationContentView : UIView <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, POITableViewCellDelegate, POICorrectionTextViewDelegate>
{
    BOOL _hasLayouted; // +0x8
    id <MMPickLocationActionDelegate> _actionDelegate; // +0x10
    MMLocationUISearchBar * _searchBar; // +0x18
    MMLocationAccuracyAuthorizationTipView * _accuracyAuthorizationTipView; // +0x20
    POITableView * _searchTableView; // +0x28
    POICorrectionTextView * _searchErrorTips; // +0x30
    POITableView * _nearTableView; // +0x38
    WCTimeLineFooterView * _nearTableFooterView; // +0x40
    WCTimeLineFooterView * _searchTableFooterView; // +0x48
    NSString * _searchKeyword; // +0x50
    PickLocationManager * _pickLocationManager; // +0x58
    double _errorTipsCenterY; // +0x60
}
+ (double)heightForTableViewCell;
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)errorTipsCenterY;
- (double)tableViewVisibleHeight;
- (double)nearbyTableContentHeightAboveIndex:(unsigned long long)arg1;
- (double)searchTableContentHeightAboveIndex:(unsigned long long)arg1;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withWidth:(float)arg3 AndKeyWord:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)tableView:(id)arg1 didSelectAt:(id)arg2;
- (id)searchBar;
- (id)accuracyAuthorizationTipView;
- (id)searchTableView;
- (id)searchErrorTips;
- (id)nearTableView;
- (id)nearTableFooterView;
- (id)searchTableFooterView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchBarAppearance;
- (id)poiCorrectionKeyWord;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setAccuracyAuthorizationTipView:(id)arg1;
- (void)setSearchTableView:(id)arg1;
- (void)setSearchErrorTips:(id)arg1;
- (void)setNearTableView:(id)arg1;
- (void)setNearTableFooterView:(id)arg1;
- (void)setSearchTableFooterView:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (id)pickLocationManager;
- (void)setPickLocationManager:(id)arg1;
- (void)setErrorTipsCenterY:(double)arg1;
- (BOOL)hasLayouted;
- (void)setHasLayouted:(BOOL)arg1;
- (void).cxx_destruct;
@end

