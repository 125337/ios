@interface MMFinderLiveFeedStreamCarouselCell : MMFinderLiveFeedStreamWidgetBaseView
{
    id <MMFinderLiveFeedStreamCarouselCellDelegate> _delegate; // +0x8
    MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> * _data; // +0x10
}
- (void)updateData:(id)arg1;
- (void)reload;
- (void)prepareForReuse;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

