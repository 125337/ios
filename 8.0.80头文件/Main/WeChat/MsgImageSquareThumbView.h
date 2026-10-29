@interface MsgImageSquareThumbView : MMUIButton <YYAsyncLayerDelegate, SimpleImgInfoDelegate, MsgImgFullScreenTransitionComponent>
{
    SimpleImgInfo * m_imgInfo; // +0x8
    NSString * m_imageLocalPath; // +0x10
    NSString * m_imageSquarePath; // +0x18
    id m_target; // +0x20
    SEL m_shouldSelectSEL; // +0x28
    BOOL m_selectable; // +0x30
    BOOL m_isSelected; // +0x31
    BOOL m_isDisabled; // +0x32
    BOOL m_isExpired; // +0x33
    BOOL m_isLoading; // +0x34
    BOOL m_showMaskWhenDisabled; // +0x35
    BOOL m_bUseWebImg; // +0x36
    BOOL m_isFromFav; // +0x37
    BOOL _m_useFavCDNImageView; // +0x38
    double m_downloadPercent; // +0x40
    double m_circlePercent; // +0x48
    UIView * m_iconView; // +0x50
    UILabel * m_titleLabel; // +0x58
    UILabel * m_timeLabel; // +0x60
    UILabel * m_sizeLabel; // +0x68
    UIView * m_timeBkgView; // +0x70
    UIView * m_markSelectedView; // +0x78
    UIImageView * m_markSelectedImageView; // +0x80
    UIView * m_disabledMaskView; // +0x88
    UIImageView * m_markExpiredImageView; // +0x90
    CMessageWrap * m_msgWrap; // +0x98
    UILabel * m_percentLabel; // +0xa0
    UIProgressView * m_percentProgress; // +0xa8
    MMUIActivityIndicatorView * m_downloadingFlower; // +0xb0
    AppFileNodeProgressView * m_circleProgress; // +0xb8
    YYImage * m_image; // +0xc0
    MMWebImageView * m_webImgView; // +0xc8
    MMCDNImageView * _m_favCdnImageView; // +0xd0
    long long _m_favImageLoadSourceType; // +0xd8
}
+ (id)decodeWxamImageAtPath:(id)arg1;
+ (BOOL)isFullAsync;
+ (Class)layerClass;
+ (id)getColorForIconName:(id)arg1;
+ (BOOL)isLongImage:(id)arg1;
+ (void)compressMsgImgTOSquareImg:(id)arg1;
+ (id)compressImage:(id)arg1;
+ (CGSize)calcCompressImageSize:(id)arg1;
- (CGSize)favWallDerivedImageTargetSize;
- (id)favWallDerivedImagePathForSourcePath:(id)arg1 type:(id)arg2;
- (id)favWallOriginalDerivedImagePathForOriginalPath:(id)arg1;
- (id)favWallThumbDerivedImagePathForThumbPath:(id)arg1;
- (id)imageAtFavWallCachePath:(id)arg1;
- (id)favWallThumbFallbackImage;
- (void)configureFavImageViewForSource:(id)arg1 derivedImagePath:(id)arg2 fallbackImage:(id)arg3;
- (id)newAsyncDisplayTask;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 msgWrap:(id)arg3 selectable:(BOOL)arg4 fullAsync:(BOOL)arg5;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 msgWrap:(id)arg3 selectable:(BOOL)arg4 fullAsync:(BOOL)arg5 thumbSize:(CGSize)arg6;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 msgWrap:(id)arg3 selectable:(BOOL)arg4 fullAsync:(BOOL)arg5 thumbSize:(CGSize)arg6 useFavCDNImageView:(BOOL)arg7;
- (BOOL)isCheckImageChange;
- (CGRect)calcSelectIconFrame;
- (void)setM_selectable:(BOOL)arg1;
- (void)setM_isSelected:(BOOL)arg1;
- (void)setM_isDisabled:(BOOL)arg1;
- (void)setM_downloadPercent:(double)arg1;
- (void)setM_circlePercent:(double)arg1;
- (void)setM_isExpired:(BOOL)arg1;
- (void)setM_isLoading:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)setTimeLabel:(unsigned long long)arg1;
- (void)startLoadSquareImageIfExist;
- (void)startLoadFavImageWithCDN;
- (void)upgradeFavThumbToLocalOriginalIfNeeded;
- (void)startLoadImageSuqareImgDir;
- (void)compressAndSaveImageInBackground:(id)arg1 compressionQuality:(double)arg2 path:(id)arg3;
- (void)updateImagePath:(id)arg1;
- (void)startLoadImageWithGCD;
- (void)reloadSquareImageIfNeeded;
- (id)currentImage;
- (id)getWebImgView;
- (id)getIconView;
- (void)resetSelectedImage;
- (void)updateSelectViewAnimated:(BOOL)arg1;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)toggleSelection;
- (void)setTarget:(id)arg1 forSelectAction:(SEL)arg2;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (unsigned long long)accessibilityTraits;
- (void)hideComponent;
- (void)showComponent;
- (BOOL)isComponentHidden;
- (void)animateShowComponentWithDuration:(double)arg1;
- (id)m_imgInfo;
- (void)setM_imgInfo:(id)arg1;
- (id)m_imageLocalPath;
- (void)setM_imageLocalPath:(id)arg1;
- (BOOL)m_selectable;
- (BOOL)m_isSelected;
- (BOOL)m_isDisabled;
- (BOOL)m_isExpired;
- (BOOL)m_isLoading;
- (double)m_downloadPercent;
- (double)m_circlePercent;
- (BOOL)m_showMaskWhenDisabled;
- (void)setM_showMaskWhenDisabled:(BOOL)arg1;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_timeLabel;
- (void)setM_timeLabel:(id)arg1;
- (id)m_sizeLabel;
- (void)setM_sizeLabel:(id)arg1;
- (id)m_timeBkgView;
- (void)setM_timeBkgView:(id)arg1;
- (id)m_markSelectedView;
- (void)setM_markSelectedView:(id)arg1;
- (id)m_markSelectedImageView;
- (void)setM_markSelectedImageView:(id)arg1;
- (id)m_disabledMaskView;
- (void)setM_disabledMaskView:(id)arg1;
- (id)m_markExpiredImageView;
- (void)setM_markExpiredImageView:(id)arg1;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (id)m_percentLabel;
- (void)setM_percentLabel:(id)arg1;
- (id)m_percentProgress;
- (void)setM_percentProgress:(id)arg1;
- (id)m_downloadingFlower;
- (void)setM_downloadingFlower:(id)arg1;
- (id)m_circleProgress;
- (void)setM_circleProgress:(id)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_webImgView;
- (void)setM_webImgView:(id)arg1;
- (BOOL)m_bUseWebImg;
- (void)setM_bUseWebImg:(BOOL)arg1;
- (BOOL)m_isFromFav;
- (void)setM_isFromFav:(BOOL)arg1;
- (id)m_favCdnImageView;
- (void)setM_favCdnImageView:(id)arg1;
- (long long)m_favImageLoadSourceType;
- (void)setM_favImageLoadSourceType:(long long)arg1;
- (BOOL)m_useFavCDNImageView;
- (void)setM_useFavCDNImageView:(BOOL)arg1;
- (void).cxx_destruct;
@end
