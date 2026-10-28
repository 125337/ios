@interface WCCardSecondaryView : MMUIView
{
    id <WCCardDataSource> _cardDataSource; // +0x8
    id <WCCardSecondaryViewDelegate> _delegate; // +0x10
}
- (void)dealloc;
- (id)initWithCardDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)fieldClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
