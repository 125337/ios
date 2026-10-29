@interface EcsFinderFeedProductContainerView : UIView <IEcsFinderFeedProductView>
{
    id <EcsFinderFeedSingleProductViewDelegate> _delegate; // +0x8
    EcsFinderFeedSingleProductViewModel * _dataVM; // +0x10
    UIView<IEcsFinderFeedProductView> * _activeView; // +0x18
    NSMutableDictionary * _viewCache; // +0x20
    NSMutableArray * _createdViews; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)allDistinctViews;
- (void)cleanup;
- (void)setDataVM:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)getOrCreateViewWithType:(int)arg1;
- (id)createViewWithType:(int)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)delegate;
- (id)dataVM;
- (id)activeView;
- (void)setActiveView:(id)arg1;
- (id)viewCache;
- (void)setViewCache:(id)arg1;
- (id)createdViews;
- (void)setCreatedViews:(id)arg1;
- (void).cxx_destruct;
@end
