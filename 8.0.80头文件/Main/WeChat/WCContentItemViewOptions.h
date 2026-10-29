@interface WCContentItemViewOptions : NSObject
{
    BOOL _showsDetail; // +0x8
    unsigned long long _scene; // +0x10
    WCMomentsPageContext * _pageContext; // +0x18
    double _contentWidth; // +0x20
    CGSize _adjustedMediaSize; // +0x28
}
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)showsDetail;
- (void)setShowsDetail:(BOOL)arg1;
- (CGSize)adjustedMediaSize;
- (void)setAdjustedMediaSize:(CGSize)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (void).cxx_destruct;
@end
