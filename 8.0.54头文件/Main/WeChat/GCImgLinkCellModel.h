@interface GCImgLinkCellModel : GCChatBaseCellModel
{
    GCImgLinkVideoModel * _videoModel; // +0x8
    NSString * _coverUrl; // +0x10
    JumpInfo * _jumpInfo; // +0x18
    CGSize _imgSize; // +0x20
}
- (id)initWithChatroomMessage:(id)arg1;
- (Class)bindCellClass;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)imgSize;
- (void)setImgSize:(CGSize)arg1;
- (id)videoModel;
- (void)setVideoModel:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

