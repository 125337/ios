@interface ResourceMsgImageSquareThumbView : MMUIButton <YYAsyncLayerDelegate, SimpleImgInfoDelegate>
{
    BOOL _bIsSelected; // +0x8
    BOOL _bUsePureColorBackground; // +0x9
    id /* block */ _selectBlock; // +0x10
    SimpleChatLogInfo * _m_msgInfo; // +0x18
    NSString * _m_imageSquarePath; // +0x20
    UILabel * _m_titleLabel; // +0x28
    UILabel * _m_timeLabel; // +0x30
    UILabel * _m_sizeLabel; // +0x38
    UIView * _m_timeBkgView; // +0x40
    CMessageWrap * _m_msgWrap; // +0x48
    UIView * _m_markSelectedView; // +0x50
    UIImageView * _m_markSelectedImageView; // +0x58
    YYImage * _m_image; // +0x60
}
+ (Class)layerClass;
- (id)initWithMsgInfo:(id)arg1 viewSize:(CGSize)arg2;
- (void)loadImgBackground;
- (void)setBIsSelected:(BOOL)arg1;
- (void)updateSelectViewAnimated:(BOOL)arg1;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)toggleSelection;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (unsigned long long)accessibilityTraits;
- (id)newAsyncDisplayTask;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)bIsSelected;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id)m_msgInfo;
- (void)setM_msgInfo:(id)arg1;
- (id)m_imageSquarePath;
- (void)setM_imageSquarePath:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_timeLabel;
- (void)setM_timeLabel:(id)arg1;
- (id)m_sizeLabel;
- (void)setM_sizeLabel:(id)arg1;
- (id)m_timeBkgView;
- (void)setM_timeBkgView:(id)arg1;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (id)m_markSelectedView;
- (void)setM_markSelectedView:(id)arg1;
- (id)m_markSelectedImageView;
- (void)setM_markSelectedImageView:(id)arg1;
- (BOOL)bUsePureColorBackground;
- (void)setBUsePureColorBackground:(BOOL)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (void).cxx_destruct;
@end
