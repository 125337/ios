@interface BizPersonalCenterRecentReadCover : UIView
{
    double _outSize; // +0x8
    double _innerSize; // +0x10
    double _imgIconSize; // +0x18
    MMWebImageView * _coverImageView; // +0x20
    MMUIImageView * _playVoiceFg; // +0x28
    MMUIImageView * _playVoiceBg; // +0x30
    SightIconView * _playIconView; // +0x38
    MMUIImageView * _imgIconView; // +0x40
}
- (id)init;
- (void)setupViews;
- (void)showType:(long long)arg1 withURL:(id)arg2;
- (id)coverImageView;
- (id)playIconView;
- (id)playVoiceBg;
- (id)playVoiceFg;
- (id)imgIconView;
- (double)outSize;
- (void)setOutSize:(double)arg1;
- (double)innerSize;
- (void)setInnerSize:(double)arg1;
- (double)imgIconSize;
- (void)setImgIconSize:(double)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setPlayVoiceFg:(id)arg1;
- (void)setPlayVoiceBg:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setImgIconView:(id)arg1;
- (void).cxx_destruct;
@end

