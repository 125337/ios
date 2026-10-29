@interface WCFinderAdCarouselCollectionViewCell : UICollectionViewCell <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderAdCarouselCollectionViewCellDelegate> _delegate; // +0x10
    NSIndexPath * _indexPath; // +0x18
    UIView * _bkgColorView; // +0x20
    UIView * _containerView; // +0x28
    UIView * _blackMaskView; // +0x30
    UIImageView * _imageView; // +0x38
    UIView * _themeColorGradientView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _descLabel; // +0x50
    UILabel * _actionLabel; // +0x58
    UIImageView * _rightArrowView; // +0x60
    WCFinderJumpInfo * _jumpInfo; // +0x68
    FinderJumpInfo_CarouselCardStyle * _cardStyle; // +0x70
    long long _cardPos; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (long long)carouselTimeInMs;
- (id)genThemeColorGradientView;
- (id)genBlackMaskView;
- (void)layoutUI;
- (id)bkgColorView;
- (id)containerView;
- (id)imageView;
- (id)titleLabel;
- (id)descLabel;
- (id)actionLabel;
- (id)rightArrowView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (void)setBkgColorView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)blackMaskView;
- (void)setBlackMaskView:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)themeColorGradientView;
- (void)setThemeColorGradientView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setActionLabel:(id)arg1;
- (void)setRightArrowView:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (id)cardStyle;
- (void)setCardStyle:(id)arg1;
- (long long)cardPos;
- (void)setCardPos:(long long)arg1;
- (void).cxx_destruct;
@end

