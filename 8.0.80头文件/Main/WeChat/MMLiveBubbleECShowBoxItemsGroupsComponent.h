@interface MMLiveBubbleECShowBoxItemsGroupsComponent : UIView <MMLiveBubbleComponent>
{
    MMLiveBubbleECShowBoxItemsView * _currentItemsView; // +0x8
    MMLiveBubbleECShowBoxItemsGroupsComponentInfo * _info; // +0x10
    NSString * _infoRawJSON; // +0x18
    unsigned long long _currentGroupIndex; // +0x20
    NSTimer * _rotateTimer; // +0x28
    double _lastLayoutHeight; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (void)updateWithJSONString:(id)arg1;
- (void)layoutSubviews;
- (void)stopRotate;
- (void)restartRotateIfNeeded;
- (void)onRotate;
- (void)renderCurrentGroupAnimated:(BOOL)arg1;
- (id)currentItemsView;
- (void)setCurrentItemsView:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (unsigned long long)currentGroupIndex;
- (void)setCurrentGroupIndex:(unsigned long long)arg1;
- (id)rotateTimer;
- (void)setRotateTimer:(id)arg1;
- (double)lastLayoutHeight;
- (void)setLastLayoutHeight:(double)arg1;
- (void).cxx_destruct;
@end
