@interface MMSightCameraBeautifyOption : NSObject <MMSightCameraOptionProtocol>
{
    id <MMSightCameraBeautifyOptionDelegate> _delegate; // +0x8
    WCElasticLayoutView * _elasticLayoutView; // +0x10
    MMUIButton * _btnBeautifyIcon; // +0x18
    NSMutableArray * _beautyBtnArray; // +0x20
    NSArray * _beautyInfos; // +0x28
    long long _currentSelectIndex; // +0x30
    long long _currentOrientation; // +0x38
    CGRect _containerFrame; // +0x40
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (id)currentSelectedBeautyItem;
- (void)_onClickIconView;
- (void)onClickBeautyBtn:(id)arg1;
- (void)_transformViewsToIdentityAnimated:(BOOL)arg1;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_initViews;
- (id)beautyInfos;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)btnBeautifyIcon;
- (void)setBtnBeautifyIcon:(id)arg1;
- (id)beautyBtnArray;
- (void)setBeautyBtnArray:(id)arg1;
- (void)setBeautyInfos:(id)arg1;
- (long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

