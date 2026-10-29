@interface EmoticonGridView : MMUIView <EmoticonDescMgrExt, EmoticonViewWithPreviewDelegate>
{
    BOOL _darkMode; // +0x8
    BOOL _needAdjustPreviewColor; // +0x9
    BOOL _shouldDisableRemoteDesc; // +0xa
    BOOL _shouldDisableDescUpdateExtension; // +0xb
    NSArray * _emoticonWrapArray; // +0x10
    NSString * _packageId; // +0x18
    long long _column; // +0x20
    long long _row; // +0x28
    double _itemWidth; // +0x30
    double _itemHeight; // +0x38
    double _edgeTop; // +0x40
    double _edgeLeft; // +0x48
    double _intervalX; // +0x50
    double _intervalY; // +0x58
    id <EmoticonGridViewDelegate> _delegate; // +0x60
    NSMutableArray * _emoticonViewArray; // +0x68
}
- (void)dealloc;
- (id)customPackageId;
- (id)cameraPackageId;
- (id)initWithFrame:(CGRect)arg1;
- (id)emoticonKey;
- (id)buttonKey;
- (void)reloadData;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (void)hideAllFocus;
- (void)onLongPressWithLocation:(CGPoint)arg1;
- (long long)getRealIndexFromPoint:(CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)getPreviewSuperview;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (id)emoticonWrapArray;
- (void)setEmoticonWrapArray:(id)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (long long)column;
- (void)setColumn:(long long)arg1;
- (long long)row;
- (void)setRow:(long long)arg1;
- (double)itemWidth;
- (void)setItemWidth:(double)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (double)edgeTop;
- (void)setEdgeTop:(double)arg1;
- (double)edgeLeft;
- (void)setEdgeLeft:(double)arg1;
- (double)intervalX;
- (void)setIntervalX:(double)arg1;
- (double)intervalY;
- (void)setIntervalY:(double)arg1;
- (BOOL)darkMode;
- (void)setDarkMode:(BOOL)arg1;
- (BOOL)needAdjustPreviewColor;
- (void)setNeedAdjustPreviewColor:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldDisableRemoteDesc;
- (void)setShouldDisableRemoteDesc:(BOOL)arg1;
- (BOOL)shouldDisableDescUpdateExtension;
- (void)setShouldDisableDescUpdateExtension:(BOOL)arg1;
- (id)emoticonViewArray;
- (void)setEmoticonViewArray:(id)arg1;
- (void).cxx_destruct;
@end

