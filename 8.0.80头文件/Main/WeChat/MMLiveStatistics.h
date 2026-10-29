@interface MMLiveStatistics : NSObject
{
    NSArray * _monumentalItems; // +0x8
    NSArray * _highlightedItems; // +0x10
    NSArray * _genericItems; // +0x18
    NSString * _backgroundImageUri; // +0x20
    NSString * _posterQrContent; // +0x28
    FinderJumpInfo * _detailsPageJumpInfo; // +0x30
    NSString * _monumentalItemsReportingId; // +0x38
}
+ (id)statisticsWithBackendModel:(id)arg1;
- (id)monumentalItems;
- (void)setMonumentalItems:(id)arg1;
- (id)highlightedItems;
- (void)setHighlightedItems:(id)arg1;
- (id)genericItems;
- (void)setGenericItems:(id)arg1;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (id)posterQrContent;
- (void)setPosterQrContent:(id)arg1;
- (id)detailsPageJumpInfo;
- (void)setDetailsPageJumpInfo:(id)arg1;
- (id)monumentalItemsReportingId;
- (void)setMonumentalItemsReportingId:(id)arg1;
- (void).cxx_destruct;
@end
