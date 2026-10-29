@interface WCFinderFeedHighlightsPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isShowing; // +0x8
    int _ignoreNextUpdateCurrentPlayPositionCount; // +0xc
    id <WCFinderFeedHighlightsPanelDelegate> _actionDelegate; // +0x10
    FinderHighlightInfoParams * _highlightInfoParams; // +0x18
    WCFinderFeedHighlightStyle * _feedHighlightStyle; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
    long long _currentPlayPosition; // +0x30
    WCFinderFeedHighlightItem * _currentHightlightItem; // +0x38
    UILabel * _titleLabel; // +0x40
    UIView * _separatorLine; // +0x48
    UITableView * _tableView; // +0x50
    UIView * _footerView; // +0x58
    WCFinderNoMoreView * _noMoreView; // +0x60
    double _safeBottomInset; // +0x68
}
- (id)initWithHighlightInfoParams:(id)arg1 contentVM:(id)arg2;
- (void)updateCurrentPlayPosition:(double)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configPageSheetAndDetailView;
- (double)footerContentHeight;
- (void)layoutTitleView;
- (void)layoutTableView;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)highlightInfoParams;
- (void)setHighlightInfoParams:(id)arg1;
- (id)feedHighlightStyle;
- (void)setFeedHighlightStyle:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (long long)currentPlayPosition;
- (void)setCurrentPlayPosition:(long long)arg1;
- (id)currentHightlightItem;
- (void)setCurrentHightlightItem:(id)arg1;
- (int)ignoreNextUpdateCurrentPlayPositionCount;
- (void)setIgnoreNextUpdateCurrentPlayPositionCount:(int)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (double)safeBottomInset;
- (void)setSafeBottomInset:(double)arg1;
- (void).cxx_destruct;
@end
