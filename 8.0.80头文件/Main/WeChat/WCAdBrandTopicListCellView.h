@interface WCAdBrandTopicListCellView : UICollectionViewCell
{
    unsigned long long _index; // +0x8
    WCAdBrandSingleTopicInfo * _topicInfo; // +0x10
    double _topicCornerRadius; // +0x18
    WCAdURLImageView * _topicImageView; // +0x20
    WCAdURLImageView * _bottomImageView; // +0x28
    UIView * _highlightTopicCoverView; // +0x30
    UIImageView * _highlightBottomCoverView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateItemWithIndex:(unsigned long long)arg1 topicInfo:(id)arg2 cornerRadius:(double)arg3;
- (void)layoutSubviews;
- (id)topicImageView;
- (id)bottomImageView;
- (id)highlightTopicCoverView;
- (id)highlightBottomCoverView;
- (void)setHighlighted:(BOOL)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (double)topicCornerRadius;
- (void)setTopicCornerRadius:(double)arg1;
- (void)setTopicImageView:(id)arg1;
- (void)setBottomImageView:(id)arg1;
- (void)setHighlightTopicCoverView:(id)arg1;
- (void)setHighlightBottomCoverView:(id)arg1;
- (void).cxx_destruct;
@end
