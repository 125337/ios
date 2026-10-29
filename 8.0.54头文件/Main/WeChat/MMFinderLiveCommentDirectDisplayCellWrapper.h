@interface MMFinderLiveCommentDirectDisplayCellWrapper : NSObject
{
    BOOL _isDisplayStart; // +0x8
    MMLiveCommentPubbleCell * _pubbleCell; // +0x10
    double _displayTime; // +0x18
    id /* block */ _dismissCallback; // +0x20
    id /* block */ _tapCallback; // +0x28
}
- (id)initWithCell:(id)arg1;
- (void)initDefaultDatas;
- (void)addTapGestureIfNeed;
- (BOOL)isSupportTap;
- (void)onDisplayStart;
- (void)autoDismiss;
- (void)onTapGestureRecognizer:(id)arg1;
- (id)pubbleCell;
- (void)setPubbleCell:(id)arg1;
- (double)displayTime;
- (void)setDisplayTime:(double)arg1;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg1;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (BOOL)isDisplayStart;
- (void)setIsDisplayStart:(BOOL)arg1;
- (void).cxx_destruct;
@end

