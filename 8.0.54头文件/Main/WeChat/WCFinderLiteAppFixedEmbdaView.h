@interface WCFinderLiteAppFixedEmbdaView : UIView
{
    BOOL _alreadyStartLiteApp; // +0x8
    FinderLiteAppParam * _params; // +0x10
    id <WCFinderLiteAppFixedEmbdaViewDelegate> _delegate; // +0x18
    MMLiteAppView * _liteAppView; // +0x20
    double _originWidth; // +0x28
    OpenLiteAppInfo * _liteAppInfo; // +0x30
    CGSize _contentSize; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setParams:(id)arg1;
- (void)didMoveToWindow;
- (void)tryStartLiteApp;
- (void)onLiteAppContentSizeChagned:(unsigned int)arg1 size:(CGSize)arg2;
- (void)layoutSubviews;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)params;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (double)originWidth;
- (void)setOriginWidth:(double)arg1;
- (BOOL)alreadyStartLiteApp;
- (void)setAlreadyStartLiteApp:(BOOL)arg1;
- (id)liteAppInfo;
- (void)setLiteAppInfo:(id)arg1;
- (void).cxx_destruct;
@end

