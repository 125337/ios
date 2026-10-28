@interface WCAdRandomPickCardContainerView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    unsigned long long _contentItemScene; // +0x10
    WCAdRandomPickCardView * _weakPickCardView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 scene:(unsigned long long)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)layoutPickCardView;
- (void)cleanUpRandomPickCardView;
- (void)refreshRandomPickCardView;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)weakPickCardView;
- (void)setWeakPickCardView:(id)arg1;
- (void).cxx_destruct;
@end
