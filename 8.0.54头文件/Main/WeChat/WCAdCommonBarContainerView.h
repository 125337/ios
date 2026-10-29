@interface WCAdCommonBarContainerView : MMUIView <WCAdBaseBarViewDelegate>
{
    id <WCAdCommonBarContainerViewDelegate> _viewDelegate; // +0x8
    WCAdBaseBarView * _baseBarView; // +0x10
}
+ (Class)barViewClass:(id)arg1;
+ (double)totalHeight:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;
- (id)createBarViewWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)updateDataItem:(id)arg1;
- (id)fetchAdOriginView;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)baseBarView;
- (void)setBaseBarView:(id)arg1;
- (void).cxx_destruct;
@end

