@interface MMFinderLiveFeedStreamHighlightSummaryLogic : NSObject
{
    id <MMFinderLiveFeedStreamHighlightSummaryLogicDelegate> _delegate; // +0x8
    NSString * _highlightSummaryContent; // +0x10
    FinderLiveHighlightSummaryInfo * _highlightSummaryInfo; // +0x18
}
- (void)updateWithLiveInfo:(id)arg1;
- (void)prepareForReuse;
- (id)highlightSummaryContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHighlightSummaryContent:(id)arg1;
- (id)highlightSummaryInfo;
- (void)setHighlightSummaryInfo:(id)arg1;
- (void).cxx_destruct;
@end
