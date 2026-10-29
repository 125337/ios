@interface WCFinderTableViewCell : UITableViewCell
{
    double _contentWidth; // +0x8
    WCFinderPassThoughView * _wc_contentView; // +0x10
    NSHashTable * _hiddenOnHalfHashTable; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)clearHalfArrayNoneRenderedViews;
- (void)willBeginDisplay:(long long)arg1;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)arg1;
- (BOOL)supportLockScreenControl;
- (void)aopAddSubViewAction;
- (id)hiddenOnHalfHashTable;
- (double)contentWidth;
- (id)wc_contentView;
- (void)layoutSubviews;
- (void)reLayoutContentView;
- (void)cellStartExposeReportAction;
- (void)doCellEndExposeAction;
- (void)setDecorationViewsTranslucent:(BOOL)arg1;
- (void)_setViews:(id)arg1 isTranslucent:(BOOL)arg2 readDefaultAlpha:(BOOL)arg3 writeDefaultAlpha:(BOOL)arg4;
- (id)takeMediaCellSnapshot;
- (void)updateSnapCapture;
- (void)prepareForPreload;
- (void)setContentWidth:(double)arg1;
- (void)setWc_contentView:(id)arg1;
- (void)setHiddenOnHalfHashTable:(id)arg1;
- (void).cxx_destruct;
@end
