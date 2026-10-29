@interface WAAgentSessionCellViewModel : NSObject
{
    BOOL _thinkingCollapsed; // +0x8
    id <WAAgentSessionCellViewModelDelegate> _delegate; // +0x10
    WAAgentSessionCellItem * _item; // +0x18
    double _cellHeight; // +0x20
    NSAttributedString * _cachedParsedContent; // +0x28
    double _actualRenderedHeight; // +0x30
}
- (id)initWithItem:(id)arg1;
- (unsigned long long)cellType;
- (id)messageId;
- (id)reuseIdentifier;
- (void)updateWithItem:(id)arg1;
- (void)autoCollapseThinkingIfNeededWithNewItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (BOOL)thinkingCollapsed;
- (void)setThinkingCollapsed:(BOOL)arg1;
- (id)cachedParsedContent;
- (void)setCachedParsedContent:(id)arg1;
- (double)actualRenderedHeight;
- (void)setActualRenderedHeight:(double)arg1;
- (void).cxx_destruct;
@end
