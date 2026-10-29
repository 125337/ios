@interface MMMusicPostVideoAnimHelper : NSObject
{
    CGRect _thumbFrameInVC; // +0x8
    UIImage * _thumbImage; // +0x28
    MMMusicMVEditorCardCell * _curCell; // +0x30
    UIView * _selfViewInVC; // +0x38
    UIImageView * step1AnimView; // +0x40
    UIImageView * step2AnimView; // +0x48
    CGRect step3Frame; // +0x50
    UIView * step3CropView; // +0x70
    CGRect step3CropViewFrame; // +0x78
    UIView * doneCropView; // +0x98
    UIView * doneThumbImageView; // +0xa0
    UIView * cancelCropView; // +0xa8
    UIView * cancelThumbImageView; // +0xb0
    UIView * cancelCellView; // +0xb8
    BOOL isRecropMode; // +0xc0
    UIView * recropCellView; // +0xc8
    UIImageView * recropVideoFirstFrameView; // +0xd0
    CGRect recropVideoFrame; // +0xd8
    UIView * recropCropView; // +0xf8
    CGRect recropCropViewFrame; // +0x100
    UICollectionView * m_collectionView; // +0x120
    UIButton * m_cancelBtn; // +0x128
    UIButton * m_doneBtn; // +0x130
    UIView * m_titleLabel; // +0x138
}
- (id)initWithCollectionView:(id)arg1 cancelBtn:(id)arg2 doneBtn:(id)arg3 titleLabel:(id)arg4;
- (void)dealloc;
- (void)updateWithCurCell:(id)arg1 selfViewInVC:(id)arg2;
- (void)updateWithThumbFrameInVC:(CGRect)arg1 thumbImage:(id)arg2 curCell:(id)arg3 selfViewInVC:(id)arg4 editVideoPlayerViewFrame:(CGRect)arg5 editVideoCropView:(id)arg6;
- (void)startAnimWithOnStepOneBlock:(id /* block */)arg1 stepTwoBlock:(id /* block */)arg2 stepThreeAnimBlock:(id /* block */)arg3 stepThreeBlock:(id /* block */)arg4;
- (void)startAnimWhenClickCropBtn:(id)arg1 cropView:(id)arg2 editVideoPlayerViewFrame:(CGRect)arg3 curVideoFirstFrameImage:(id)arg4 animBlock:(id /* block */)arg5 doneBlock:(id /* block */)arg6;
- (void)startAnimWhenCropCancel:(id)arg1 cropView:(id)arg2 thumbImage:(id)arg3 editVideoPlayerViewFrame:(CGRect)arg4 animBlock:(id /* block */)arg5 doneBlock:(id /* block */)arg6;
- (void)startAnimWhenCropDoneWithCropView:(id)arg1 thumbImage:(id)arg2 editVideoPlayerViewFrame:(CGRect)arg3 animBlock:(id /* block */)arg4 doneBlock:(id /* block */)arg5;
- (void)createStep1View;
- (id)createStep2View:(CGRect)arg1;
- (void)createDoneThumbImageView:(id)arg1 withFrame:(CGRect)arg2;
- (void)createCancelThumbImageView:(id)arg1 withFrame:(CGRect)arg2;
- (void)createCancelCellView;
- (id)createCurCellViewViewSnapshot;
- (void)createRecropVideoFirstFrameView:(id)arg1 withFrame:(CGRect)arg2;
- (void).cxx_destruct;
@end

