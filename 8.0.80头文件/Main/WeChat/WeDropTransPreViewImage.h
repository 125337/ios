@interface WeDropTransPreViewImage : UIImageView <WeDropHeaderViewComponent>
{
    BOOL _toMoreAlpha; // +0x8
    BOOL _noNeedAnimation; // +0x9
    NSArray * _contentInfos; // +0x10
    UIImage * _thumbImg; // +0x18
    UIImageView * _multiContentBgView; // +0x20
    UIImageView * _imageView; // +0x28
    UILabel * _fileSize; // +0x30
    UILabel * _fileName; // +0x38
    double _progress; // +0x40
    UIView * _fileImageView; // +0x48
    UIView * _thumbBackGroundView; // +0x50
}
- (id)initWithContentInfos:(id)arg1 thumbImg:(id)arg2 needAnimation:(BOOL)arg3;
- (void)initSubview;
- (void)updateNoNeedAnimation:(BOOL)arg1;
- (void)updateFileSizeHidden:(BOOL)arg1;
- (CGRect)visibleContentBounds;
- (void)updateFileNameColorByTransFinish:(BOOL)arg1;
- (void)startAlphaAnimating;
- (void)updateProgrss:(double)arg1;
- (void)sizeToFitWidth:(double)arg1;
- (id)contentInfos;
- (void)setContentInfos:(id)arg1;
- (id)thumbImg;
- (void)setThumbImg:(id)arg1;
- (id)multiContentBgView;
- (void)setMultiContentBgView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)fileSize;
- (void)setFileSize:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (BOOL)toMoreAlpha;
- (void)setToMoreAlpha:(BOOL)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (id)fileImageView;
- (void)setFileImageView:(id)arg1;
- (BOOL)noNeedAnimation;
- (void)setNoNeedAnimation:(BOOL)arg1;
- (id)thumbBackGroundView;
- (void)setThumbBackGroundView:(id)arg1;
- (void).cxx_destruct;
@end
