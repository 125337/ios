@interface MMImgPreviewData : NSObject
{
    BOOL _isNodeViewVisible; // +0x8
    MMImgDataItem * _item; // +0x10
    CGRect _nodeViewWindowFrame; // +0x18
}
- (id)item;
- (void)setItem:(id)arg1;
- (CGRect)nodeViewWindowFrame;
- (void)setNodeViewWindowFrame:(CGRect)arg1;
- (BOOL)isNodeViewVisible;
- (void)setIsNodeViewVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
