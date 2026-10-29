@interface MMSightCameraFilterOption : NSObject <MMSightCameraOptionProtocol>
{
    id <MMSightCameraFilterOptionDelegate> _delegate; // +0x8
    WCElasticLayoutView * _elasticLayoutView; // +0x10
    MMUIButton * _btnFilterIcon; // +0x18
    NSMutableArray * _filterBtnArray; // +0x20
    NSArray * _filterInfos; // +0x28
    long long _currentSelectIndex; // +0x30
    long long _currentOrientation; // +0x38
    MMLiveResourceFetcherFanoutFlowAction * _resourceFetcher; // +0x40
    CGRect _containerFrame; // +0x48
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (id)currentSelectedFilterItem;
- (void)_onClickIconView;
- (void)onClickFilterBtn:(id)arg1;
- (void)_transformViewsToIdentityAnimated:(BOOL)arg1;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_initViews;
- (void)fetchFilterResourcesWithCompletionBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)btnFilterIcon;
- (void)setBtnFilterIcon:(id)arg1;
- (id)filterBtnArray;
- (void)setFilterBtnArray:(id)arg1;
- (id)filterInfos;
- (void)setFilterInfos:(id)arg1;
- (long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (id)resourceFetcher;
- (void)setResourceFetcher:(id)arg1;
- (void).cxx_destruct;
@end

