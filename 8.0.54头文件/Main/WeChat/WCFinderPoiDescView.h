@interface WCFinderPoiDescView : UIView
{
    BOOL _isExpandable; // +0x8
    id <WCFinderPoiDescViewDelegate> _delegate; // +0x10
    double _maxWidth; // +0x18
    MMUIButton * _expandButton; // +0x20
    NSMutableArray * _headItemArray; // +0x28
}
- (void)updateWithLineComponent:(id)arg1;
- (BOOL)containTag:(id)arg1;
- (id)genWordingComponentItems:(id)arg1;
- (void)updateLayout;
- (void)onClickExpandButton;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)headItemArray;
- (id)expandButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (BOOL)isExpandable;
- (void)setIsExpandable:(BOOL)arg1;
- (void)setExpandButton:(id)arg1;
- (void)setHeadItemArray:(id)arg1;
- (void).cxx_destruct;
@end

