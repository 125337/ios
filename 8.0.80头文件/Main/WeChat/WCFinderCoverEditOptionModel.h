@interface WCFinderCoverEditOptionModel : NSObject
{
    BOOL _shouldShowPreviewBtn; // +0x8
    BOOL _forbidModeChange; // +0x9
    BOOL _anchorTileShowStyle; // +0xa
    NSString * _titleTips; // +0x10
    NSString * _descTips; // +0x18
    double _coverWidHeightRatio; // +0x20
    double _leftRightMargin; // +0x28
}
- (id)init;
- (BOOL)shouldShowPreviewBtn;
- (void)setShouldShowPreviewBtn:(BOOL)arg1;
- (id)titleTips;
- (void)setTitleTips:(id)arg1;
- (id)descTips;
- (void)setDescTips:(id)arg1;
- (BOOL)forbidModeChange;
- (void)setForbidModeChange:(BOOL)arg1;
- (double)coverWidHeightRatio;
- (void)setCoverWidHeightRatio:(double)arg1;
- (double)leftRightMargin;
- (void)setLeftRightMargin:(double)arg1;
- (BOOL)anchorTileShowStyle;
- (void)setAnchorTileShowStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
