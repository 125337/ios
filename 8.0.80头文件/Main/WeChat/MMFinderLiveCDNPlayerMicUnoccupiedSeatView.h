@interface MMFinderLiveCDNPlayerMicUnoccupiedSeatView : UIView
{
    BOOL _isInFullScreenLayoutMode; // +0x8
    MMFinderLiveConnectMicSeatInfo * _micSeatInfo; // +0x10
    UIImageView * _addIconView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)updateIsInFullScreenLayoutMode:(BOOL)arg1;
- (id)micSeatInfo;
- (void)setMicSeatInfo:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (BOOL)isInFullScreenLayoutMode;
- (void)setIsInFullScreenLayoutMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
