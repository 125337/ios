@interface MMPickLocationContentView : UIView <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, POITableViewCellDelegate, POICorrectionTextViewDelegate>
{
    BOOL _recentSentKeywordExpanded; // +0x8
    BOOL _recentSentKeywordEditing; // +0x9
    BOOL _hasLayouted; // +0xa
    BOOL _showPoiRecentSent; // +0xb
    BOOL _showSelectFromFav; // +0xc
    BOOL _showDetailPreview; // +0xd
    BOOL _inSearchStateForExposure; // +0xe
    id <MMPickLocationActionDelegate> _actionDelegate; // +0x10
    MMLocationUISearchBar * _searchBar; // +0x18
    MMLocationAccuracyAuthorizationTipView * _accuracyAuthorizationTipView; // +0x20
    POITableView * _searchTableView; // +0x28
    POICorrectionTextView * _searchErrorTips; // +0x30
    POITableView * _nearTableView; // +0x38
    UIView * _recentSentKeywordView; // +0x40
    UILabel * _recentSentTitleLabel; // +0x48
    UIButton * _recentSentExpandButton; // +0x50
    UIView * _recentSentSeparatorLabel; // +0x58
    UIButton * _recentSentDeleteButton; // +0x60
    UIButton * _recentSentClearButton; // +0x68
    UIButton * _recentSentDoneButton; // +0x70
    UIButton * _favoriteLocationButton; // +0x78
    NSArray * _recentSentKeywords; // +0x80
    NSMutableArray * _recentSentKeywordButtons; // +0x88
    WCTimeLineFooterView * _nearTableFooterView; // +0x90
    WCTimeLineFooterView * _searchTableFooterView; // +0x98
    NSString * _searchKeyword; // +0xa0
    PickLocationManager * _pickLocationManager; // +0xa8
    double _errorTipsCenterY; // +0xb0
    double _searchTableViewBottomLimit; // +0xb8
    NSString * _sessionId; // +0xc0
    NSMutableSet * _reportedNearbyDetailPOIIds; // +0xc8
    NSMutableSet * _reportedSearchDetailPOIIds; // +0xd0
}
+ (double)heightForTableViewCell;
+ (id)addressLabelFont;
+ (double)addressLabelSingleLineHeight;
+ (double)contentWidthForCellWidth:(double)arg1;
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)errorTipsCenterY;
- (void)setSearchTableViewBottomLimit:(double)arg1;
- (double)limitedSearchTableViewHeightWithTop:(double)arg1;
- (double)tableViewVisibleHeight;
- (void)layoutRecentSentKeywordView;
- (void)updateRecentSentKeywordButton:(id)arg1 Editing:(BOOL)arg2;
- (double)cellWidthForLayout;
- (id)addressPrefixForPOIItem:(id)arg1;
- (double)addressLabelHeightForPOIItem:(id)arg1 contentWidth:(double)arg2;
- (double)heightForCellWithPOIItem:(id)arg1 cellWidth:(double)arg2;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withWidth:(float)arg3 AndKeyWord:(id)arg4;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withCellWidth:(float)arg3 AndKeyWord:(id)arg4 Selected:(BOOL)arg5;
- (void)updateDetailButtonForCell:(id)arg1 POIItem:(id)arg2 CellWidth:(double)arg3 CellHeight:(double)arg4;
- (void)onClickPOIDetailButton:(id)arg1;
- (void)resetDetailButtonExposureStateForScene:(unsigned long long)arg1;
- (void)reportDetailButtonExposureForPOIItem:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)isListVisibleForExposureWithScene:(unsigned long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
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
- (void)onClickRecentSentExpandButton;
- (void)onClickRecentSentDeleteButton;
- (void)onClickRecentSentClearButton;
- (void)hideKeywordList;
- (void)onClickRecentSentDoneButton;
- (void)onClickFavoriteLocationButton;
- (void)reloadRecentSentKeywordButtons;
- (id)recentSentKeywords;
- (id)recentSentKeywordView;
- (id)recentSentTitleLabel;
- (id)recentSentExpandButton;
- (id)recentSentSeparatorLabel;
- (id)recentSentDeleteButton;
- (id)recentSentClearButton;
- (id)recentSentDoneButton;
- (id)favoriteLocationButton;
- (id)recentSentKeywordButtons;
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
- (void)setRecentSentKeywordView:(id)arg1;
- (void)setRecentSentTitleLabel:(id)arg1;
- (void)setRecentSentExpandButton:(id)arg1;
- (void)setRecentSentSeparatorLabel:(id)arg1;
- (void)setRecentSentDeleteButton:(id)arg1;
- (void)setRecentSentClearButton:(id)arg1;
- (void)setRecentSentDoneButton:(id)arg1;
- (void)setFavoriteLocationButton:(id)arg1;
- (void)setRecentSentKeywords:(id)arg1;
- (void)setRecentSentKeywordButtons:(id)arg1;
- (BOOL)recentSentKeywordExpanded;
- (void)setRecentSentKeywordExpanded:(BOOL)arg1;
- (BOOL)recentSentKeywordEditing;
- (void)setRecentSentKeywordEditing:(BOOL)arg1;
- (void)setNearTableFooterView:(id)arg1;
- (void)setSearchTableFooterView:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (id)pickLocationManager;
- (void)setPickLocationManager:(id)arg1;
- (void)setErrorTipsCenterY:(double)arg1;
- (BOOL)hasLayouted;
- (void)setHasLayouted:(BOOL)arg1;
- (double)searchTableViewBottomLimit;
- (BOOL)showPoiRecentSent;
- (void)setShowPoiRecentSent:(BOOL)arg1;
- (BOOL)showSelectFromFav;
- (void)setShowSelectFromFav:(BOOL)arg1;
- (BOOL)showDetailPreview;
- (void)setShowDetailPreview:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)reportedNearbyDetailPOIIds;
- (void)setReportedNearbyDetailPOIIds:(id)arg1;
- (id)reportedSearchDetailPOIIds;
- (void)setReportedSearchDetailPOIIds:(id)arg1;
- (BOOL)inSearchStateForExposure;
- (void)setInSearchStateForExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
