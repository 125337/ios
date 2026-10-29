@interface WCCardUsedStoreView : MMUIView
{
    WCCardUsedStoreInfo * _usedStoreInfo; // +0x8
    id <WCCardUsedStoreViewDelegate> _delegate; // +0x10
}
+ (double)calHeight:(id)arg1;
- (id)initWithUsedStoreInfo:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onMakeACall;
- (void)onNavgation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

