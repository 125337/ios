@interface CBTAsstBoardMultiSelectViewportAnchor : NSObject
{
    BOOL _hasTargetCheckboxScreenY; // +0x8
    long long _row; // +0x10
    CBTAsstBoardBaseViewModel * _anchorViewModel; // +0x18
    double _targetCheckboxScreenY; // +0x20
    double _anchorCheckboxYInCell; // +0x28
    double _offsetFromViewportTop; // +0x30
}
- (long long)row;
- (void)setRow:(long long)arg1;
- (id)anchorViewModel;
- (void)setAnchorViewModel:(id)arg1;
- (double)targetCheckboxScreenY;
- (void)setTargetCheckboxScreenY:(double)arg1;
- (BOOL)hasTargetCheckboxScreenY;
- (void)setHasTargetCheckboxScreenY:(BOOL)arg1;
- (double)anchorCheckboxYInCell;
- (void)setAnchorCheckboxYInCell:(double)arg1;
- (double)offsetFromViewportTop;
- (void)setOffsetFromViewportTop:(double)arg1;
- (void).cxx_destruct;
@end
