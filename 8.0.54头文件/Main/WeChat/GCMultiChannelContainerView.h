@interface GCMultiChannelContainerView : UIView <GCChannelTitleDelegate, UIScrollViewDelegate>
{
    UIScrollView * _scrollView; // +0x8
    GCChannelTitleView * _channelTitleView; // +0x10
    GCMultiMessageViewModel * _viewModel; // +0x18
    NSMutableArray * _msgViewModelConfigArray; // +0x20
    UIView * _scrollContainerView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)initTitleView:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)onChangeToIndex:(unsigned long long)arg1;
- (void)relayoutViewWhenSizeChange;
- (void)dealloc;
- (void)didSelectChannelAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)handleScrollViewEnd:(id)arg1;
- (void)initScrollView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)channelTitleView;
- (void)setChannelTitleView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)msgViewModelConfigArray;
- (void)setMsgViewModelConfigArray:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (void).cxx_destruct;
@end

