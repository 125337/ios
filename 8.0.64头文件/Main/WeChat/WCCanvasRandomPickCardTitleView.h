@interface WCCanvasRandomPickCardTitleView : UIView
{
    WCCanvasComponentRandomPickCardTitleInfo * _titleInfo; // +0x8
    id <WCCanvasRandomPickCardTitleViewDelegate> _delegate; // +0x10
    unsigned long long _pendingState; // +0x18
    UILabel * _titlePrefix; // +0x20
    UILabel * _highlightedContent; // +0x28
    UILabel * _titleSuffix; // +0x30
    UILabel * _allCollectedLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 titleInfo:(id)arg2 delegate:(id)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)titlePrefix;
- (id)highlightedContent;
- (id)titleSuffix;
- (id)allCollectedLabel;
- (id)generateSimpleLabelWithTextColor:(id)arg1 text:(id)arg2;
- (id)fetchHighlightedContentText;
- (void)updateViewWithState:(unsigned long long)arg1;
- (id)titleInfo;
- (void)setTitleInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)pendingState;
- (void)setPendingState:(unsigned long long)arg1;
- (void)setTitlePrefix:(id)arg1;
- (void)setHighlightedContent:(id)arg1;
- (void)setTitleSuffix:(id)arg1;
- (void)setAllCollectedLabel:(id)arg1;
- (void).cxx_destruct;
@end
